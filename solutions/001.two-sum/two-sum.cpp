class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> hash;
    for(int i=0;i<nums.size();i++)
    {
        int findnum=target-nums[i];
        if(hash.find(findnum)!=hash.end())
        {
            return vector<int>({hash[findnum],i});//比如遍历到4时，找到2在hashmap中的值。
        }
        hash[nums[i]]=i;
    }
    }
};