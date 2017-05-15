class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        if(strs.size()==1) return strs[0];
        string firstStr=strs[0];//第一个字符串，其它字符串都与第一进行比较
        for(int i=1,j=0;i<strs.size();i++,j=0)//逐个比较
        {
            for(;j<strs[i].size()&&j<firstStr.size();j++)
            {
                if(strs[i][j]!=firstStr[j]) break;
            }
            firstStr=firstStr.substr(0,j);
        }
        return firstStr;
        //return "";
    }
};