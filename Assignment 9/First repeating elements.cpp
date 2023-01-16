int Solution::solve(vector<int> &A) {
    unordered_map<int,int>mp;
    for(auto i:A){
        mp[i]++;
    }
    for(auto i:A){
        if(mp[i]>1)
          return i;
    }
return -1;
}
