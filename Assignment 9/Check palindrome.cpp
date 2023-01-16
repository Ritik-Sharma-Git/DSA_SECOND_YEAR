int Solution::solve(string A) {
    unordered_map<int,int>map;
    for(int i=0;i<A.size();i++){
        map[A[i]]++;
    }
    int count=0;
    for(auto i:map){
        if(i.second%2!=0){
            count++;
            if(count>1){
                return 0;
            }     
        }
    }
    return 1;
}
