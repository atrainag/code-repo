
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



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    string s="FBFFBFFB";
    cin >> t;
    while(t--){
        cin >>n ;
        string x;
        cin >> x;
        int off=0;
        int sus=0;
        while(off<9){
            int flag=0;
           // cout <<"-"<<endl;
            for(int i =0;i<x.size();i++){
               // cout <<off+i%8 <<" "<<i<<endl;
                if(s[(off+i)%8]!=x[i]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                sus=1;
                cout <<"YES\n";
                break;
            }
            off++;
        }
        if(!sus)cout <<"NO\n";
    }

    /*
    for(int i =1;i<=100;i++){
        if(i%3==0)s+="F";
        if(i%5==0)s+="B";
    }
    cout << s <<endl;
    */
}

