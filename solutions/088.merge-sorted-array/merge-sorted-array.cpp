class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n<=0) return;
        if (m<=0) 
        {
            nums1.resize(n);
            nums1=nums2;
            return;
        }
        vector<int> nums3;
        int j=0;
        int k=m+n;
        int tag1=0;
        int tag2=0;
        nums3.resize(k);
        while(tag1<=m-1&&tag2<=n-1)
        {
            if(nums1[tag1]<=nums2[tag2]) 
            {
                nums3[j++]=nums1[tag1++];
            }
            if(nums1[tag1]>nums2[tag2]) 
            {
                nums3[j++]=nums2[tag2++];
            }
        }
        while(tag1<=m-1)
        {
            nums3[j++]=nums1[tag1++];
        }
        
        while(tag2<=n-1)
        {
            nums3[j++]=nums2[tag2++];
        }
        nums1.resize(k);
        nums1=nums3;
    }
};