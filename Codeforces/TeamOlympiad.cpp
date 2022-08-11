#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>
#include <map>
#include <stack>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define repe(i,a,n) for(int i=a ; i <n ;i++)
#define rep(i,n) for(int i=0 ; i <n ;i++)
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> x(n);
    int a=0,b=0,c=0;
    map<int,bool> g;
    rep(i,n){
        cin >> x[i];
        g.insert(pair<int,bool>(x[i],false));
        if(x[i]==1){
            a++;
        }
        else if(x[i]==2){
            b++;
        }
        else if(x[i]==3){
            c++;
        }
    }
    if(min(a,min(b,c))==0){
        cout <<0<<endl;
    }
    else{

        int tar=min(a,min(b,c));
        cout << tar<<endl;
        while(tar>0){
            int d=0,e=0,f=0;
            rep(i,n){
                if(d&&e&&f){
                    break;
                }
                if(x[i]==1 && !g[i] && !d ){
                        d=1;
                    g[i]=true;
                    cout << i+1 <<" ";
                }
                else if(x[i]==2 && !g[i] && !e){
                    e=1;
                    g[i]=true;
                    cout << i+1 <<" ";
                }
                else if(x[i]==3 && !g[i]&&!f ){
                    f=1;
                    g[i]=true;
                    cout << i+1 <<" ";
                }
            }
            cout <<"\n";
            tar--;
        }


    }
}



