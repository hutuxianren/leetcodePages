class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> numsCopy(n);
        for(int i=0;i<n;i++)
        {
            numsCopy[i]=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            nums[(i+k)%n]=numsCopy[i];
        }
    }
};