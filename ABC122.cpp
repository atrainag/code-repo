#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>
#include <map>
#include <stack>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define repe(i,a,n) for(int i=a ; i <n ;i++)
#define rep(i,n) for(int i=0 ; i <n ;i++)
using namespace std;
//ABC 122 B
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int ma=0,temp=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'||s[i]=='G'||s[i]=='T'||s[i]=='C'){
            temp++;
        }
        if(i==s.size()-1 || !(s[i]=='A'||s[i]=='G'||s[i]=='T'||s[i]=='C')){
            ma=max(ma,temp);
            temp=0;
        }
    }
    cout << ma << endl;
}



