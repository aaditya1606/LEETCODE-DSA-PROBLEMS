class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest=nums[0],largest=nums[1];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest)largest=nums[i];
            else if(nums[i]<smallest)smallest=nums[i];
        }
        vector<int> divisors(smallest);
        int j=0;
        for(int i=1;i<=smallest;i++){
            if(smallest%i==0 && largest%i==0){
                divisors[j]=i;
                j++;
            }
        }
        int max=divisors[0];
        for(int i=0;i<divisors.size();i++){
            if(divisors[i]>max)max=divisors[i];
        }
        return max;
    }
};