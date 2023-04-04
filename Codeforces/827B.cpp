#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> x(n);
        for(int i=0;i<n;i++){
            cin >> x[i];
        }
        sort(x.begin(),x.end());
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(x[i]==x[i+1]){
                ans=1;
            }
        }
        if(ans){
            cout <<"NO\n";
        }
        else{
            cout <<"YES\n";
        }
    }
}
