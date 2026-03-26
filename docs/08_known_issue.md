### `docs/08_known_issue.md` (已知問題)
```markdown
# Known Issues and Limitations

## 1. Memory Overhead in Hash Table Approach
* **Description:** While the Hash Table method reduces time complexity to $O(n)$, it increases space complexity to $O(n)$ due to the storage of elements in `std::unordered_map`. 
* **Impact:** For extremely large input vectors where memory is strictly constrained, this could lead to high memory consumption compared to the Array (Brute Force) approach.
* **Workaround:** If memory is more critical than CPU time, the $O(n^2)$ Array approach with $O(1)$ space should be used instead.

## 2. Lack of Input Validation
* **Description:** The current implementation assumes the input strictly follows LeetCode's constraints (exactly one valid solution). 
* **Impact:** Passing an array with no valid pairs will result in undefined behavior or returning an empty/default vector.
* **Workaround:** Future iterations could include a boundary check to throw an exception or return `[-1, -1]` if no solution is found.