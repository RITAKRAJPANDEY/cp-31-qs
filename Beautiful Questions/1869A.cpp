#include<bits/stdc++.h>
using namespace std;
void t_case(){
    long long n;
    cin>>n;
    int i=1;
    while (n%i==0)
    {
        i++;
    }
    cout<<i-1<<endl;
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
// if there exists a suarray [l,r] which are continuous multiples of n then the numbers from [1,r-l+1] will also be ccontinuous multiple of n