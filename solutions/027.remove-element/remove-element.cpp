class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length=nums.size();
        int begin=0;
        for(int i=0;i<length;i++)
        {
            if(nums[i]!=val) nums[begin++]=nums[i];
        }
        return begin;
    }
};