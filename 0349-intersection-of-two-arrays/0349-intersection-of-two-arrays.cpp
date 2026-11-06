class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int min_size=min(nums1.size(),nums2.size());
        vector<int> ans(min_size);
        int index=0;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    if(find(ans.begin(),ans.begin()+index,nums1[i])==ans.begin()+index){
                        ans[index]=nums1[i];
                        index++;
                    }
                    break;
                }
            }
        }
        ans.resize(index);
        return ans;
    }
};