#include<bits/stdc++.h>
using namespace std;
int f(int n){
if(n==0){
    return 0;
}
return n+f(n-1);
}
int main(){
int n ;
cout<<"Enter the number"<<endl;
cin>>n;
int ans =f(n);
cout<<ans;
}