class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int an=0;
        map<int,int>ans;
        for(auto x:nums){
            ans[x]++;

        } 
        for(auto i:ans){
            if(i.second<=1){
                an= i.first;
            }
        }
        return an;


        
    }
};