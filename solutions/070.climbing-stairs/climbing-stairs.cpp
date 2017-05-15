class Solution {
public:
    int climbStairs(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 2;
        vector<int> nums(n);
        nums[0]=1;
        nums[1]=2;
        for (int i=2;i<n;i++)
        {
            nums[i]=nums[i-1]+nums[i-2];
        }
        return nums[n-1];
    }
};