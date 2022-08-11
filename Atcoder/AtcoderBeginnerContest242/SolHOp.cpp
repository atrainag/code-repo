#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>
#include <map>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define repe(i,a,n) for(int i=a ; i <n ;i++)
#define rep(i,n) for(int i=0 ; i <n ;i++)
using namespace std;
map<pi,bool> visited;
int cnt=0;

bool isValid(vector<vector<char>> x , pair<int,int> xy){
    return xy.first >=0 && xy.second>=0 && xy.first< x.size() && xy.second<x[0].size();
}

vector<pair<int,int>> adjj(vector<vector<char>> x,int r,int c,char start){
    vector<pair<int,int>> indices = {{r,c+1},{r,c-1},{r+1,c},{r-1,c}};
    vector<pair<int,int>> z;
    for(int i=0 ; i < indices.size();i++){
        if(isValid(x,indices[i]) && x[indices[i].first][indices[i].second]== start){
            z.push_back(indices[i]);
        }
    }
    return z;
}

void bfs(vector<vector<char>> x, int r, int c){
    char start = x[r][c];
    queue<pair<int,int>> q;
    q.push(make_pair(r,c));
    while(q.size()>0){
        cnt++;

        r=q.front().first;
        c=q.front().second;
        cout << r <<" "<<c <<endl;
        if(visited[mp(r,c)]){
            q.pop();
            continue;
        }
        else{
            visited[mp(r,c)]=true;
            q.pop();
        }

        vector<pair<int,int>> adj= adjj(x,r,c,start);
       // cout <<q.size()<<" "<<adj.size()<<endl;
        for(int i =0 ; i < adj.size() ; i++){
            //cout << visited[adj[i]]<<" ";
            if(!visited[adj[i]]){
                q.push(adj[i]);
            }
        }
        //cout <<"\n";
    }
}

int main(){
    vector<vector<char>> x;
    ios::sync_with_stdio(0);
    cin.tie(0);
    char tempe;
    int n,m, room=0;
    cin >> n >> m;
/*
    rep(i,n){
        vector<char> temp;
        rep(j,m){
            visited.insert(pair<pi,bool>(mp(i,j),false));
            cin >> tempe;
            temp.push_back(tempe);
        }
        x.push_back(temp);
    }
*/

    rep(i,n){
        vector<char> temp;
        rep(j,m){
            visited.insert(pair<pi,bool>(mp(i,j),false));
            temp.push_back('.');
        }
        x.push_back(temp);
    }
    for(int i =0 ; i < n ;i++){
        for(int j=0 ; j < m ;j++){
            if(x[i][j]=='.'){

                if(!visited[mp(i,j)]){
                    //cout <<"hi"<<endl;
                    bfs(x,i,j);
                    room++;
                }
            }

        }
    }


    cout << room <<endl;

}





