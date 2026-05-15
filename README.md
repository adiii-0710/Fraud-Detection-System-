Fraud Detection System

A simple Fraud Detection System developed in C++ that identifies suspicious banking transactions using searching algorithms and risk analysis techniques.

📌 Project Overview

This project analyzes transaction details such as:

Transaction amount
Transaction location
Foreign transaction status
Night transaction status
Repeated user activity

Based on these factors, the system calculates a risk score and marks transactions as:

✅ SAFE
⚠️ FRAUD ALERT

The project demonstrates the use of:

Structures
Arrays
Functions
Binary Search
Linear Scan
Conditional Logic

🚀 Features
Detects suspicious transactions
Calculates fraud risk score
Uses Binary Search for efficient searching
Uses Linear Scan for repeated transaction detection
Displays transaction details with fraud status
Simple and beginner-friendly C++ implementation

🧠 Algorithms Used
1. Binary Search

Used to search transaction amounts in sorted historical transaction data.

Time Complexity
O(log n)
2. Linear Scan

Used to detect repeated transactions by the same user.

Time Complexity
O(n)

📂 Project Structure
Fraud-Detection-System/
│
├── main.cpp
├── README.md

🛠️ Technologies Used
C++
VS Code / Code::Blocks
GCC Compiler

📋 Fraud Detection Logic

The system increases risk score when:

Transaction amount is greater than 5000
Transaction is foreign
Transaction happens at night
Same user performs repeated transactions
Risk Evaluation
Risk Score >= 50 → FRAUD ALERT
Risk Score < 50  → SAFE

▶️ Sample Input
{1, "Arman", 300, "Mumbai", 0, 0},
{2, "Rahul", 8000, "Dubai", 1, 1},
{3, "Salman", 400, "Dubai", 1, 1},
{4, "Sahil", 500, "Mumbai", 1, 1},
{5, "Priya", 10000, "London", 1, 1}

📤 Sample Output
Transaction ID : 2
User           : Rahul
Amount         : 8000
Location       : Dubai
Risk Score     : 70
Status         : FRAUD ALERT
📖 Learning Outcomes

Through this project, we learned:

Searching algorithms
Data structures
Risk analysis logic
Real-world fraud detection concepts
C++ programming fundamentals

👥 Team Contribution
Member	Role
Member 1	Input/Output Handling
Member 2	Data Structures & Transaction Management
Member 3	Searching & Suspicious Pattern Detection
Member 4	Risk Analysis & Fraud Logic

📌 Future Improvements
Database integration
Real-time transaction monitoring
Machine Learning based fraud prediction
GUI implementation
OTP verification system

📚 References
Introduction to Algorithms – Cormen
GeeksforGeeks – Binary Search
C++ STL Documentation
Research articles on Fraud Detection Systems
