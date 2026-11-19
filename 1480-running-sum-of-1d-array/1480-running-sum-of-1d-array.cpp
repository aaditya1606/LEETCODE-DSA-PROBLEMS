class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size=nums.size();
        vector<int> runningsum(size);
        for(int i=0;i<size;i++){
            int sum=0;
            for(int j=0;j<=i;j++){
                sum+=nums[j];
            }
            runningsum[i]=sum;
        }
        return runningsum;
    }
};