class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0,rightsum=0,index=-1;
        bool pivot_exist=false;
        for(int i=0;i<nums.size();i++){
            leftsum=0,rightsum=0;
            for(int j=i-1;j>=0;j--){
                leftsum+=nums[j];
            }
            for(int k=i+1;k<nums.size();k++){
                rightsum+=nums[k];
            }
            if(leftsum==rightsum){
                pivot_exist=true;
                index=i;
                break;
            }
        }
        if(pivot_exist==true){
            return index;
        }
        else{
            return index;
        }
        
    }
};