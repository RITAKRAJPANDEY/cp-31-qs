#include<bits/stdc++.h>
using namespace std;
void t_case(){
    int n;
    cin>>n;
    bool flag=true;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(a[0]!=1){
        flag=false;;
    }
    sort(a.begin(),a.end());
    for (int i = 0; i < n; i++)
    {
        if(i<n-1&&a[i]==a[i+1]){
            flag=false;
            
        }
    }
   if(flag){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
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