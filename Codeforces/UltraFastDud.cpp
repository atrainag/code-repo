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
    string a,b,c="";
    cin >> a>>b;
    for(int i =0 ; i < a.size() ; i++){
        if( a[i]==b[i]){
            c+="0";
        }
        else{
            c+="1";
        }
    }
    cout << c <<endl;
}

