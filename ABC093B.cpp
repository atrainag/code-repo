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
    for(unsigned int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,k,l=0,r=0;
    cin >>a >> b >>k;
    r=k-1;
    if(a+k>=b-r){
        r=r-abs(a+k-b+r);
    }
   // cout <<r <<endl;
    for(int i=a;i<=b;i++){
        if(l<k){
            cout << i<<endl;
            l++;
        }
        else{
            cout << b-r<<endl;
            r--;
        }
        if(l==k && r==-1){
            break;
        }
    }

}

