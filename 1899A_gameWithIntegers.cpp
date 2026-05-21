#include<bits/stdc++.h>
using namespace std;
void t_case(){
    int n;
    cin>>n;
    if(n%3==0){
        cout<<"Second"<<endl;
    }
    else cout<<"First"<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        t_case();
    }
    return 0; 
}