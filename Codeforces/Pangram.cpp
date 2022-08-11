#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>

#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define rep(i,n) for(int i=0 ; i <n ;i++)

using namespace std;

int main(){
    int n;

    cin >> n;
    vector<char> s(n);
    rep(i,n){
        cin >> s[i];
        if(s[i]<97){
            s[i]+='a'-'A';
        }
    }
    sort(s.begin(),s.end());
    bool pang=true;
    int t=0;
    rep(i,n){
        if(s[i]==s[i+1]){
            continue;
        }

        if(s[i]!='a'+t){

            pang = false;
            break;
        }
        else{
            t++;
        }
    }
   // cout << t <<endl;
    if(pang && t==26){
        cout << "YES\n";
    }
    else{cout <<"NO\n";}

}

