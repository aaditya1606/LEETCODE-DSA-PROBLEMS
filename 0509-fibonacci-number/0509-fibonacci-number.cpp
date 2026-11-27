class Solution {
public:
    int fib(int n) {
        int first_num=0,second_num=1,next_num;
        if(n==0)return 0;
        else if(n==1)return 1;
        else{
            for(int i=2;i<=n;i++){
                next_num=first_num+second_num;
                first_num=second_num;
                second_num=next_num;
            }
            return next_num;
        }
    }
};