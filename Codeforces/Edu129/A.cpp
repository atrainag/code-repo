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
    int t;
    cin >>t;
    while(t--){
        int na,nb,maxa=-1,maxb=-1;
        cin >> na;
        vector<int> a(na);
        for(int i=0;i<na;i++){
            cin >> a[i];
            maxa=max(a[i],maxa);
        }
        cin >> nb;
        vector<int> b(nb);
        for(int i=0;i<nb;i++){
            cin >> b[i];
            maxb=max(b[i],maxb);
        }
        string f,s;
        if(maxa==maxb){
            f="Alice";
            s="Bob";
        }

            else if(maxa>maxb){
                f="Alice";
                s="Alice";
            }
            else if(maxa<maxb){
                f="Bob";
                s="Bob";
            }

        cout << f<<"\n"<<s<<endl;
    }

}

