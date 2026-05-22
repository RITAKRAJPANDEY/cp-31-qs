#include<bits/stdc++.h>
using namespace std;
void t_case(){
    int a,b;
    cin>>a>>b;
    int k_x,k_y,q_x,q_y;
    cin>>k_x>>k_y>>q_x>>q_y;
    set<pair<int,int>>king_position;
    set<pair<int,int>>queen_position;
    int dx[]={a , a , -a, -a , b ,  b ,-b , -b};
    int dy[]={b, -b ,  b, -b , a , -a , a , -a};
    for (int i = 0; i < 8; i++)
    {
        int k_next_x = dx[i]+k_x;
        int k_next_y = dy[i]+k_y;
        king_position.insert({k_next_x,k_next_y});

        int q_next_x = dx[i]+q_x;
        int q_next_y = dy[i]+q_y;
        queen_position.insert({q_next_x,q_next_y});
    }
    int fork_count=0;
    for (auto const& position:king_position){
        if(queen_position.count(position)){
            fork_count++;
        }
    }
    cout<<fork_count<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        t_case();
    }
}
