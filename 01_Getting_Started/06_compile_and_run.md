# Compile and Run a C++ Program

C++ is a **compiled programming language**. Before a C++ program can run, its source code must be translated into machine-readable instructions by a compiler.

---

## 1. Write the Program

A C++ program is usually written in a file with the `.cpp` extension.

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

Save the file as:

```text
hello_world.cpp
```

---

## 2. Compile the Program

A compiler converts C++ source code into an executable program.

Using the GNU C++ compiler:

```bash
g++ hello_world.cpp -o hello_world
```

### What each part means

- `g++` → runs the GNU C++ compiler
- `hello_world.cpp` → the source file
- `-o` → specifies the output file name
- `hello_world` → the executable that will be created

On Windows, the executable is typically:

```text
hello_world.exe
```

---

## 3. Run the Program

### Windows

```bash
.\hello_world.exe
```

### Linux / macOS

```bash
./hello_world
```

Expected output:

```text
Hello, World!
```

---

## 4. Use a Specific C++ Standard

C++ has evolved through multiple standards:

- C++11
- C++14
- C++17
- C++20
- C++23

Compile with C++17:

```bash
g++ -std=c++17 hello_world.cpp -o hello_world
```

Compile with C++20:

```bash
g++ -std=c++20 hello_world.cpp -o hello_world
```

Compile with C++23:

```bash
g++ -std=c++23 hello_world.cpp -o hello_world
```

Using an explicit standard helps ensure that the compiler uses the language features you expect.

---

## 5. Enable Compiler Warnings

Warnings help detect suspicious or unsafe code.

```bash
g++ -std=c++17 -Wall -Wextra hello_world.cpp -o hello_world
```

Useful flags:

- `-Wall` → enables many common warnings
- `-Wextra` → enables additional warnings
- `-pedantic` → warns about code that does not strictly follow the C++ standard

A useful learning command is:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic program.cpp -o program
```

---

## 6. The Basic Workflow

```text
Write Source Code
        ↓
Save as .cpp File
        ↓
Compile
        ↓
Fix Errors and Warnings
        ↓
Generate Executable
        ↓
Run Program
        ↓
Test Output
```

In short:

```text
Write → Compile → Fix → Run → Test
```

---

## 7. Source Code vs Executable

### Source code

Human-readable C++ code written by a programmer.

Example:

```text
hello_world.cpp
```

### Executable

The final program produced after successful compilation.

Windows:

```text
hello_world.exe
```

Linux/macOS:

```text
hello_world
```

---

## 8. Compilation Errors

A compilation error occurs when the compiler cannot successfully translate the code.

Incorrect:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello World"
    return 0;
}
```

The semicolon is missing.

Correct:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello World";
    return 0;
}
```

Common causes of compilation errors include:

- Missing semicolons
- Misspelled keywords
- Missing header files
- Incorrect variable names
- Missing quotation marks
- Mismatched parentheses
- Mismatched braces
- Undeclared variables
- Incorrect function syntax
- Invalid data types

---

## 9. Example: Undeclared Variable

Incorrect:

```cpp
#include <iostream>

int main() {
    std::cout << age << std::endl;
    return 0;
}
```

Correct:

```cpp
#include <iostream>

int main() {
    int age = 20;
    std::cout << age << std::endl;
    return 0;
}
```

---

## 10. Example: Missing Header

Incorrect:

```cpp
int main() {
    std::cout << "Hello" << std::endl;
    return 0;
}
```

Correct:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello" << std::endl;
    return 0;
}
```

`std::cout` belongs to the standard input/output library provided through `<iostream>`.

---

## 11. Compiler Warnings

A program may compile successfully and still produce warnings.

Example:

```cpp
int main() {
    int number;
    return 0;
}
```

A compiler may warn that `number` was declared but never used.

Warnings should not be ignored because they often reveal bugs or poor coding practices.

---

## 12. Syntax Errors

A syntax error occurs when code does not follow the grammatical rules of C++.

Incorrect:

```cpp
if (5 > 3 {
    std::cout << "True";
}
```

Correct:

```cpp
if (5 > 3) {
    std::cout << "True";
}
```

---

## 13. Runtime Errors

A runtime error occurs after the program has compiled successfully but fails while running.

Examples include:

- Invalid memory access
- Dereferencing an invalid pointer
- File access failures
- Accessing invalid array positions
- Certain division-by-zero cases

Compilation success does not guarantee that a program is correct.

---

## 14. Logical Errors

A logical error occurs when the program runs but produces the wrong result.

Incorrect:

```cpp
int length = 5;
int width = 4;

int area = length + width;
```

Correct:

```cpp
int area = length * width;
```

Logical errors are usually discovered through testing and debugging.

---

## 15. The C++ Build Process

A simplified C++ build process is:

```text
Source Code
    ↓
Preprocessor
    ↓
Compiler
    ↓
Assembler
    ↓
Linker
    ↓
Executable
```

