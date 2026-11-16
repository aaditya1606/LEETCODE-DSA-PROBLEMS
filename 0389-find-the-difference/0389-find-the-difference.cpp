class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> visited(s.length());
        for(int i=0;i<t.length();i++){
            bool flag=false;
            for(int j=0;j<s.length();j++){
                if(t[i]==s[j] && visited[j]==0){
                    visited[j]=1;
                    flag=true;
                    break;
                }
                else{continue;}
            }
            if(flag==false){
                return t[i];
            }
        }
        return ' ';
    }
};