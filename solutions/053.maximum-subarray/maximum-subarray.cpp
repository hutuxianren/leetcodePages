class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int length=nums.size();
    int maxNum=nums[0];
    int sum=0;
    for(int i=0;i<length;i++)
    {
        sum+=nums[i];
        maxNum=max(maxNum,sum);
        sum=max(sum,0);
    }
    return maxNum;
    }
};