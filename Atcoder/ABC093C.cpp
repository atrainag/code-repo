#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    vector<int> x(3);
    cin >> x[0]>>x[1]>>x[2];
    sort(x.begin(),x.end());
    int ans=0;
    ans+=(x[1]-x[0])/2;
    if((x[1]-x[0])%2!=0){
        ans+=2;
    }
    //cout <<ans <<endl;
    ans+=x[2]-x[1];
    cout << ans <<endl;
}
