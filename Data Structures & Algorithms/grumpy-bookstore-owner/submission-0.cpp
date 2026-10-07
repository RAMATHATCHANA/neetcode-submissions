class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int j=0,ng=0;
        while(j<customers.size()){
            if(grumpy[j]==0){
                ng+=customers[j];
            }
            j++;
        }
        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1) ng+=customers[i];
        }        
        int maxi=ng;
        for(int i=minutes;i<customers.size();i++){
            if(grumpy[i]==1) ng+=customers[i];
            if(grumpy[i-minutes]==1) ng-=customers[i-minutes];
            maxi=max(maxi,ng);
        }
        return maxi;
    }
};