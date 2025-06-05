
# HackerRank C Programs 🧠💻

A curated collection of beginner to intermediate level **C language programs**, written to solve various **HackerRank problems**. These solutions focus on clarity, efficiency, and helping learners understand core programming concepts like arrays, loops, functions, conditionals, dynamic memory, and more.

> 📌 Built with dedication and passion — learning one line of C at a time.

---

![GitHub repo size](https://img.shields.io/github/repo-size/MIRACULOUS65/HackerRank-C-Codes)
![GitHub last commit](https://img.shields.io/github/last-commit/MIRACULOUS65/HackerRank-C-Codes)
![GitHub top language](https://img.shields.io/github/languages/top/MIRACULOUS65/HackerRank-C-Codes)
![GitHub license](https://img.shields.io/github/license/MIRACULOUS65/HackerRank-C-Codes)
![GitHub stars](https://img.shields.io/github/stars/MIRACULOUS65/HackerRank-C-Codes?style=social)

---

## 🚀 Features

- ✅ Clean and readable C code
- ✅ Covers foundational concepts:
  - Arrays
  - Loops (`for`, `while`)
  - Functions
  - Recursion
  - Conditional Statements
  - Bitwise Operators
  - Dynamic Memory Allocation
- 🧪 Each file is independently runnable and testable

---

## 📂 Folder Structure

```
📁 HackerRank-C-Codes/
├── 1D Arrays in C.c
├── Bitwise Operators.c
├── Boxes through a Tunnel.c
├── Calculate the Nth term.c
├── Conditional Statements in C.c
├── Digit Frequency.c
├── Dynamic Array in C.c
├── For Loop in C.c
├── Functions in C.c
└── ...
```

---

## 🛠️ Technologies Used

- **Language:** C (ANSI C - C99 standard)
- **Platform:** [HackerRank](https://www.hackerrank.com/)

---

## 🧠 Sample Highlights

### ✅ 1D Arrays in C
Reads values into an array and sums them:
```c
int arr[r];
for (i=0; i<r; i++) scanf("%d",&arr[i]);
for (i=0; i<r; i++) sum += arr[i];
printf("%d", sum);
```

### ✅ Recursion — Nth Term
```c
return find_nth_term(n-1, a, b, c) + 
       find_nth_term(n-2, a, b, c) + 
       find_nth_term(n-3, a, b, c);
```

### ✅ Dynamic Array Logic
```c
total_number_of_pages[shelf] = 
    realloc(total_number_of_pages[shelf], sizeof(int) * total_number_of_books[shelf]);
```

---

## 📥 How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/MIRACULOUS65/HackerRank-C-Codes
   cd HackerRank-C-Codes
   ```

2. Compile and run any file:
   ```bash
   gcc filename.c -o output
   ./output
   ```

---

## 🙋‍♂️ Author

Made with 💙 by [Sushovan Ghosh](https://www.linkedin.com/in/sushovan-ghosh)  
>  💡 Passionate about C, systems programming, and clean code.

---

## 🌐 Connect with Me

- 📧 LinkedIn: [@sushovan-ghosh](https://www.linkedin.com/in/sushovan-ghosh)
- 💻 GitHub: [MIRACULOUS65](https://github.com/MIRACULOUS65)

---

## 📜 License

This repository is open-source 

---

_If you found this repo helpful, feel free to ⭐ it and share it!_
