
# Basic Banking System - CodeAlpha Internship Task

## 📝 Overview
This repository contains a **Console-Based Banking System** developed in C++ as part of the **CodeAlpha** internship program. The application simulates basic banking operations, allowing users to create accounts, manage their funds, and securely save their transaction histories using local file handling. 

## ✨ Key Features
* **Account Management:**
  * Create a new bank account with a unique Account Number and secure PIN.
  * Duplicate account number prevention.
* **Secure User Authentication:**
  * Login system requiring both the Account Number and PIN to access the user dashboard.
* **Financial Transactions:**
  * **Deposit:** Add funds to the account.
  * **Withdrawal:** Withdraw funds (includes a maximum limit check of 10,000 per transaction and insufficient funds validation).
  * **Fund Transfer:** Securely transfer money from the logged-in account to another registered user's account.
* **Account Utilities:**
  * Check available balance.
  * Change account PIN.
  * View a detailed, chronological transaction history.
* **Data Persistence:**
  * Automatically loads existing user data from `bank_data.txt` upon startup.
  * Saves all account details, balances, and transaction logs upon exiting the system, ensuring no data is lost between sessions.

## 💻 Tech Stack & Concepts Used
* **Language:** C++
* **Core Concepts:** * Object-Oriented Programming (OOP): Inheritance (`customer` -> `account` -> `transaction`), Encapsulation.
  * File Handling (`<fstream>`): Reading from and writing to text files.
  * Data Structures: Standard Template Library (STL) `std::vector` for dynamic memory management and history logging.
  * Input Validation: Handling incorrect data types to prevent infinite loops and crashes.

## 🚀 How to Run the Project

**Prerequisites:**
You need a C++ compiler (like GCC or Clang) installed on your system.

**Steps:**
1. **Clone the repository:**
  ```bash
   git clone <your-repository-url>
   cd <your-repository-folder>
  ```
2. Compile the code:
  ```bash
  g++ banking_system.cpp -o banking_system
  ```
3. Run the executable:

  Windows:
  ```bash
  DOS
  banking_system.exe
  ```
  Linux/Mac:

  ```bash
  ./banking_system
  ```

## 🛠️ Usage Guide
Upon running the program, you will be greeted with the **Main Menu**:

1. Select Option 1 to create a new account. You will be prompted to enter your name, an account number, and a PIN.

2. Select Option 2 to log in to an existing account. Enter your account number and PIN.

3. Once logged in, the User Menu allows you to perform deposits, withdrawals, transfers, view your transaction history, or change your PIN.

4. Select Option 3 from the Main Menu to Exit. Note: You must exit using this option to ensure all new data and transactions are safely written to bank_data.txt.

## 📂 File Structure
**banking_system.cpp** : The main C++ source code containing all class definitions and logic.

**bank_data.txt** : A local text file generated automatically by the program to store user credentials, balances, and transaction histories. (Note: This file is created automatically upon the first successful exit).

## 🎓 Acknowledgements
This project was developed as a task for the CodeAlpha software development internship program.

## 👤 Author
- **Name:** Nandan Nikam
- **Student ID:**  CA/DF1/67227
- **Role:** C++ Programming Intern at CodeAlpha
- **Task:** Task 2 - Banking System
