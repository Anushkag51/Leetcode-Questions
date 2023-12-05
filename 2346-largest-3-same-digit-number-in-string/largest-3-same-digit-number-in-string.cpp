class Solution {
public:
    string largestGoodInteger(string num) {
        int result=-1;
        for(int i=0;i<num.size()-2;i++)
        {
            if(num[i]==num[i+1] and num[i+1]==num[i+2])
            {
                result=max(result,num[i]-'0');
            }
        }
        return result==-1?"": string(3,result+'0');
    }
};