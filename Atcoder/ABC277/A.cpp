#include <iostream>

using namespace std;

int main(){
    int n,k,ans=0,x;
    cin >> n>>k;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x==k){
            ans=i+1;
        }
    }
    cout << ans <<endl;
}
