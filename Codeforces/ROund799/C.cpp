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
    for(int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--){
        char x[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin >> x[i][j];
            }
        }
        int tr=0;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                tr=0;
                if(x[i][j]=='#'){
                    if(x[i-1][j-1]=='#')tr++;
                    if(x[i+1][j+1]=='#')tr++;
                    if(x[i-1][j+1]=='#')tr++;
                    if(x[i+1][j-1]=='#')tr++;
                }
                if(tr==4){
                    cout << i+1 <<" "<<j+1 <<endl;
                    break;
                }
            }
        }
    }

}


