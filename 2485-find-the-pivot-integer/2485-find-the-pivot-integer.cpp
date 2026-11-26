class Solution {
public:
    int pivotInteger(int num) {
        int temp;
        long long int sum1=0,sum2=0;
        bool flag=false;
        for(int k=1;k<=num;k++){
            sum1=0,sum2=0;
            for(int i=1;i<=k;i++){
                sum1=sum1+i;
            }
            for(int j=k;j<=num;j++){
                sum2=sum2+j;
            }
            if(sum1==sum2){
               flag=true;
               temp=k;
               break;
            }
            else{
                continue;
            }
        }
        if(flag==true)return temp;
        else{return -1;}
    }
};