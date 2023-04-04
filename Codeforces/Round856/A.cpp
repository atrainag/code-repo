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

void prtv(vector<string> a){
    for(unsigned int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";
}

bool cmp(string a, string b){
    if(a.size()>b.size()){
        return true;
    }
    else if(a.size()==b.size() && a>b){
        return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin >> t;
    while(t--){
        cin >>n ;
        vector<string> x(2*n-2);
        for(int i=0;i<2*n-2;i++){
            cin >> x[i];
        }
        sort(all(x),cmp);
        string a=x[0],b=x[1];
        string temp = "";
        //cout << a <<" "<<b<<endl;
        int saem=1;
        for(int i =0;i<a.size()-1;i++){
            if(a[i]!=b[i+1]){
                saem=0;
            }
        }
        if(saem){
            temp+=b+a[a.size()-1];
        }
        else temp+=a+b[b.size()-1];
        //cout << temp <<endl;
        int flag=0;
        for(int i =0;i<temp.size()/2;i++){
            if(temp[i]!=temp[temp.size()-1-i]){
                flag=1;
            }
        }
        if(flag)cout <<"No\n";
        else cout <<"Yes\n";
    }

}



