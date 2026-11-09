#include <vector>
#include <cmath>
#include <algorithm>

class Solution {
public:
    int findTheDistanceValue(std::vector<int>& arr1, std::vector<int>& arr2, int d) {
        int count = 0;
        for (int a : arr1) {
            bool isValid = std::none_of(arr2.begin(), arr2.end(), [a, d](int b) {
                return std::abs(a - b) <= d;
            });
            if (isValid) {
                count++;
            }
        }
        return count;
    }
};
