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
    vector<int> x(s.size(),1);
    vector<int> y(s.size(),1);
    vector<int> z;
    int n=0;
    while(1){
        n++;
        for(int i=0;i<s.size();i++){
            //cout << s[i]<<" "<<x[i];
            if(s[i]=='R' && x[i]!=0){
                //cout << "A"<<endl;
                y[i+1]+=x[i];
                y[i]-=x[i];
            }
            else if(s[i]=='L'&& x[i]!=0){
                //cout << "B"<<endl;
                y[i-1]+=x[i];
                y[i]-=x[i];
            }

        }
        //cout << n <<endl;
        if(n==2){
            z=y;
        }
        else if(n%2==0){

/*)
            prtv(y);
            cout <<"||\n";
            prtv(z);
            cout<<"|/\\|\n";
*/
            if(y==z){
                x=y;
                break;
            }
            else{
                z=y;
            }
        }
        x=y;
      // cout << n <<" ";
       //prtv(x);
       //cout <<"========="<<endl;
    }
    prtv(x);
}

