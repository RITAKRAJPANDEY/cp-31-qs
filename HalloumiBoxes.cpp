#include <bits/stdc++.h>
using namespace std;
void t_case()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int> a_sorted=a;
    sort(a_sorted.begin(),a_sorted.end());
    if(k==1){
        if(a==a_sorted){
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
        
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
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