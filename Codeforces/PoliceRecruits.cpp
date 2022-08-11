#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define rep(i,a,n) for(int i=a ; i <n ;i++)
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x,tot=0,crm=0;
    cin >> n;
    rep(i,0,n){
        cin >> x;
        if(tot<=0&&x<0){
            crm++;
        }
        else if (tot>=0){
            tot+=x;
        }
        //cout <<crm<<endl;
    }
    cout << crm<<endl;

}
