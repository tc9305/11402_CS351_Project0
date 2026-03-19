# CS351 Project 0: Two Sum Problem (C++20)

## 📌 Overview
This repository contains the implementation for **CS351 Project 0**, focusing on the **Two Sum** problem. This project compares a naive $O(n^2)$ approach with an optimized $O(n)$ solution using **C++20** and STL containers.

## 🛠️ Technical Stack
- **Language:** C++20
- **Container:** `std::vector` for input/output
- **Optimization:** `std::unordered_map` (Hash Table)
- **DevOps:** GitHub Actions (CI) & Docker (Environment Isolation)

## 📝 Problem Description & Strict Constraints
Given a `std::vector<int>& nums` and an `int target`, return the indices of the two numbers such that they add up to the target.

### Strict Input Rules:
1. **Exact Solution:** Every test case is guaranteed to have **exactly one** solution.
2. **No Self-Reuse:** You may not use the same element twice (e.g., if `nums[0] = 3` and `target = 6`, you cannot return `[0, 0]`).
3. **Complexity Goal:** The Hash Table implementation must aim for linear time complexity.

**Example:**
> **Input:** `nums = [2, 7, 11, 15]`, `target = 9`  
> **Output:** `[0, 1]` (Because 2 + 7 = 9)

---

## 🚀 Implemented Algorithms

### 1. Brute Force Approach
* **Method:** Nested loops comparing all possible pairs.
* **Complexity:** Time $O(n^2)$, Space $O(1)$.

### 2. Hash Table Approach (STL Optimized)
* **Method:** Single-pass using `std::unordered_map`. It checks for the "complement" ($target - nums[i]$) while populating the map.
* **Complexity:** Time $O(n)$, Space $O(n)$.



---

## 🤖 GitHub Actions (CI)
This project includes an automated CI pipeline located in `.github/workflows/`. 
- **Automated Builds:** Triggered on every `push` to the repository.
- **Environment:** Ubuntu-latest with `g++` (C++20 support).
- **Validation:** Ensures the code compiles and passes basic unit tests before merging.

## 🐳 Docker Support
To ensure a consistent environment regardless of your OS, a `Dockerfile` is included.

### Build the Image:
```bash
docker build -t twosum-cpp-project .