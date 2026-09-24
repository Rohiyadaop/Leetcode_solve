class Solution {
public:
    int sumofdigit(int n ){
        int val = 0 ;
        while(n != 0 ){
            val += n%10 ; 
            n = n/10 ; 
        }
        return val; 
    }
    int smallestIndex(vector<int>& nums) {
        for(int i = 0 ; i<nums.size() ; i++){
            if(i  == sumofdigit(nums[i])){
                return i ; 
            }
        }
        return -1 ; 
    }
};