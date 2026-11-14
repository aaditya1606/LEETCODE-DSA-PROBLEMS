class Solution {
public:
    int lengthOfLastWord(string s) {
        int sizee=s.length();
        int length=0;
        for(int i=sizee-1;i>=0;i--){
            if(s[i]==' ' && ((s[i+1]>='A' && s[i+1]<='Z') || (s[i+1]>='a' && s[i+1]<='z'))){
                break;
            }
            if(s[i]==' '){
                continue;
            }
            length++;
        }
        return length;
    }
};