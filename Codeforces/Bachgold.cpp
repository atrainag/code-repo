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
    int t;
    cin >>t;
    if(t%2==0){
        cout<<t/2<<endl;
        while(t>0){
            cout << 2<<" ";
            t-=2;
        }
    }
    else{
        cout << t/2<<endl;
        while(t>3){
            cout <<2 <<" ";
            t-=2;
        }
        cout << 3<<"\n";
        t-=3;
    }
}
