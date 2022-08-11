#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,m,k,a;
    cin >> n >> m;
    vector<int> x(m);
    for(int i=0;i<m;i++){
        x[i]=0;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        cin >> k;
        for(int j=0;j<k;j++){
            cin >> a;
            x[a-1]++;
            if(x[a-1]==n){
                ans++;
            }
            //cout << x[a-1]<<endl;
        }
    }
    cout << ans <<endl;
}
