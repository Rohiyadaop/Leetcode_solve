// class Solution {
// public:
//     int count = 0;

//     bool Check(vector<int>& nums, int n) {
//         while(n > 0) {
//             if(nums[n] != nums[n-1]) {
//                 return false;
//             }
//             n--;
//         }
//         return true;
//     }

//     void Increment(vector<int>& nums, int n) {
//         for(int i = 0; i < n; i++) {
//             nums[i]++;
//         }
//         count++;
//     }

//     int func(vector<int>& nums) {
//         int n = nums.size() - 1;

//         sort(nums.begin(), nums.end());

//         if(Check(nums, n)) {
//             return count;
//         }

//         Increment(nums, n);

//         return func(nums);
//     }

//     int minMoves(vector<int>& nums) {
//         count = 0;
//         return func(nums);
//     }
// };





class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());

        int sum = 0;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        return sum - (nums.size() * mini);
    }
};