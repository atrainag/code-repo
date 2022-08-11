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

void prtv(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> x(n);
        for(int i=0;i<n;i++){
            cin >> x[i];
        }
        int d;
        string s;
        for(int i=0;i<n;i++){
            cin >> d >> s;
            for(int j=0;j<s.size();j++){
                if(s[j]=='U'){
                    x[i]--;
                }
                else{
                    x[i]++;
                }
                if(x[i]>9){
                    x[i]=0;
                }
                if(x[i]<0){
                    x[i]=9;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout << x[i]<<" ";
        }
        cout <<"\n";
    }

}


