#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

int main(){
    string a,b;
    int x,c;
    cin >> a>>b;
    c=stoi(a+b);
    bool quad=false;
    x=2;
    while(x<=c){
        if(x*x==c){
            quad = true;
            break;
        }
        x++;
    }
    if(quad){
        cout <<"Yes\n";
    }
    else{cout <<"No\n";}
}
