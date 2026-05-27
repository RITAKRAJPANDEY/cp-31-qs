#include <bits/stdc++.h>
using namespace std;
void t_case()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        ans=__gcd((a[i]-(i+1)),ans);
    }
    if(ans<0){
        cout<<abs(ans)<<endl;
    }else cout<<ans<<endl;
   
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        t_case();
    }
}