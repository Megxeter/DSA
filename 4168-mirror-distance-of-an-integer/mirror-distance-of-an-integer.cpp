class Solution {
public:
    int mirrorDistance(int n) {
        int m=n;
        int dig=0;
        int rev=0;
        while(m>0){
            dig=m%10;
            rev=rev*10+dig;
            m=m/10;
           
        }
        return abs(n - rev);

        
    }
};