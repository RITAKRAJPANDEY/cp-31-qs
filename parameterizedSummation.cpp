#include<bits/stdc++.h>
using namespace std;
int f(int i , int sum){
    if(i<1){
        cout<<sum;
        return 0;
    }
    f(i-1,sum+i);
}
int main(){
    int i;
    int sum=0;
    cout<<"Enter the number till which you want sum"<<endl;
    cin>>i;
    f(i,sum);
    return 0;
}