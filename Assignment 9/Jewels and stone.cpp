class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>map;
        int count=0;
        for(int i=0;i<stones.size();i++)
            map[stones[i]]++;
        for(int i=0;i<jewels.size();i++){
            count+=map[jewels[i]];
        }
        return count;    
    }
};
