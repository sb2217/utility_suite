# README: Multi-Utility Program by Suyash Bajpai

## Overview
This program is a multi-utility software created by **Suyash Bajpai**. It offers multiple features such as a calculator, a temperature converter, and simple games like Tic Tac Toe and Rock-Paper-Scissors. The program also includes authentication for two types of users: **Suyash** (developer) and **guest**.

---

## Features

### 1. **Authentication System**
- **Username:** The program supports two users:
  - Developer: Username = `suyash`, Password = `rmdir`
    - Grants access to the full program and all its features.
  - Guest: Username = `guest`, Password = `666`
    - Provides limited access to selected features.
- Invalid credentials result in access denial.

### 2. **Study Options**
Once logged in, users can select from the following options:

#### a. Calculator
A multi-functional calculator that supports:
- **Arithmetic Operations:** Addition, Subtraction, Multiplication, Division
- **Trigonometric Functions:** Sine, Cosine, Tangent (input in degrees)
- **Mathematical Functions:** Factorial, Exponentiation, Square Root, Logarithm

#### b. Temperature Converter
- Converts temperatures between:
  - Celsius, Fahrenheit, and Kelvin
- User-friendly prompts guide through the conversion process.

### 3. **Games**
#### a. Multiplayer: Tic Tac Toe
- A simple implementation of the Tic Tac Toe game.
- Two players alternate as `X` and `O` to fill a 3x3 board.
- The game ends when a player wins or if the board is full (draw).

#### b. Single Player: Rock-Paper-Scissors
- Play against the computer.
- Randomized choices for the computer ensure fairness.

### 4. **Exit Option**
- Allows the user to exit the program gracefully at any point.

---

## Usage
### Running the Program
1. Compile the program using a C compiler (e.g., GCC):
   ```bash
   gcc -o multi_utility_program multi_utility_program.c -lm
   ```
2. Run the program:
   ```bash
   ./multi_utility_program
   ```

### Navigation
- Follow the on-screen prompts to enter choices and perform operations.
- Input must match the specified format to avoid errors.

### Authentication
- To use the full version of the program:
  - **User ID:** `suyash`
  - **Password:** `rmdir`
- To use the guest mode:
  - **User ID:** `guest`
  - **Password:** `666`

---

## Development Details
### Programming Language
The program is written in **C**.

### Libraries Used
- `stdio.h`: For input/output
- `stdlib.h`: For standard utilities
- `string.h`: For string manipulation
- `math.h`: For mathematical calculations
- `time.h`: For randomization in games

### Constants Defined
- `M_PI`: Value of Pi for trigonometric calculations

---

## Known Limitations
- Input validation is basic and may not handle all edge cases.
- The games (Tic Tac Toe and Rock-Paper-Scissors) are simple and lack advanced features.
- Factorial calculations are limited by the `long long` data type.

---

## Future Enhancements
- Add advanced mathematical functions to the calculator.
- Implement additional games.
- Improve input validation and error handling.
- Enhance the user interface for a more interactive experience.

---

## Author
**Suyash Bajpai**
- Email: suyashbajpai2201@gmail.com

