#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>
#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define rep(i,n) for(int i=0 ; i <n ;i++)

using namespace std;

int main(){
    double n,x,tot;
    cin >> n;
    for(int i =0 ; i < n;i++){
        cin >> x;
        tot+=x;
    }
    cout << fixed<< setprecision(4)<< tot/n<<endl;
}
