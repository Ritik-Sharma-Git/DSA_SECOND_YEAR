class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>map;
        int sum=0;
        for(auto i:nums)
            map[i]++;
        for(auto i:map){
            if(i.second==1)
                sum+=i.first;
            else
                continue;
        }
        return sum;
        
    }
};
