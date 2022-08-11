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
    string a,b,d;
    vector<char> x;

    cin >> a >> b;
    rep(i,a.size()){
        x.push_back(a[i]);
    }
    rep(i,b.size()){
        x.push_back(b[i]);
    }
    cin >> d;
    vector<char> c;
    rep(i,d.size()){
        c.push_back(d[i]);
    }
    sort(c.begin(),c.end());
    sort(x.begin(),x.end());

    if(c==x){
        cout << "YES\n";
    }
    else{cout << "NO\n";}
}

