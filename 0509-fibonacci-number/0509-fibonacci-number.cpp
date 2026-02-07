class Solution {
public:
    int fib(int n) {
        int a = 0;
        int b = 1;
        int c = 0;
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return a+b;
        }
        else{
            while(n > 1){
                c = a+b;
                a = b;
                b = c;
                n--;
            }
        }
        return c;
    }
};