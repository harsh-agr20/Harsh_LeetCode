//Rotate Array
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums);
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
    //copying temp to nums;
        nums = temp;
        
    }
};
