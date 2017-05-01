class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> vec(n,vector<int>(n,0));
        int rowStart=0;
        int rowEnd=n-1;
        int colStart=0;
        int colEnd=n-1;
        int num=1;
        while(rowStart<=rowEnd&&colStart<=colEnd)
        {
        for(int i=colStart;i<=colEnd;i++)
        {
            vec[rowStart][i]=num++;
        }
        rowStart++;
        for(int i=rowStart;i<=rowEnd;i++)
        {
            vec[i][colEnd]=num++;
        }
        colEnd--;
        for(int i=colEnd;i>=colStart;i--)
        {
            vec[rowEnd][i]=num++;
        }
        rowEnd--;
        for(int i=rowEnd;i>=rowStart;i--)
        {
            vec[i][colStart]=num++;
        }
        colStart++;
        
        }
        return vec;
    }
};