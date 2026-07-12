#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[6]={13,46,24,52,20,9};

for(int i=0;i<6;i++){
    int min=INT16_MAX;
    for(int j=i;j<6;j++){
        if(arr[j]<min){
            min=arr[j];
            swap(arr[i],arr[j]);
        }
    }
}
for(int i=0;i<6;i++)cout<<arr[i]<<endl;
return 0;

}