#include <vector>
#include <iostream>
#include <algorithm>

#define rep(i,n) for(int i=0 ; i< n ; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    rep(i,n){
        cin >>x[i];
        x[i]=y[i];
    }
    sort(x.begin(),x.end());
    rep(i,n){
        if(x[n-2]==y[i]){
            cout << x[1]<<" "<<y[i]<<endl;
            cout << i<<endl;
            break;
        }
    }

}

