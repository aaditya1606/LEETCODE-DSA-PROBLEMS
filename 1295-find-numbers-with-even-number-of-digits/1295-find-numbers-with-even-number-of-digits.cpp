class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int number=nums[i];
            int digits_count=0;
            while(number>0){
                int digits=number%10;
                digits_count++;
                number/=10;
            }
            if(digits_count%2==0){
                count++;
            }            
        }
        return count;
    }
};