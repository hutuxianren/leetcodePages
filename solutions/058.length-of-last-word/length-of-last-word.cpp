class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s=="") return 0;

        int i=s.length()-1;
     while(i>=0&&s[i]==' ')
     {
         i--;
     }
             int count=0;
     while(i>=0&&s[i]!=' ')//注意大于等于
     {
         i--;
         count++;
     }
     return count;
    }
};