### Preprocessing

The preprocessor handles directives beginning with `#`.

Example:

```cpp
#include <iostream>
```

Other directives include:

```cpp
#define
#ifdef
#ifndef
#endif
```

### Compilation

The compiler checks the program and translates C++ code into lower-level instructions.

### Assembly

The assembler converts assembly instructions into object code.

Common object-file extensions:

```text
.o
.obj
```

### Linking

The linker combines object files and required libraries into the final executable.

---

## 16. Source File to Executable

```text
hello_world.cpp
      ↓
Preprocessor
      ↓
Compiler
      ↓
Object Code
      ↓
Linker
      ↓
Executable
```

---

## 17. Compile Without Choosing an Output Name

If you run:

```bash
g++ hello_world.cpp
```

the compiler may create a default executable.

Windows:

```text
a.exe
```

Linux/macOS:

```text
a.out
```

A meaningful output name is usually better:

```bash
g++ hello_world.cpp -o hello_world
```

---

## 18. Multiple Source Files

Larger C++ programs are often split into multiple files.

Example:

```text
main.cpp
calculator.cpp
calculator.h
```

Compile multiple source files together:

```bash
g++ main.cpp calculator.cpp -o calculator
```

Run on Windows:

```bash
.\calculator.exe
```

Run on Linux/macOS:

```bash
./calculator
```

---

## 19. Header and Source Files

A simple multi-file project may look like this:

```text
project/
│
├── main.cpp
├── calculator.cpp
└── calculator.h
```

This helps keep larger programs organized and modular.

---

## 20. Compile Only Without Linking

The `-c` option compiles a source file into an object file without creating the final executable.

```bash
g++ -c main.cpp
```

This may create:

```text
main.o
```

Compile another file:

```bash
g++ -c calculator.cpp
```

This may create:

```text
calculator.o
```

Then link both object files:

```bash
g++ main.o calculator.o -o calculator
```

---

## 21. Debug Build

Use `-g` to include debugging information:

```bash
g++ -g hello_world.cpp -o hello_world
```

This is useful when working with debugging tools.

---

## 22. Optimization

Compilers can optimize programs.

Example:

```bash
g++ -O2 hello_world.cpp -o hello_world
```

Common optimization levels:

```text
-O0
-O1
-O2
-O3
```

For beginners, optimization flags are not essential, but they become useful later.

---

## 23. A Practical Compilation Command

```bash
g++ -std=c++17 -Wall -Wextra -pedantic program.cpp -o program
```

Explanation:

- `-std=c++17` → use the C++17 standard
- `-Wall` → enable common warnings
- `-Wextra` → enable extra warnings
- `-pedantic` → check stricter standard compliance
- `-o program` → name the executable `program`

---

## 24. Example Program

Create:

```text
example.cpp
```

Code:

```cpp
#include <iostream>

int main() {
    std::cout << "Learning how C++ compilation works." << std::endl;
    return 0;
}
```

Compile:

```bash
g++ -std=c++17 -Wall -Wextra example.cpp -o example
```

Run on Windows:

```bash
.\example.exe
```

Run on Linux/macOS:

```bash
./example
```

Expected output:

```text
Learning how C++ compilation works.
```

---

## 25. Important C++ File Types

| Extension | Purpose |
|---|---|
| `.cpp` | C++ source file |
| `.h` | Header file |
| `.hpp` | C++ header file |
| `.o` | Object file on many Unix-like systems |
| `.obj` | Object file commonly used on Windows |
| `.exe` | Windows executable |

---

## 26. Should Executable Files Be Uploaded to GitHub?

Usually, no.

Generated files such as:

```text
.exe
.o
.obj
.out
```

should normally not be committed.

Add them to `.gitignore`:

```gitignore
*.exe
*.o
*.obj
*.out
```

This keeps the repository focused on source code.

---

## 27. Important Terms

### Source Code
Human-readable code written by a programmer.

### Compiler
Software that translates C++ source code into lower-level code.

### Compilation
The process of translating source code.

### Executable
The final program that can be run by the operating system.

### Syntax Error
An error caused by invalid C++ syntax.

### Warning
A possible issue detected by the compiler that may not stop compilation.

### Runtime Error
An error that occurs while the program is running.

### Logical Error
A mistake that causes incorrect output even though the program runs.

### Linker
Combines compiled object files and libraries into the final executable.

### Header File
A file commonly used for declarations and reusable interfaces.

### Object File
An intermediate compiled file used before linking.

---

## 28. Key Takeaway

A C++ program normally follows this path:

```text
Write Code
   ↓
Compile Code
   ↓
Read Errors and Warnings
   ↓
Fix Problems
   ↓
Create Executable
   ↓
Run Program
   ↓
Test the Result
```

A good C++ programmer should understand not only how to write code, but also how that code is transformed into a working program.

---

## Repository Location

```text
cpp-mastery/
└── 01_Getting_Started/
    └── 06_compile_and_run.md
```


