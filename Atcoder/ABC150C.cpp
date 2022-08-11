#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>
#include <map>
#include <stack>
#include <string>
#include <cstring>

#define all(x) x.begin(),x.end()
#define last(x) x.size()-1
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define repe(i,a,n) for(int i=a ; i <n ;i++)
#define rep(i,n) for(int i=0 ; i <n ;i++)
#define semoga using
#define bisa namespace
#define menang std;

semoga bisa menang

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> q(n);
    vector<int> r(n);
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    for(int i=0;i<n;i++){
        cin >> q[i];
    }
    for(int i=0;i<n;i++){
        r[i]=i+1;
    }
    int a=-1,b=-1,i=1;
    do{
        if(r==q){
            b=i;
        }
        if(r==p){
            a=i;
        }
        i++;
    }while(next_permutation(r.begin(),r.end()) && (b==-1 || a==-1));
    cout <<abs(a-b)<<endl;
}
