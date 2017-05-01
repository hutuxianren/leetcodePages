class Solution {
public:
    int findMin(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // return nums[0];
        int low=0;
        int high=nums.size()-1;
        while(low<high)
        {

            if(nums[low]<nums[high]) return nums[low];
            int mid=(low+high)/2;
            if(nums[mid]>=nums[low]) low=mid+1;
            else high=mid;
            
        }
        return nums[low];
    }
};