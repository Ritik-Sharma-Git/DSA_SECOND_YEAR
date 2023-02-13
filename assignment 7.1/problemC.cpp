#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int right_search(vector<int>&A, int a){
	int low=0,high=A.size()-1;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(A[mid]<a){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return low;
}
 
void solve(){
	int n,m,x,y,p,q;
	cin>>n>>m;
	vector<int>A(n);
	for(int i=0;i<n;i++) cin>>A[i];
	while(m--){
		cin>>p;
		cout<<right_search(A,p)+1<<"\n";
	}
}
 
signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
}
