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
    string s;
    cin >> s;
    if(s[0]!='A'){
        cout << "WA\n";
        return 0;
    }
    int cc=0;
    rep(i,s.size()){
        if(i==0) continue;

        if(s[i]>='A' && s[i]<='Z'){
              //  cout << i <<endl;
                if((i<2 || i> s.size()-2) && s[i]=='C'){
                    cout << "WA\n";
                    return 0;
                }
                else if(s[i]=='C'){
                    cc++;
                    continue;
                }
            cout << "WA\n";
            return 0;
        }
    }
    if(cc==0 || cc>1){
        cout <<"WA\n";
        return 0;
    }
    cout <<"AC\n";
    return 0;

}



