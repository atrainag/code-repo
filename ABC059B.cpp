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

/*
void prtv(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";
}*/



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin >> a>>b;

    if(a.size()>b.size()){
        cout <<"GREATER\n";
    }
    else if(a.size()<b.size()){
        cout <<"LESS\n";
    }
    else{
            int eq=1;
        for(int i=0;i<a.size();i++){
                if(a[i]>b[i]){
                    cout <<"GREATER\n";
                    eq=0;
                    break;
                }
                else if(a[i]<b[i]){
                    cout <<"LESS\n";
                    eq=0;
                    break;
                }
        }
        if(eq){
            cout <<"EQUAL\n";
        }
    }
}




