class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>map;
        for(auto i:nums){
            map[i]++;
            if(map[i]==2)
                ans.push_back(i);
            else
                continue;
        }
        return ans;
        
    }
};
