#include <iomanip>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    double a,b,prev,cur;
    cin >> a >>b;

    prev=a;
    double g=2;
    while(1){
        cur=b*(g-1) + a/sqrt(g);
        //cout << fixed<<setprecision(6)<<prev<<" "<<cur<<endl;
        if(prev<cur){
            break;
        }
        prev=cur;
        g++;

    }
    cout << fixed<<setprecision(6)<<prev<<endl;
}


