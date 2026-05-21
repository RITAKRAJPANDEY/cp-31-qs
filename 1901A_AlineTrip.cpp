#include<bits/stdc++.h>
using namespace std;
void t_case(){
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    int maximum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(i==0){
            maximum=a[0];
        }
        else{
            int temp=a[i]-a[i-1];
            if(temp>maximum){
                maximum=temp;
            }
        }
    }
    if(n>1){
        (maximum>(2*(x-a[n-1])))?cout<<maximum<<endl:cout<<(2*(x-a[n-1]))<<endl;
    }else{
        (a[0]-0)>2*(x-a[0])?cout<<(a[0]-0)<<endl:cout<<2*(x-a[0])<<endl;
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
    return 0;
}
