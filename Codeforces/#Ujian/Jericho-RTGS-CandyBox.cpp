#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double r1,r2,c1,c2,d1,d2,a,b,c,d;
    cin >>r1>>r2>>c1>>c2>>d1>>d2;
    a=(r1-d2+c1)/2;
    d=d1-a;
    b=r1-a;
    c=c1-a;
    if(a<=0||b<=0 || c<=0 || d<=0){
        cout <<-1<<endl;
    }
    else{
        cout << a<<" " << b <<"\n"<<c<<" "<<d<<"\n";
    }
}

