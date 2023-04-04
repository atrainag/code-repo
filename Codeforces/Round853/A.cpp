
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
#define AC std;

semoga bisa AC

void prtv(vector<int> a){
    for(unsigned int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";
}

int gcd(int a,int b){
  //  cout << a <<" "<<b<<endl;
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin >> t;
    while(t--){
        cin >>n;

        vector<int> x(n);
        int all=-1,id=2,flag=-1;
        for(int i =0;i<n;i++){
            cin >> x[i];
            if(i==0)all=x[i];
            else {
                all = gcd(all,x[i]);
                //cout << all <<endl;
                if(all>id){
                    flag=1;
                }
                id++;
            }
        }
        if(all>n || flag==1){
            cout <<"No\n";
        }
        else{
            cout <<"Yes\n";
        }

    }
}

