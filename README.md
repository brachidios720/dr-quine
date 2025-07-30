# dr-quine
Dr_Quine is a project from the 42 curriculum where you must write self-replicating programs (quines). Each program must output its own source code or replicate itself without reading from its source file. This project sharpens your skills in string formatting and compilation.


# 🌀 Dr_Quine

## 📌 Description
**Dr_Quine** is a project from the 42 curriculum where the goal is to create **self-replicating programs** (*quines*).  
A quine is a program that can print its own source code without reading it from a file.  
This project strengthens your understanding of:
- String formatting and escaping
- Code introspection
- Compilation and execution details

---

## 🚀 Project Structure

Dr_Quine/
├── C/
│ ├── Colleen.c
│ ├── Grace.c
│ ├── Sully.c
│ └── Makefile
└── (Optional)
└── ASM/ # Bonus: solutions in Assembly


### **Colleen**
Prints its own source code on execution.

### **Grace**
Writes its own source code to a file named `Grace_kid.c`, using preprocessor macros only (no `main`).

### **Sully**
Replicates itself into files (`Sully_5.c`, `Sully_4.c`, …) and executes each copy until the counter reaches `0`.

---

## 🛠 Usage

### 1️⃣ Build the programs
From the `C/` directory:
```bash
make

./Colleen
./Grace
./Sully


$ ./Colleen
# → Outputs its own source code

$ ./Grace
$ cat Grace_kid.c
# → Prints the exact same source code as Grace.c

$ ./Sully
# → Creates Sully_4.c, Sully_3.c, ..., and executes each one


