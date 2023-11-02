class Solution {
public:
    long long int reverse(int x)
    {
        long long int temp=0,r;
        while(x>0)
        {
            r=x%10;
            x=x/10;
            temp=temp*10+r;
        }
        return temp;
        
    }
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        if(reverse(x)==x)
            return true;
        else
            return false;
        
    }
};