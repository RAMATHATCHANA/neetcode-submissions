class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i=0,j=0;
        while(j<abbr.size()){
            if(isdigit(abbr[j])){
                int num=0;
                if(abbr[j]=='0') return false;
                while(j<abbr.size() && isdigit(abbr[j])){
                    int d=abbr[j]-'0';
                    num=num*10+d;
                    j++;
                }
                i+=num;
                if( i>word.size() ) return false;
            }else{
                if(i>=word.size()) return false;
                if(abbr[j]!=word[i]) return false;
                i++;j++;
            }
        }
        return i==word.size();
    }
};