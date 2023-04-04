
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>
#include <map>
#include <stack>
#include <string>
#include <cstring>

#define all(x) x.begin(),x.end()
#define last(x) x.size()-1
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define repe(i,a,n) for(int i=a ; i <n ;i++)
#define rep(i,n) for(int i=0 ; i <n ;i++)
#define semoga using
#define bisa namespace
#define AC std;

semoga bisa AC

void prtv(vector<int> a){
    for(unsigned int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h,w;
    cin >>h>>w;
    vector<vector<int>> x;
    rep(i,h){
        vector<int> temp(w);
        rep(j,w){
            cin >> temp[i];
        }
        x.push_back(temp);
    }
    int r,c;
    cin >> r  >> c;
    vector<vector<int>> y;
    rep(i,r){
        vector<int> temp(c);
        rep(j,c){
            cin >> temp[i];
        }
        y.push_back(temp);
    }
    int fd=0,ext=0;
    vector<int> his;
    rep(i,r){
        rep(j,c){
            fd=0;
            rep(k,h){
                rep(l,w){
                    if(y[i][j]==x[k][l]){
                        fd=1;
                        //cout << y[i][j]<<endl;
                        if(i==0)his.push_back(l);
                        else{
                            if(his[j]!=l){
                                ext=1;

                            }
                        }
                        break;
                    }
                }
                if(fd || ext)break;
            }
            if(!fd || ext){
                break;
            }
        }
        if(!fd || ext ){
            break;
        }
    }
    if(!ext && fd){
        cout << "Yes\n";
    }
    else cout <<"No\n";
}


