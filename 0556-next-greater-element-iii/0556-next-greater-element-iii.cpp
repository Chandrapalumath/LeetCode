class Solution {
public:
    int nextGreaterElement(int n) {
        string digits = to_string(n);
        int length = digits.size();
        int pivot = -1;

        // Step 1: Find the pivot
        for (int i = length - 2; i >= 0; --i) {
            if (digits[i] < digits[i + 1]) {
                pivot = i;
                break;
            }
        }

        if (pivot == -1)
            return -1;

        // Step 2: Find the next greater digit to swap with pivot
        for (int i = length - 1; i > pivot; --i) {
            if (digits[i] > digits[pivot]) {
                swap(digits[i], digits[pivot]);
                break;
            }
        }

        // Step 3: Reverse the suffix
        reverse(digits.begin() + pivot + 1, digits.end());

        // Step 4: Convert to integer and check for overflow
        long long result = stoll(digits);
        return (result <= INT_MAX) ? result : -1;
    }
};
