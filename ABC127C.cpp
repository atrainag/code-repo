#include <iostream>

using namespace std;

int main(){
    int n,m,l,r, ma=-1,mi=999999999;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> l >> r;
        ma=max(ma,l);
        mi=min(mi,r);
    }
    if(mi-ma<0)cout << 0<<endl;
    else cout << abs(ma-mi)+1<<endl;
}
