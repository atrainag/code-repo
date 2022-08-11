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
    int x1,y1,x2,y2;
    cin >> x1>>y1>>x2>>y2;
    if(x1==x2){
        int temp=abs(y2-y1);
        if(y1<y2){
            cout << x2-temp<<" "<<y2<<" " << x2-temp <<" "<<y2-temp;
        }
        else{
            cout << x2+temp<<" "<<y2<<" " << x2+temp <<" "<<y2+temp;
        }
    }
    else if(y1==y2){
        int temp=abs(x2-x1);
        if(x1<x2){
            cout << x2<<" "<<y2+temp<<" " << x2-temp <<" "<<y2+temp;
        }
        else{
            cout << x2<<" "<<y2-temp<<" " << x2+temp <<" "<<y2-temp;
        }
    }
    else{
        int a=abs(x2-x1),b=abs(y1-y2);
        if(x1<x2 && y1>y2){
            cout << x2+b <<" "<<y2+a<<" "<<x2+b-a<<" "<<y2+a+b<<endl;
        }
        else if(x1>x2 && y1<y2){
            cout << x2-b<<" "<<y2-a<<" "<<x2-b+a<<" "<<y2-a-b<<endl;
        }
        else if(x1<x2 && y1<y2){
            cout << x2-b<<" "<<y2+a<<" "<<x2-b-a<<" "<<y2+a-b<<endl;
        }
        else if(x1>x2 && y1>y2){
            cout << x2+b<<" "<<y2-a<<" "<<x2+b+a<<" "<<y2-a+b<<endl;
        }
    }
}




