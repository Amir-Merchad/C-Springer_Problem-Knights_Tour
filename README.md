# ♞ Knight's Tour Problem Solver in C

[![C](https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))  
[![GitHub Stars](https://img.shields.io/github/stars/yourusername/knights-tour?style=social)](https://github.com/yourusername/knights-tour/stargazers)  

A C program that solves the **Knight's Tour problem** (Springerproblem in German), which asks whether a knight can move to every square on a chessboard exactly once.

This was submitted as part of a university homework assignment for Datastructure Alogrithms and Programming (DAP1) course at the TU Dortmund.

---

## 📌 Problem Description

The **Knight's Tour** is a classic backtracking problem where the goal is to visit every square on an `N x N` chessboard exactly once using only legal knight moves.

This solution uses **backtracking** to explore all valid paths. The board size and starting position can be customized.

---

## 💻 How It Works

- The board is initialized as a 2D array.
- The knight starts at a given position.
- Recursively tries each of the 8 possible knight moves.
- Uses backtracking to discard invalid paths.
- If a complete tour is found, the result is printed.

---

## 📁 Project Structure

~~~plaintext
knights-tour/
├── main.c         # Contains the logic and entry point
└── README.md      # Project documentation
~~~

---

## 🛠️ Technologies Used

| Tech                 | Notes                                     |
|----------------------|-------------------------------------------|
| C                    | Core language used for implementation     |
| GCC                  | Used for compiling the project            |
| Makefile             | Simplifies build process                  |
| Sublime Text / CLion | JetBrains IDE used for development        |

---

## 🧠 What I Learned

- Recursive backtracking in C
- Handling edge cases and memory safety in low-level programming
- Chessboard logic and knight move validation
- Structuring modular C code with headers
- Optimizing search and recursion to avoid dead ends

---

## 🔧 Build and Run

### Compile using GCC:

```bash
gcc main.c -o knights_tour
./knights_tour
