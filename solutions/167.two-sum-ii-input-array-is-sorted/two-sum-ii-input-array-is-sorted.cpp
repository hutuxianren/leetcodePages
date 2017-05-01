class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           int low=0;
           int high=nums.size()-1;
           while(nums[low]+nums[high]!=target)
           {
               if(nums[low]+nums[high]<target) low++;
               if(nums[low]+nums[high]>target) high--;
           }
           return vector<int>({low+1,high+1});
    }
};