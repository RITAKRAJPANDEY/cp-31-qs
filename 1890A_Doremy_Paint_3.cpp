#include <bits/stdc++.h>
using namespace std;
void t_case()
{
    int n;
    cin >> n;
    bool flag=false;
    vector<int> a(n);
    if(n==2){
        flag=true;
    }
    int type1=-1;
    int count1=1;
    int type2=-1;
    int count2=1;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        type1=a[0];
        if(i>0&&a[i]==type1){
            count1++;
        }else if(type2==-1&&i>0){
            type2=a[i];
        }else if(type2==a[i]&&i>1){
            count2++;
        }
    }
    if(n>2 && n%2!=0 ){
       if((abs(count1-count2)==1&&(count1+count2)==n)||(count2==1 && count1==n)){
        flag=true;
       }else flag=false;
    }else if(n>2 && n%2==0){
        if((count1-count2==0 && count2!=0 &&(count1+count2)==n)||(count2==1&& count1==n) ){
            flag=true;
        }
      else flag=false;
    }
    if(flag){
        cout<<"YES"<<endl;
    }else cout<<"No"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        t_case();
    }
}
