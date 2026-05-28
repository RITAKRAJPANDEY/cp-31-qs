#include<bits/stdc++.h>
using namespace std;
void t_case(){
    int a,b,c;
    cin>>a>>b>>c;
    // a turn
    if(c%2==0){
        if(a>b){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }else{
        if(b>a){
            cout<<"Second"<<endl;
        }else{
            cout<<"First"<<endl;
        }
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