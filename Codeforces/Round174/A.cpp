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
    int t,n;
    cin >>t;
    rep(i,t){
        cin >> n;
        if(n==1){
            cout << 1 <<endl;
        }
        else{
            int temp=1;
            for (int j=2; j<=n;j++){
                temp+=pow(2,j-1);
            }
            cout << temp <<endl;
        }

    }
}

