#include <bits/stdc++.h>
using namespace std;
void t_case()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
  for (int i = 1; i < n; i++)
  { //for first index only 
    if(a[0]==1){
        a[0]=2;
        count++;
        if(a[i]%a[i-1]==0){
            a[i]=a[i]+1;
            count++;
        }
    }
    else if(i>1 && a[i-1]==1){
            a[i-1]=a[i-1]+1;
            if(a[i-1]%a[i-2]==0){
                a[i-1]=a[i-1]+1;
                count++;
                if(a[i]%a[i-1]==0){
                    a[i]=a[i]+1;
                }
        }
       else if(a[i]%a[i-1]==0){
                    a[i]=a[i]+1;
                }

    }//general case
    else if(a[i]%a[i-1]==0){
        a[i]=a[i]+1;
        count++;

    }
  }
   

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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