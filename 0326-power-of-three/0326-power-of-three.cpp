class Solution {
public:
    bool isPowerOfThree(int n) {
        long int product=1;
        if(n<=0)return false;
        while(product<n){
            product*=3;
        }
        if(product==n)return true;
        else{return false;}
    }
};