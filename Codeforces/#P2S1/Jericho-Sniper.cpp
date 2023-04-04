
#include <iostream>

using namespace std;

int main(){
    long long int n,m,a;
    long long t=0;
    cin >> n >> m;
    for(int i = 0 ; i < m ;i++){
        cin >> a;
        t+=n-a+1;
    }
    cout << t;
}
