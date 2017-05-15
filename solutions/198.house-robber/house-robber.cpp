class Solution {
public:
// maxV[i] = max(maxV[i-2]+num[i], maxV[i-1]);
    int rob(vector<int>& nums) {
        int length=nums.size();
                if(length == 0)
            return 0;
   vector<int> maxV(length,0);
maxV[0]=nums[0];
maxV[1]=max(nums[0],nums[1]);
        for(int i = 2; i < length; i ++) {
maxV[i]=max(maxV[i-1],maxV[i-2]+nums[i]);
        }
        return maxV[length-1];
    }
};