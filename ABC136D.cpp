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

void prtv(vector<int> x){
    for(int i=0;i<x.size();i++){
        cout << x[i]<<" ";
    }
    cout <<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    vector<int> x(s.size(),0);
    int r=0,l=0,mem=0,mem2=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='R'){
            r++;
            if(s[i+1]=='L'){
                mem=i;
                mem2=i+1;
            }
        }
        else if(s[i]=='L'){
            l++;
            if(s[i+1]=='R'|| i==s.size()-1){
                if((l+r)%2==0){
                    x[mem]=(l+r)/2;
                    x[mem2]=(l+r)/2;
                }
                else {
                    int a=(l+r)/2;
                    int b=(l+r)/2 +1;
                    if(r%2==0){
                        x[mem]=a;
                        x[mem2]=b;
                    }
                    else{
                        x[mem]=b;
                        x[mem2]=a;
                    }
                }
                r=0;
                l=0;
                mem2=0;
                mem=0;

            }
        }
    }
    prtv(x);
}

