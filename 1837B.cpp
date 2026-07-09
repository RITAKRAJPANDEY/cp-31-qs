#include <bits/stdc++.h>
using namespace std;
void t_case()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int max = 0;
    int temp = 0;
    bool flag = true;
    if (n == 1)
    {
        flag=false;
        cout << 2 << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            temp++;
            if (temp > max)
            {
                max = temp;
            }
        }else {
            temp=0;
        }
    }
    if(flag){
        cout<<max+2<<endl;
    }
    
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