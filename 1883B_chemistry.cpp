#include<bits/stdc++.h>
using namespace std;
void t_case(){
    int n,k;
    cin>>n>>k;
    string a;
    cin>>a;
    int cnt=0;//no of odd entities
    bool flag=false;
    int counter[26]={0};
    for (int i = 0; i < a.length(); i++){
        counter[(a[i]-97)]++;
    }
    //count all the odd enteties
    for (int i = 0; i < 26; i++)
    {
        if(counter[i]%2!=0){
            cnt++;
        }
    }
    if(k<=n&&cnt-1<=k){
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
    while (t--)
    {
        t_case();
    }
}