class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i=0,wcnt=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W') wcnt++;
        }
        int mini=wcnt;
        for(int i=k;i<blocks.size();i++){
            if(blocks[i]=='W') wcnt++;
            if(blocks[i-k]=='W') wcnt--;
            mini=min(mini,wcnt);
        }
        return mini;
    }
};