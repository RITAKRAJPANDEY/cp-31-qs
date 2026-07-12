#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={13,46,24,52,20,9};
    for(int i=0;i<6;i++){
        for(int j=0;j<6-i-1;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}