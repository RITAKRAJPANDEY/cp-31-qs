#include<bits/stdc++.h>
using namespace std;
int f(int i , int n ){
    if(i>n){
        return 0;
    }
    f(i+1,n);
    cout<<i<<endl;
}
int main(){
    int i=1;
    int n;
    cout<<"Enter the number till you want to print"<<endl;
    cin>>n;
    f(i,n);
}