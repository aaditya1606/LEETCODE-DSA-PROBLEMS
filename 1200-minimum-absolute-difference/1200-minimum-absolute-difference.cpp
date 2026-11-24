class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> result;
        sort(arr.begin(),arr.end());
        int min_diff=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]<min_diff){
                min_diff=arr[i+1]-arr[i];
            }
        }
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]==min_diff){
                result.push_back({arr[i],arr[i+1]});
            }
        }
         return result;
    }
};