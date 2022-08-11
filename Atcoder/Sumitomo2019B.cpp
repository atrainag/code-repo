//Tax rate

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,x;
    cin >> n;
    if(n*100 %108==0){
        cout << (n*100)/108;
    }
    else{
        x=n/1.08;
        if(floor((x+1)*1.08) == n){
            cout << x+1;
        }
        else if(floor(x*1.08) == n ){
            cout << x;
        }
        else if(floor((x-1)*1.08)==n){
            cout << x-1;
        }
        else{cout <<":(";}
    }
   cout <<"\n";
}
