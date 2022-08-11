#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    int ans=0,mi=100000000;
    for(int i=0;i<n;i++){
        if(x[i]<=mi){
            ans++;
            mi=x[i];
        }
    }
    cout << ans <<endl;
}
