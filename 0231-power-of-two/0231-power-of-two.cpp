class Solution {
public:
    bool isPowerOfTwo(int n) {
        long int product=1;
        if(n<=0)return false;
        while(product<n){
            product*=2;
        }
        if(product==n)return true;
        else{return false;}
    }
};