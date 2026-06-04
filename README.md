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
```

## ✅ Run Tests Locally
### 使用 CMake
```bash
mkdir -p build
cd build
cmake ..
cmake --build .
ctest --output-on-failure
```

> Windows 使用者注意：如果電腦上尚未安裝完整 CMake/CTest，或 `ctest` 不在 PATH，
> 則可直接執行產生的可執行檔：
> ```bash
> .\build\twosum_test.exe
> ```
>
### 直接編譯（備援）
```bash
g++ -std=c++20 -Wall -Wextra -Werror src/main.cpp src/twosum.cpp -o twosum_test
./twosum_test
```

## 🔧 GitHub Actions CI
A GitHub Actions workflow is available at `.github/workflows/ci.yml` to build and run the tests using CMake on Ubuntu.

## 🔧 Windows 環境設定
如果您的 Windows 環境沒有 C++ 編譯器，請安裝以下工具：
1. **CMake**: 下載並安裝 [CMake for Windows](https://cmake.org/download/)，勾選 "Add CMake to the system PATH"
2. **MinGW GCC**: 安裝 MSYS2，然後執行 `pacman -S mingw-w64-x86_64-gcc`，並將 `C:\msys64\mingw64\bin` 添加到 PATH
3. 使用 CMake 生成器：`cmake -G "MinGW Makefiles" ..`
