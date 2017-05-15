class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int i=a.size()-1;
        int j=b.size()-1;
        int c=0;
        while(i>=0||j>=0||c==1)
        {
            c+=(i>=0?a[i--]-'0':0);
            c+=(j>=0?b[j--]-'0':0);
            res=to_string(c%2)+res;
            //下一轮的进位
            c/=2;//如果c=2，3，则进位是1，c=1、0时，进位为0
        }
        return res;
        
    }
};