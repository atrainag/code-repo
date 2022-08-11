#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(int i= 0 ; i < n ; i++)

using namespace std;

int main(){
    int t,n;
    cin >> t;
    rep(i,t){
        cin >> n;
        vector<int> a(n);
        rep(j,n){
            cin >> a[j];
        }
          int temp=a[0];
        rep(j,n-1){
            temp&=a[j+1];
        }
        cout << temp<<endl;
    }
}
