# Test Plan: Two Sum Problem

## 1. Introduction
This document describes the testing strategy for the Two Sum project. The focus is on verifying the correctness of both the Array (Brute Force) and Hash Table implementations against standard LeetCode test cases and edge cases.

## 2. Test Scope
* **Unit Testing:** Validate the core logic in `twosum.cpp` for both approaches.
* **Performance Testing:** Compare the execution time between the $O(n^2)$ Array method and the $O(n)$ Hash Table method.
* **Environment Testing:** Ensure the code compiles and runs successfully within the Docker container and CI pipeline.

## 3. Test Cases (Based on LeetCode standard)
| Test ID | Description | Input `nums` | Input `target` | Expected Output |
| :--- | :--- | :--- | :--- | :--- |
| TC-01 | Standard positive numbers | `[2, 7, 11, 15]` | `9` | `[0, 1]` |
| TC-02 | Unsorted array | `[3, 2, 4]` | `6` | `[1, 2]` |
| TC-03 | Duplicate elements valid use | `[3, 3]` | `6` | `[0, 1]` |
| TC-04 | Negative numbers included | `[-1, -2, -3, -4, -5]` | `-8` | `[2, 4]` |
| TC-05 | Zero as a target | `[0, 4, 3, 0]` | `0` | `[0, 3]` |

## 4. Execution
Tests will be executed automatically via GitHub Actions upon every push. Manual execution can be performed locally using the compiled binary.

## 5. Local Test Execution
1. 使用 CMake 建構：
```bash
mkdir -p build
cd build
cmake ..
cmake --build .
```
2. 使用 CTest 執行測試：
```bash
ctest --output-on-failure
```

## 6. CI Pipeline
* GitHub Actions workflow path: `.github/workflows/ci.yml`
* Steps:
  1. Checkout repository
  2. Install `cmake`
  3. Configure with `cmake -S . -B build`
  4. Build with `cmake --build build`
  5. Run tests with `ctest --test-dir build --output-on-failure`

## 5. Local Test Execution
1. Build locally:
```bash
g++ -std=c++20 -Wall -Wextra -Werror src/main.cpp src/twosum.cpp -o twosum_test
```
2. Run the test binary:
```bash
./twosum_test
```

## 6. CI Pipeline
* GitHub Actions workflow path: `.github/workflows/ci.yml`
* Steps:
  1. Checkout repository
  2. Compile with `g++ -std=c++20`
  3. Run `./twosum_test`
