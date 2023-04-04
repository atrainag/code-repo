#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> in(3);
        cin >> in[0]>> in[1] >> in[2];
        sort(in.begin(),in.end());
        if(in[0]+in[1]==in[2]){
            cout <<"Yes\n";
        }
        else{
            cout <<"No\n";
        }
    }
}
