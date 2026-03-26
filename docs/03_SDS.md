# Software Design Specification (SDS)

## 1. System Architecture
The project follows a simple procedural architecture suitable for algorithmic implementations. 
* `src/twosum.cpp`: Contains the core algorithmic logic and function definitions.
* `src/main.cpp`: Serves as the entry point, handling test case execution, performance timing, and output formatting.

## 2. Component Design

### 2.1 Brute Force Module
* **Description:** A naive approach that iterates through all possible pairs in the input vector.
* **Logic:** Uses two nested `for` loops. The outer loop selects the first element `nums[i]`, and the inner loop checks all subsequent elements `nums[j]` where `j > i`.
* **Data Structures:** `std::vector` (Input/Output).

### 2.2 Hash Table Module (Optimized)
* **Description:** A single-pass approach that computes the required "complement" for each element and checks if it has been seen previously.
* **Logic:** 1. Iterate through the vector.
    2. For each element, calculate `complement = target - nums[i]`.
    3. Check if the `complement` exists in the Hash Table.
    4. If it exists, the solution is found; return the indices.
    5. If not, insert the current element and its index `(nums[i], i)` into the Hash Table.
* **Data Structures:** `std::unordered_map<int, int>` (Mapping element values to their array indices).