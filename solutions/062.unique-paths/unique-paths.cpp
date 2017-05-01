class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> vec(m,vector<int>(n,1));//利用vector初始化二维数组:初始化m行，n列中每个都为1的
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                vec[i][j]=vec[i-1][j]+vec[i][j-1];
            }
        }
        return vec[m-1][n-1];
    }
};