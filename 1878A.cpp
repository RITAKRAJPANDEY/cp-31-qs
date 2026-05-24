#include<bits/stdc++.h>
using namespace std;
void t_case(){
    int n,k;
    cin>>n>>k;
    int flag=false;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]==k){
            flag=true;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        t_case();
    }
}