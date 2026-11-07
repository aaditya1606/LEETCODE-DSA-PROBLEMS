class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.length()-1;
        int j=num2.length()-1;
        int carry=0;
        string output="";
        while(i>=0||j>=0||carry>0){
            int digit_num1=0;
            int digit_num2=0;
            if(i>=0){
                digit_num1+=num1[i]-'0';
            }
            if(j>=0){
                digit_num2+=num2[j]-'0';
            }
            int sum=digit_num1+digit_num2+carry;
            int digit=sum%10;
            carry=sum/10;
            output+=digit+'0';
            i--;
            j--;
        }
        reverse(output.begin(),output.end());
        return output;
    }
};