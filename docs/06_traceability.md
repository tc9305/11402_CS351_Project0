# Traceability Matrix

This matrix maps the functional requirements (from SRS) to their corresponding test cases and implementations, ensuring all requirements are met and tested.

| Requirement ID | Description | Implementation Module | Test Case ID |
| :--- | :--- | :--- | :--- |
| **REQ-F01** | Accept `vector<int>` and `target` | `TwoSumArray`, `TwoSumHash` | TC-01 to TC-05 |
| **REQ-F02** | Return two indices | `TwoSumArray`, `TwoSumHash` | TC-01 to TC-05 |
| **REQ-F03** | Exactly one solution exists | Guaranteed by input design | All TCs |
| **REQ-F04** | No self-reuse | Core loop condition / Map lookup | TC-03, TC-05 |
| **REQ-NF02**| Array Approach $O(n^2)$ Time | `TwoSumArray` function | Performance Test |
| **REQ-NF03**| Hash Table Approach $O(n)$ Time| `TwoSumHash` function | Performance Test |