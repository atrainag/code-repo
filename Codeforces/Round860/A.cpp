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
#define justin using
#define sangat namespace
#define sankiu std;

justin sangat sankiu

void prtv(vector<int> a){
    for(unsigned int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin >> t;
    while(t--){
        cin >>n ;
        vector<int> a(n),b(n);
        int ma =-1,mb=-1;
        rep(i,n){
            cin >> a[i];
            if(i!=n-1 || n==1)
            ma  = max(a[i],ma);
        }
        rep(i,n){
            cin >> b[i];
            if(i!=n-1 || n==1)
            mb  = max(b[i],mb);
        }
        if(ma == a[a.size()-1] && mb == b[b.size()-1]){
            cout <<"Yes\n";
        }
        else if( (ma != a[a.size()-1] && ma !=b[b.size()-1]) && (mb != a[a.size()-1] && mb !=b[b.size()-1])){
            cout <<"No\n";
        }
        else{
            int la = a[a.size()-1];
            int lb = b[b.size()-1];
            int flg = 0;
            if(lb<=la){
                for(int i = 0;i<b.size()-1;i++){
                    if(lb<b[i]){
                        if(lb>=a[i]){
                            int tmp = a[i];
                            a[i]=b[i];
                            b[i]=tmp;
                        }
                        else{
                            flg = 1;
                            break;
                        }
                    }
                }
                if(flg){
                    cout <<"No\n";
                    continue;
                }
                for(int i = 0;i<a.size()-1;i++){
                    if(la<a[i]){
                        flg=1;
                        break;
                    }
                }
                if(flg){
                    cout <<"No\n";
                    continue;
                }
            }
            else{
                for(int i = 0;i<a.size()-1;i++){
                    if(la<a[i]){
                        if(la>=b[i]){
                            int tmp = a[i];
                            a[i]=b[i];
                            b[i]=tmp;
                        }
                        else{
                            flg = 1;
                            break;
                        }
                    }
                }
                if(flg){
                    cout <<"No\n";
                    continue;
                }
                for(int i = 0;i<b.size()-1;i++){
                    if(lb<b[i]){
                        flg = 1;
                        break;
                    }
                }
                if(flg){
                    cout <<"No\n";
                    continue;
                }

            }
            cout <<"Yes\n";
        }

    }
}

