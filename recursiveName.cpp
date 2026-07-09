#include<bits/stdc++.h>
using namespace std;
int f(int i, int n){
if(i>n){
    return 0;
}
cout<<"my Name is Ritik"<<endl;
f(i+1,n);
}
int main(){
    int n;
    int i = 1;
    cin>>n;
    f(i,n);

}