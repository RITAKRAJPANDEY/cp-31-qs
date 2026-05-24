#include<bits/stdc++.h>
using namespace std;
void t_case(){
    int a,b;
    cin>>a>>b;
    string x;
    string y;
    cin>>x>>y;
    int flag=true;
    int cnt=0;
    while (flag)//run if couldn't find the string and only till the size of the main string is not greater than the substring
    {
        if(x.find(y)!=string::npos){   
            cout<<cnt<<endl;
            flag=false;
        }
        else if(cnt>1&&x.length()>y.length()){
            flag=false;
            cout<<-1<<endl;
        }
        x+=x;
        cnt++;     
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
