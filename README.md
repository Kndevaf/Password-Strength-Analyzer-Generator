# 🔐 Password Strength Analyzer & Generator (C)

A command-line **security utility written in C** that analyzes password strength and generates strong passwords. This project demonstrates **core C programming skills** while applying **cybersecurity principles** such as entropy, complexity, and input validation.

---

## Features

* Password strength analysis (length, complexity, character variety)
* Strength scoring system (0–5)
* Strong password generator
* Menu-driven CLI interface
* Modular C design using header files
* Cross-platform (macOS, Linux)

---

## Concepts Demonstrated

* C99 standard
* Functions and header files
* `string.h` and `ctype.h`
* Random number generation
* Input validation
* Security-focused logic

---

## Project Structure

```
password_tool/
│── main.c          # Program entry point
│── strength.c      # Password strength logic
│── strength.h
│── generator.c     # Password generator
│── generator.h
│── README.md
```

---

## Build & Run

### Requirements

* macOS or Linux
* Clang or GCC compiler

### Compile

```bash
clang -std=c99 main.c strength.c generator.c -o password_tool
```

### Run

```bash
./password_tool
```

---

## Example Output

```
1. Check Password Strength
2. Generate Strong Password
3. Exit
Choice: 1
Enter password: P@ssw0rd123
Strength score: 5 / 5
```

---

## How Password Strength Is Evaluated

A password gains points for:

* Minimum length (8+ characters)
* Uppercase letters
* Lowercase letters
* Numbers
* Special characters

Maximum score: **5**

---

## Disclaimer

This tool is for **educational purposes only**. It does not store or transmit passwords and should not be used as a production security system.

---

## Future Improvements

* Entropy-based scoring
* Dictionary attack detection
* File-based password audits
* Secure random number generation (`/dev/urandom`)
* ANSI colorized output

---

## Author

**F.K Madagu**
Cybersecurity & IT | C Programming | Authentication & Security Tools

---

