class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>map;
        for(string i:arr){
             map[i]++;
        }
        string s="";
        for(auto i:arr){
            if(map[i]==1)
               k--;
            if(k==0)
               return i;
        }
        return s;
    }
};
