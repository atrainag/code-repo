#include <iostream>

using namespace std;

int main(){
    int a ,b;
    int t=0;
    cin >> a >> b;
    while (a<=b){
        a*=3;
        b*=2;
        t++;
    }
    cout << t;
}
