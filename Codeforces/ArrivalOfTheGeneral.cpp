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
    int n,lo=1000000,hi=-1,hii=-1,loo=-1;
    cin >> n;
    vector<int> x(n);
    rep(i,n){
        cin >>x[i];
        if(x[i]>hi){
            hi=x[i];
        }
        if(x[i]<lo){
            lo=x[i];
        }
    }
    if(x[0]==hi && x[x.size()-1]==lo){
        cout << 0<<endl;
        return 0;
    }
    else if (x[0]==hi){
        hii=0;
    }
    else if (x[x.size()-1]==lo){
        loo=x.size()-1;
    }
    rep(i,n){

        if(x[i]==lo&& loo!=x.size()-1){

            loo=i;
        }
        else if(x[i]==hi&& hii==-1){
            hii=i;
        }
    }
    if(hii>loo){
        cout << hii+(x.size()-1-loo)-1<<endl;
    }
    else{
        cout << hii+(x.size()-1-loo)<<endl;
    }
}
