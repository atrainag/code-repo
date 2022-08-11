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

int x[201][201];

int check(int a,int b,int n , int m){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(abs(a-i)==abs(b-j)){
                sum+=x[i][j];
            }
        }
    }
    return sum;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--){
        int n,m;
        cin >>n >>m;
        for(int i =0;i< n ;i++){
            for(int j=0;j<m;j++){
                cin >>x[i][j];
            }
        }
        int hi=-1;
        for(int i =0;i< n ;i++){
            for(int j=0;j<m;j++){
                hi=max(hi,check(i,j,n,m));
            }
        }
        cout << hi <<endl;
    }
}

