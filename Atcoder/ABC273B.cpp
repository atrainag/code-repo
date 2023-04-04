#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long int d=10,x,t,k;
    cin >> x >> k;
    for (int i=1;i<=k;i++){
        t=x;
        t%=d;
        if(d-t > t){
            x-=t;
        }
        else{
            x+=d-t;
        }
        d*=10;
    }
    cout << x <<endl;
}

