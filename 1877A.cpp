#include<bits/stdc++.h>
using namespace std;
void t_case(){
int n;
cin>>n;
vector<int>a(n);
int ans=0;
for (int i = 0; i < n-1; i++)
{
    cin>>a[i];
    ans+=a[i];
}
cout<<-ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    cin>>t;
    while (t--)
    {
        t_case();
    } 
}