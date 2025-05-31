#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int toIndex(int x, int y, int size){ //Return position index
	if (x < 0 || y < 0 || x >= size || y >= size) {
		return -1;
	} else {
		return y * size + x;
	}
}

int isValid(int x, int y, bool* visited, int size){//check if index is available on board and if Position is visited
	int pos = toIndex(x,y,size);
	if (pos == -1){
		return 0;
	}
	return visited[pos] == false;
}

void printBoard(int* path, int size) {//print board
	printf("\nSpringer-Tour Pfad:\n\n");
	for (int y = 0; y < size; y++) {
		for (int x = 0; x < size; x++) {
			int index = toIndex(x, y, size);
			printf("%2d ", path[index]);
		}
		printf("\n");
	}
}

bool solveKnightTour(int x, int y, int moveCount, bool* visited, int* path, int size){//solve the problem recrusively
	if (moveCount == size*size) {
		return true;
	}

	int dx[]={-2,-1,1,2,2,1,-1,-2};
	int dy[]={-1,-2,-2,-1,1,2,2,1};

	for (int i=0; i < 8; i++){ //check for availability of position
		int posx = x + dx[i];
		int posy = y + dy[i];
		int moveIndex = toIndex(posx, posy, size);
		int Valid = isValid (posx, posy, visited,size);

		if (Valid) {
			visited[moveIndex] = true;
			path[moveIndex] = moveCount;

			if (solveKnightTour(posx,posy,moveCount+1,visited, path,size)){
				return true;
			}

			visited[moveIndex] = false;
			path[moveIndex] = -1;
		}
	}
	return false;
}

int main() {
	int x = 0, y = 0, dim = 8;
	printf("Springerproblem loesung...\n");
	printf("Das Schachbrett ist %d*%d = %d\n",dim,dim,(dim*dim));
	int path[(dim*dim)];
	for (int i = 0; i< dim*dim; i++){
		path[i] = -1;
	}

	int index = toIndex(x, y, dim);

	if (index != -1) {
		printf("Die Startposition ist %d mit (x=%d, y=%d)\n",index, x, y);
	} else {
		printf("Ungueltige Position!\n");
	}

	bool visited[(dim*dim)];

	for (int i = 0; i < (dim*dim); i++){
		visited[i] = false;
	}

	visited[index]=true;
	path[index] = 0;

	if (solveKnightTour(x,y,1,visited,path,dim)){
		printf("Eine vollständige Springer-Tour ist möglich!\n");
		printBoard(path, dim);
	} else {
		printf("Keine vollständige Springer-Tour möglich.\n");
	}
	return 0;
}
