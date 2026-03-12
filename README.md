# CS351 Project 0: Two Sum Problem (C++)

## 📌 Overview
This repository contains the implementation for **CS351 Project 0**, focusing on the **Two Sum** problem. The goal is to identify two numbers in an integer array that sum up to a specific target value and return their indices.

This project demonstrates two different approaches in **C++**, comparing a naive approach with an optimized version using a Hash Table.

## 📝 Problem Description
Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`.

* Each input has exactly one solution.
* The same element cannot be used twice.
* The solution can be returned in any order.

**Example:**
> **Input:** `nums = [2, 7, 11, 15]`, `target = 9`  
> **Output:** `[0, 1]` (Because 2 + 7 = 9)

---

## 🚀 Implemented Algorithms

### 1. Brute Force Approach
* **Method:** Uses nested loops to check every possible pair of elements.
* **Time Complexity:** $O(n^2)$
* **Space Complexity:** $O(1)$

### 2. Hash Table Approach (Optimized)
* **Method:** Uses `std::unordered_map` to store the value and its index. As we iterate through the array, we check if the complement (`target - current_value`) already exists in the map.
* **Time Complexity:** $O(n)$
* **Space Complexity:** $O(n)$



---

## 📂 Project Structure
* `main.cpp`: Entry point containing test cases and performance measurement.
* `solution.h`: Header file defining the `Solution` class.
* `solution.cpp`: Implementation of both `bruteForce` and `twoSumHash` methods.
* `Makefile`: Build script for easy compilation.

---

## 🛠️ Getting Started

### Prerequisites
* A C++ compiler supporting **C++11** or later (e.g., GCC, Clang, or MSVC).

### Compilation
Open your terminal in VS Code and run:
```bash
g++ -o two_sum main.cpp solution.cpp -std=c++11