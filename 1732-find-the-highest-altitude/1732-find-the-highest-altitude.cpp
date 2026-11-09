class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude=0;
        vector<int> altitudes(gain.size()+1);
        for(int i=0;i<gain.size();i++){
            altitudes[i+1]=altitude+gain[i];
            altitude+=gain[i];
        }
        int max=0;
        for(int i=0;i<altitudes.size();i++){
            if(altitudes[i]>max)max=altitudes[i];
        }
        return max;
    }
};