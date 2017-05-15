class Solution {
public:
    int hammingWeight(uint32_t n) {
        if(n==0) return 0;
        // if(n==1) return 1;
        // if(n==2) return 1;
        int count=0;
        if(n%2==1) count++;
        while(n!=1)
        {
            n/=2;
            if(n%2==1) count++;
        }
        return count;
    }
};