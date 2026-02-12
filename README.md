Multi-Utility Program – C Project

By Suyash Bajpai

Overview

This is a menu-driven C program that I built to combine multiple utilities and small games in one place.
It includes a calculator, temperature converter, diary (file handling), and games like Tic Tac Toe and Rock-Paper-Scissors, along with a simple login system.

Login System

There are two types of users:

Developer

Username: suyash

Password: rmdir

Full access to all features

Guest

Username: guest

Password: 666

Limited access

If login fails, the user is asked for feedback using the diary feature.

Features
Study Section

Calculator
Supports addition, subtraction, multiplication, division, sine, cosine, tangent, logarithm, factorial, power, and square root.

Temperature Converter
Converts between Celsius, Fahrenheit, and Kelvin.

Diary
Allows users to write and save entries to a file using file handling.

Games

Multiplayer – Tic Tac Toe
Two-player console game (X and O) on a 3×3 board with win and draw detection.

Single Player – Rock Paper Scissors
Player vs computer game using random choices.

How to Run

Compile:

gcc main.c -o project -lm


Run:

./project

Language & Libraries

Language: C

Libraries used:
stdio.h, stdlib.h, string.h, math.h, time.h

Limitations

Input validation is basic

Games are simple (no AI)

Factorial is limited by data type size

Future Scope

More calculator functions

Better UI

More games

Stronger authentication

Author

Suyash Bajpai
📧 suyashbajpai2201@gmail.com
