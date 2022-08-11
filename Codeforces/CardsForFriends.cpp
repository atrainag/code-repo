#include <iostream>

using namespace std;

int main(){
    int t,w,h,n;
    cin >> t;
    while(t--){
        cin >> w >> h >> n;
        int tot=1;
        while(1){
            if(w%2==0){
                w/=2;
                tot*=2;
                continue;
            }
            if(h%2==0){
                h/=2;
                tot*=2;
                continue;
            }
            if(tot>=n){
                cout << "YES\n";
                break;
            }
            cout <<"NO\n";
            break;
        }
    }
}
