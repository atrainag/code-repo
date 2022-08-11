#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
    long long int x=1;
    for(int i=1;i<=n;i++){
        x*=i;
        x%=1000000007;
    }
    cout << x <<endl;
}
