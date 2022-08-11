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
    int n,p,q,k;
    cin >> n>>p;
    vector<int> x;
    rep(i,p){
        cin >>k;
        x.push_back(k);
    }
    cin >> q;
    rep(i,q){
        cin >> k;
        x.push_back(k);
    }
    sort(x.begin(),x.end());
    bool can=true;
    int temp =1;
    rep(i,x.size()){
        if(temp!=x[i]){
            can = false;
            break;
        }
        else if(x[i]==x[i+1]){
            continue;
        }
        else{
            temp++;
        }
    }
    if(temp -1 <n){
        can = false;
    }

    if(can){
        cout << "I become the guy."<<endl;
    }
    else{
        cout << "Oh, my keyboard!"<<endl;
    }


}

