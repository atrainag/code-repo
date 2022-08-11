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
    long long int n;
    cin >> n;
    if(n%2!=0){
        cout << -1* (n/2+1);
    }
    else{
        cout << n/2;
    }
}

