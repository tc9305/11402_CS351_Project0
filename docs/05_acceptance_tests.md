# Acceptance Tests

## 1. Overview
Acceptance tests ensure that the software meets the business and technical requirements specified in the SRS. Passing these criteria means the project is ready for submission.

## 2. Acceptance Criteria
* **Criteria 1 (Correctness):** Both the Array (Brute Force) and Hash Table implementations must pass 100% of the defined test cases (TC-01 to TC-05).
* **Criteria 2 (Constraint Compliance):** The algorithm must successfully prevent the same index from being used twice to form the target sum.
* **Criteria 3 (Performance Goal):** The Hash Table implementation must demonstrate a noticeable execution time improvement over the Array approach when tested with a randomly generated large dataset (e.g., $N > 10,000$).
* **Criteria 4 (Build Success):** The GitHub Actions CI pipeline must report a "Passing" status for the latest commit.