#include <iostream>

using namespace std;

int main(){
    int k,n,w;
    cin >> k>> n>>w;
    long long int x = ((w*(w+1))/2)*k - n;
    if(x>0){
        cout << x<<"\n";
    }
    else{cout <<0<<"\n";}

}
