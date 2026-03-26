# Software Requirements Specification (SRS)

## 1. Introduction
This document outlines the functional and non-functional requirements for the Two Sum project. The system is designed to find two numbers in an array that add up to a specific target value.

## 2. Functional Requirements
* **REQ-F01 (Input):** The system shall accept a reference to a `std::vector<int>` containing the numbers, and an `int` representing the target sum.
* **REQ-F02 (Output):** The system shall return a collection (e.g., `std::vector<int>`) containing exactly two integers, which are the indices of the elements that sum to the target.
* **REQ-F03 (Exact Solution):** The system assumes that every valid input will have exactly one valid solution.
* **REQ-F04 (No Self-Reuse):** The system shall not use the same element (at the same index) twice to reach the target sum.

## 3. Non-Functional Requirements
* **REQ-NF01 (Language):** The codebase must strictly use C++20 standard features.
* **REQ-NF02 (Performance - Brute Force):** The baseline implementation shall operate with a time complexity of $O(n^2)$ and a space complexity of $O(1)$.
* **REQ-NF03 (Performance - Optimized):** The optimized implementation must utilize a Hash Table to achieve a linear time complexity of $O(n)$, with an acceptable space complexity tradeoff of $O(n)$.
* **REQ-NF04 (Environment):** The application must be buildable and runnable within a Docker container to ensure OS independence.