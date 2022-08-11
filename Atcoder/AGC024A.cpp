#include <iostream>

using namespace std;

int main(){
    long long int a,b,c,k;

    cin >> a >> b >> c >>k;
    long long int x=0,y=0;
    x=a+k*c;
    y=b+k*c;
    if(abs(x-y)>1000000000000000000){
        cout <<"Unfair\n";
    }
    else if(k%2==0){
        cout << x-y<<endl;
    }
    else{
        cout <<y-x<<endl;
    }
}
