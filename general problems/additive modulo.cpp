

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    cout<<"enter modulo"<<endl;
    cin>>k;
    cout<<"enter element of group"<<endl;
    int arr[n];
    cont<<"jai shree ram";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int r=0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           r=(arr[i]+arr[j])%k;
            if(r>=k){
                r=k-r;
                cout<<r<<" ";
            }
            else{
                cout<<r<<" ";
            }
        } cout<<"\n";
    }


    return 0;
}
