#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int k,n;
        cin>> n>> k;
        vector<int> x(n);
        vector<int> y(k);
        for(int i=0;i<k;i++){
            y[i]=0;
        }
        for(int i=0;i<n;i++){
            cin >> x[i];
            //cout <<"K";
            y[i%k]=max(y[i%k],x[i]);
        }
        long long int ans=0;
        for(int i=0;i<k;i++){
            ans+=y[i];
        }
        cout << ans <<endl;
    }
}
