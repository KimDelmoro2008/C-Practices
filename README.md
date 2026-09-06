# C++ Practices

![Language](https://img.shields.io/badge/language-C%2B%2B-00599C?logo=cplusplus)
![Status](https://img.shields.io/badge/status-active-brightgreen)
![License](https://img.shields.io/badge/license-MIT-blue)

A growing collection of C++ programs written to practice and strengthen core programming fundamentals — from basic I/O and control flow to small simulated real-world systems (ATMs, payroll, ticketing, queues, and more).

Each folder is a self-contained mini-project: a focused problem, a clean solution, and room to experiment.

---

## 📖 Table of Contents

- [About](#-about)
- [Tech Stack](#-tech-stack)
- [Repository Structure](#-repository-structure)
- [Projects](#-projects)
- [Getting Started](#-getting-started)
  - [Prerequisites](#prerequisites)
  - [Cloning the Repository](#cloning-the-repository)
  - [Compiling a Program](#compiling-a-program)
- [Learning Focus](#-learning-focus)
- [Roadmap](#-roadmap)
- [Contributing](#-contributing)
- [License](#-license)
- [Contact](#-contact)

---

## 📌 About

This repository documents my journey learning and practicing **C++**. Every project here was built to reinforce a specific concept — variables and data types, conditionals, loops, functions, structs, arrays, and simple system design — through small, practical programs rather than abstract exercises.

The goal isn't just working code, but code that's **readable, organized, and easy to build on**, which is why each concept lives in its own clearly named folder.

---

## 🧰 Tech Stack

| Tool | Purpose |
|---|---|
| **C++** | Core language for all programs |
| **g++ / GCC** | Compiling and running programs locally |
| **VS Code** | Primary editor (see `.vscode/` config) |
| **Git & GitHub** | Version control and project hosting |

---

## 🗂 Repository Structure

```
C-Practices/
├── .vscode/                              # Editor configuration
├── 03/                                   # Early practice set
├── ATM Withdrawal Simulator/
├── Another Calculator/
├── Drawing using cout/
├── Electricity Bill Calculator/
├── Employee Payroll Calculator/
├── Error Checker/
├── Food Ordering System/
├── Grading System/
├── Hospital Emergency Room Queue System/
├── Movie Ticketing System/
├── Name Recognition/
├── Online Quiz Grading System/
├── Online Shopping System/
├── Parking Lot Fee Calculator/
├── Restaurant System/
├── Review/
├── School Login Portal/
├── Score Checker/
├── Self Introduction with double, int/
├── Simple Calculator/
├── Simple Introduction/
├── To-do List System/
├── Training Power Reps/
├── LICENSE
└── README.md
```

Each project folder contains its own `.cpp` source file(s) and can be built and run independently — no cross-folder dependencies.

---

## 📁 Projects

| # | Project | Description | Core Concepts |
|---|---|---|---|
| 1 | [ATM Withdrawal Simulator](./ATM%20Withdrawal%20Simulator) | Simulates ATM cash withdrawal logic, including balance and limit checks | Conditionals, functions |
| 2 | [Another Calculator](./Another%20Calculator) | A second take on a basic arithmetic calculator | Switch/if statements, arithmetic operators |
| 3 | [Drawing using cout](./Drawing%20using%20cout) | Console-based shapes/patterns rendered with `cout` | Loops, formatting |
| 4 | [Electricity Bill Calculator](./Electricity%20Bill%20Calculator) | Computes electricity charges based on units consumed | Conditionals, arithmetic |
| 5 | [Employee Payroll Calculator](./Employee%20Payroll%20Calculator) | Calculates employee pay from rate and hours/deductions | Functions, data types |
| 6 | [Error Checker](./Error%20Checker) | Validates user input and flags invalid entries | Input validation, conditionals |
| 7 | [Food Ordering System](./Food%20Ordering%20System%2C) | Console-based food ordering flow with menu and totals | Arrays/structs, loops |
| 8 | [Grading System](./Grading%20System) | Converts numeric scores into letter grades | Conditionals, functions |
| 9 | [Hospital Emergency Room Queue System](./Hospital%20Emergency%20Room%20Queue%20System) | Simulates a patient queue for an ER | Queues, structs |
| 10 | [Movie Ticketing System](./Movie%20Ticketing%20System) | Simulates booking movie tickets with seat/price logic | Structs, arrays |
| 11 | [Name Recognition](./Name%20Recognition) | Basic string handling and name recognition logic | Strings |
| 12 | [Online Quiz Grading System](./Online%20Quiz%20Grading%20System) | Automatically grades quiz answers | Arrays, conditionals |
| 13 | [Online Shopping System](./Online%20Shopping%20System) | Simulates an online cart and checkout process | Structs, loops, arithmetic |
| 14 | [Parking Lot Fee Calculator](./Parking%20Lot%20Fee%20Calculator) | Calculates parking fees based on duration | Arithmetic, conditionals |
| 15 | [Restaurant System](./Restaurant%20System) | Simple restaurant ordering/management simulation | Structs, functions |
| 16 | [Review](./Review) | General review and mixed practice exercises | Mixed fundamentals |
| 17 | [School Login Portal](./School%20Login%20Portal) | Simulated login/authentication flow for a school system | Conditionals, strings |
| 18 | [Score Checker](./Score%20Checker) | Checks and validates scores against set criteria | Conditionals |
| 19 | [Self Introduction with double, int](./Self%20Introduction%20with%20double%2C%20int) | Practice using `int` and `double` data types together | Data types |
| 20 | [Simple Calculator](./Simple%20Calculator) | A beginner-friendly arithmetic calculator | Switch/if statements |
| 21 | [Simple Introduction](./Simple%20Introduction) | A first "hello world"-style introduction program | Basic I/O |
| 22 | [To-do List System](./To-do%20List%20System) | Console-based to-do list manager | Arrays, loops |
| 23 | [Training Power Reps](./Training%20Power%20Reps) | Practice reps/exercises for reinforcing fundamentals | Mixed fundamentals |

> 📝 New programs are added as I continue practicing — this table is updated alongside the repo.

---

## 🚀 Getting Started

### Prerequisites

- A C++ compiler such as **g++** (via [MinGW](https://www.mingw-w64.org/) on Windows, or pre-installed on most Linux/macOS systems)
- (Optional) [VS Code](https://code.visualstudio.com/) with the C/C++ extension for the best experience

### Cloning the Repository

```bash
git clone https://github.com/KimDelmoroProjects/C-Practices.git
cd C-Practices
```

### Compiling a Program

Navigate into any project folder and compile its `.cpp` file:

```bash
cd "Simple Calculator"
g++ main.cpp -o program
./program        # On Windows: program.exe
```

> Replace `main.cpp` with the actual filename inside the folder you're running.

---

## 🎯 Learning Focus

This repository is intentionally scoped around fundamentals, including:

- Variables, data types, and type conversion
- Conditional logic (`if`, `else if`, `switch`)
- Loops (`for`, `while`) — kept intentionally free of `do-while`
- Functions and parameter passing
- Arrays and structs
- Simple simulated systems that combine the above into something practical

---

## 🗺 Roadmap

- [ ] Add more object-oriented (class-based) practice projects
- [ ] Introduce file I/O based programs
- [ ] Add unit tests for select projects
- [ ] Expand README with usage examples per project

---

## 🤝 Contributing

This is primarily a personal learning repository, but suggestions and feedback are welcome:

1. Fork the repo
2. Create a feature branch (`git checkout -b suggestion/improvement`)
3. Commit your changes
4. Open a pull request

---

## 📄 License

This project is licensed under the **MIT License** — see the [LICENSE](./LICENSE) file for details.

---

## 📬 Contact

**Kim Delmoro**
GitHub: [@KimDelmoroProjects](https://github.com/KimDelmoroProjects)

If you find this repo useful for your own C++ practice, feel free to ⭐ star it!
