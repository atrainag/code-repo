#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int x,y,a,b;
    cin >>a>>b>>x >>y;
    cout <<fixed<<setprecision(4)<< sqrt(pow(abs(a-x),2)+pow(abs(b-y),2));
}
