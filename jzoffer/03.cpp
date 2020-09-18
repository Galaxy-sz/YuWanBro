class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != i){
                if (nums[nums[i]] != nums[i])
                {
                    swap(nums[i],nums[nums[i]]);
                }else{
                    return nums[i];
                }
            }
        }
        return 0;
    }
};