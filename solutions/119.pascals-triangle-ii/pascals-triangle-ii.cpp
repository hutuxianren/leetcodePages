class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> vec(rowIndex+1,0);
        vec[0]=1;
        for(int i=1;i<rowIndex+1;i++)
        {
            for(int j=i;j>=1;j--)
            {
                vec[j]+=vec[j-1];
            }
        }
        return vec;
    }
};