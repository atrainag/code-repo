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
#include <unordered_map>

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
#define AC std;

semoga bisa AC

void prtv(vector<char> a){
    for(unsigned int i=0;i<a.size();i++){
        cout << a[i];
    }
    cout <<"\n";
}

int fin(vector<int> x,int tar){
    int l=0,r=x.size()-1;

    while(l<=r){
        int m = (l+r)/2;
        if(x[m]==tar){
            return m;
        }
        else if(x[m]<tar){
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
}


int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // Concatenate and sort sequences A and B
    vector<int> c;
    c.reserve(n+m);
    c.insert(c.end(), a.begin(), a.end());
    c.insert(c.end(), b.begin(), b.end());
    sort(c.begin(), c.end());

    // Find positions of A and B elements in sequence C
    for(int i = 0; i < n; i++) {
        cout << lower_bound(c.begin(), c.end(), a[i]) - c.begin() + 1;
        if(i==n-1){
            cout <<"\n";
        }
        else{
            cout <<" ";
        }
    }
    for(int i = 0; i < m; i++) {
        cout << lower_bound(c.begin(), c.end(), b[i]) - c.begin() + 1;
        if(i==m-1){
            cout <<"\n";
        }
        else{
            cout <<" ";
        }
    }
    return 0;
}



