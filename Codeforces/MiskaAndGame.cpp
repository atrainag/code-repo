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
    int a,b;
    int mi=0,cr=0;
    rep(i,n){
        cin >> a >> b;
        if(a>b){
            mi++;
        }
        else if (a<b){
            cr++;
        }
    }
    if(mi==cr){
        cout <<"Friendship is magic!^^\n";
    }
    else if (mi>cr){
        cout<<"Mishka\n";
    }
    else{
        cout <<"Chris\n";
    }
}

