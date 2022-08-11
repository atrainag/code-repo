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

int len(string  x){
    return x.size();
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string x;
    rep(i,n){
        cin >>x;
        if(len(x)==1){
            cout << 10*(stoi(x)%10-1) + 1;
        }
        else if(len(x)==2){
            cout << 10*(stoi(x)%10-1) + 3;
        }
        else if(len(x)==3){
            cout << 10*(stoi(x)%10-1) + 6;
        }
        else if(len(x)==4){
            cout << 10*(stoi(x)%10-1) + 10;
        }
        cout <<"\n";
    }
}
