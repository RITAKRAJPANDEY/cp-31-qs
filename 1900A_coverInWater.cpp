#include<bits/stdc++.h>
using namespace std;
void t_case(){
 int n;
 cin>>n;
 vector<char>a(n);
 int ctr=0;
 bool three_dots=false;
 for (int i = 0; i < n; i++)
 {
    cin>>a[i];
 }
 
 for (int i = 0; i < n; i++)
 {
    
    if(i>=2&& a[i]=='.' && a[i-1]==a[i] && a[i]==a[i-2] ){
       three_dots=true;
        break;
       
    }
    else if(a[i]=='.'){
        ctr++;
    }
 
 }
 if(three_dots){
    cout<<2<<endl;
 }else cout<<ctr<<endl;
 
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin>>t;
    while (t--)
    {
        t_case();
    }
    return 0;
}

// 5
// 3
// ...
// 7
// ##....#
// 7
// ..#.#..
// 4
// ####
// 10
// #...#..#.#
