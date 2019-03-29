class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0;
        sort(nums.begin(), nums.end());
        int siz = nums.size();
        for(int i=0; i<siz; i+=2){
            sum += nums[i];
        }
        return sum;
    }
};
