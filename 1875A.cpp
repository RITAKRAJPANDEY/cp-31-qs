#include<bits/stdc++.h>
using namespace std; 
void t_case(){
    int a,b,n;
    cin>>a>>b>>n;
    vector<int>v(n);
    long long ans=b-1;
    if(b==0){
        cout<<0<<endl;
       
    }else{
    for (long long  i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]>a){
            ans+=a;
        }else{
            ans+=v[i];
        }
    }
    cout<<ans<<endl;
}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        t_case();
    }
}

