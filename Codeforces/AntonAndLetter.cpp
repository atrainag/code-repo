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
    string s;
    bool ex;
    vector<char> x;
    getline(cin,s);
    rep(i,s.size()){
        //cout << s[i]<<" ";
        if(s[i]>='a' && s[i]<='z'){
            ex=false;
            rep(j,x.size()){
                if(s[i]==x[j]){
                    ex=true;
                }
            }
            if(!ex){
                x.push_back(s[i]);
            }
        }
    }
    cout << x.size()<<endl;
}
