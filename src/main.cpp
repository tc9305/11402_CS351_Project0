#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <random>
#include <algorithm>

#include "twosum.h"

struct TestCase {
    std::string name;
    std::vector<int> nums;
    int target;
    std::vector<int> expected;
};

bool equalIndices(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

void runTest(const TestCase& test, bool(*solver)(const std::vector<int>&, int, std::vector<int>&), const std::string& solverName) {
    std::vector<int> result;
    solver(test.nums, test.target, result);
    if (!equalIndices(result, test.expected)) {
        std::cerr << "[FAIL] " << solverName << " - " << test.name << "\n";
        std::cerr << "  expected: [" << test.expected[0] << ", " << test.expected[1] << "]\n";
        std::cerr << "  got:      [" << (result.size() > 0 ? std::to_string(result[0]) : "?")
                  << ", " << (result.size() > 1 ? std::to_string(result[1]) : "?") << "]\n";
        std::exit(1);
    }
    std::cout << "[PASS] " << solverName << " - " << test.name << "\n";
}

bool solveArray(const std::vector<int>& nums, int target, std::vector<int>& out) {
    out = TwoSumArray(nums, target);
    return true;
}

bool solveHash(const std::vector<int>& nums, int target, std::vector<int>& out) {
    out = TwoSumHashTable(nums, target);
    return true;
}

void runPerformanceTests() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(-10000, 10000);

    std::vector<size_t> sizes = {1000, 5000, 10000, 20000, 30000, 50000};

    for (size_t n : sizes) {
        std::vector<int> nums(n);
        for (size_t i = 0; i < n; ++i) {
            nums[i] = dis(gen);
        }

        // Ensure there's a solution
        int target = nums[0] + nums[1];

        // Array method
        auto start = std::chrono::high_resolution_clock::now();
        auto result1 = TwoSumArray(nums, target);
        auto end = std::chrono::high_resolution_clock::now();
        auto duration1 = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

        // Hash method
        start = std::chrono::high_resolution_clock::now();
        auto result2 = TwoSumHashTable(nums, target);
        end = std::chrono::high_resolution_clock::now();
        auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

        std::cout << "N=" << n << ": Array=" << duration1.count() << "μs, Hash=" << duration2.count() << "μs\n";
    }
}

int main() {
    std::vector<TestCase> tests = {
        {"Standard positive numbers", {2, 7, 11, 15}, 9, {0, 1}},
        {"Unsorted array", {3, 2, 4}, 6, {1, 2}},
        {"Duplicate elements valid use", {3, 3}, 6, {0, 1}},
        {"Negative numbers included", {-1, -2, -3, -4, -5}, -8, {2, 4}},
        {"Zero target", {0, 4, 3, 0}, 0, {0, 3}},
        {"Mixed positive and negative", {1, -2, 5, 3, -1}, 2, {3, 4}}
    };

    std::cout << "Running Two Sum tests...\n";

    for (const auto& test : tests) {
        runTest(test, solveArray, "TwoSumArray");
        runTest(test, solveHash, "TwoSumHashTable");
    }

    std::cout << "All tests passed.\n";

    // Performance Test
    std::cout << "\nRunning Performance Tests...\n";
    runPerformanceTests();

    return 0;
}
