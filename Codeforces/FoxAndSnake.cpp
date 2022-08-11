#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>

#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define rep(i,n) for(int i=0 ; i <n ;i++)

using namespace std;

int main(){
    int n,m;
    bool alt=false;
    cin >> n >>m;
    rep(i,n){
        rep(j,m){
            if(i%2==0){
                cout <<"#";
            }
            else{
                if(!alt){
                    if(j==m-1){
                        cout << "#";
                    }
                    else if(j!=m-1){
                        cout << ".";
                    }
                }
                else{
                    if(j==0){
                        cout << "#";
                    }
                    else{
                        cout <<".";
                    }
                }
            }
        }
        if(i%2!=0){
            if(!alt){
                alt=true;
            }
            else{
                alt=false;
            }
        }
        cout <<"\n";
    }

}

