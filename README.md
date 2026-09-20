# Programming Fundamentals - Lab Task 05

## Description
This repository contains C program implementations for **Lab Task 05** of the Programming Fundamentals course. The primary focus of these tasks is to demonstrate mastery over basic control flow structures in C, including nested `if-else` conditionals, nested `switch-case` selection blocks, and the conditional ternary operator (`? :`). 

Each program is written with clean, standard logic suitable for academic submissions and organized for easy testing and evaluation.

---

## Task Details & Logic Overview

### Task 1: Admission Eligibility Checker (`task1.c`)
- **Objective:** Determine student admission status based on age and academic marks[cite: 1].
- **Logic:** Employs a nested `if-else` structure[cite: 1]. It first checks if the student's age is 18 or above[cite: 1]. If true, it checks if marks are 50 or above[cite: 1]. Prints "Eligible for Admission" if both criteria are met, or specific rejection messages otherwise[cite: 1].

### Task 2: Driving License System (`task2.c`)
- **Objective:** Check if a user qualifies for a driving license[cite: 1].
- **Logic:** Uses nested `if-else` statements[cite: 1]. Prompts the user for CNIC ownership ($1=\text{Yes}, 0=\text{No}$)[cite: 1]. If verified, checks if the driving test was passed ($1=\text{Yes}, 0=\text{No}$)[cite: 1]. Outputs "License Can Be Issued" when both conditions hold true[cite: 1].

### Task 3: Department and Section Selection (`task3.c`)
- **Objective:** Allow a user to navigate a menu to select a university department and section[cite: 1].
- **Logic:** Implements a nested `switch` statement[cite: 1]. The outer `switch` selects between Computer Science, Information Technology, and Artificial Intelligence[cite: 1]. The inner `switch` selects Section A or Section B[cite: 1]. Handles invalid choices with `default` fallback prompts[cite: 1].

### Task 4: Pass/Fail Evaluation (`task4.c`)
- **Objective:** Evaluate student marks without using `if-else` control blocks[cite: 1].
- **Logic:** Uses a single conditional (ternary) operator `(condition) ? expression1 : expression2` to output "Pass" for marks 50 and above or "Fail" otherwise[cite: 1].

---
