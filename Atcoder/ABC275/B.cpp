#include <iostream>

using namespace std;

int main(){
    long long int a,b,c,d,e,f;
    cin >> a>>b>>c>>d>>e>>f;
    cout << ((a%998244353*b%998244353*c%998244353)%998244353-(d%998244353*e%998244353*f%998244353)%998244353)%998244353<<endl;
}

