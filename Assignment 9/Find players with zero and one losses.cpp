class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>map;
        vector<vector<int>> ans(2);
        for(int i=0;i<matches.size();i++){
           for(int j=0;j<2;j++){
               if(map.find(matches[i][j]) == map.end())
                    map[matches[i][j]]=0;
                if(j==1)
                    map[matches[i][j]]++;
           }
            
        }
        for(auto i:map){
            if(i.second==0)
               ans[0].push_back(i.first);
            else if(i.second==1)
               ans[1].push_back(i.first);
        }
        sort(ans[0].begin(),ans[0].end());
        sort(ans[1].begin(),ans[1].end());
        return ans;
        
    }
};
