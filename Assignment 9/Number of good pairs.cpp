class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>map;
        int ans=0;
        for(int i:nums)
            map[i]++;
        for(auto i:map){
            if(i.second>1){
                int count=i.second;
                ans=ans+((count*(count-1))/2);
            }
            else
               continue;
        } 
        return ans; 
    }
};
