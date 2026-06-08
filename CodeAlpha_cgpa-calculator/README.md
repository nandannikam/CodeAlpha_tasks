# GPA & CGPA Calculator - CodeAlpha Internship Task

## 📝 Overview
This repository contains a **Console-Based GPA and CGPA Calculator** developed in C++ as part of the **CodeAlpha** internship program. The application allows students to calculate their Grade Point Average (GPA) for individual semesters and their Cumulative Grade Point Average (CGPA) across multiple semesters based on a standard 4.0 grading scale.

## ✨ Key Features
* **Dynamic Input:**
  * Define the number of semesters and the number of courses per semester dynamically.
* **Semester-wise GPA Calculation:**
  * Accurately calculates the GPA for each semester based on course credits and letter grades.
* **Overall CGPA Calculation:**
  * Aggregates the GPA of all entered semesters to compute the final CGPA.
* **Robust Grade Validation:**
  * Accepts standard letter grades (A, B, C, D, F) in both uppercase and lowercase.
  * Prompts the user to re-enter the grade if an invalid character is inputted, preventing calculation errors.
* **Standardized 4.0 Scale:**
  * Uses the standard grading point system: A = 4.0, B = 3.0, C = 2.0, D = 1.0, F = 0.0.

## 💻 Tech Stack & Concepts Used
* **Language:** C++
* **Core Concepts:** * Procedural Programming.
  * Control Structures (while loops, for loops, if-else statements).
  * Input/Output Streams (`<iostream>`).
  * Arithmetic operations and data type casting (handling floating-point math for accurate averages).

## 🚀 How to Run the Project

**Prerequisites:**
You need a C++ compiler (like GCC or Clang) installed on your system.

**Steps:**
1. **Clone the repository:**
   ```bash
   git clone <your-repository-url>
   cd <your-repository-folder>
2. Compile the code:
   ```bash
   g++ gpa_calculator.cpp -o gpa_calculator
3. Run the executable:

* Windows:
   ```bash
   DOS
   gpa_calculator.exe
* Linux/Mac:

   ```bash
   ./gpa_calculator
   
## 🛠️ Usage Guide
1. Launch the application.

2. Enter the total number of semesters you wish to calculate the CGPA for.

3. For each semester, the system will prompt you to enter the number of courses.

4. For every course in that semester:

   * Enter the credit weight (e.g., 3 or 4).

   * Enter the letter grade achieved (A, B, C, D, or F).

5. The system will display the calculated GPA at the end of each semester's input.

6. Once all semesters are entered, the program will output the final CGPA.

## 📂 File Structure
**gpa_calculator.cpp** : The main C++ source code containing the calculation logic                             and user interface.

## 🎓 Acknowledgements

This project was developed as a task for the CodeAlpha software development internship program.

## 👤 Author
- **Name:** Nandan Nikam
- **Student ID:**  CA/DF1/67227
- **Role:** C++ Programming Intern at CodeAlpha
- **Task:** Task 1 - CGPA Calculator
