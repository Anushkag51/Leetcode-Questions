class Solution {
public:
    bool checkPerfectNumber(int num) {
          int sum=0,t;
           t=num;
            for(int i=1;i<=num/2;i++)
        {
            if(num%i==0)
                sum+=i;
        }
        if(sum==t)
            return true;
        else
            return false;
    }
};