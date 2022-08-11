#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    for(int i =0 ; i < n;i++){
        cin >> x;
        int a = abs(x-2*(x/3)-x/3);
        int b = abs(x-2*(x/3 + 1)- (x/3 + 1));
        if(a<=b)cout << x-2*(x/3)<<" "<<x/3<<endl;
        else cout << x-2*(x/3+1)<<" "<<x/3+1<<endl;
    }
}
