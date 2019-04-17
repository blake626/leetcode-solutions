class Solution {
public:
    int reverse(int x) {        
        
        long res = 0, prev = 0;
        bool neg = false;

        if(x<0) {
            x=-x;
            neg = true;
        }
        
        if(x == 2147483648 || x == -2147483648) return 0;
        
        
        while(x != 0){
            res = res*10+x%10;
            x = x/10;
            if(res>2147483647) return 0;
        }
        


        return (neg == true) ? -res : res;
    }
};