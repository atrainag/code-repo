#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,m;
    cin >>n >>m;
    if(m%2!=0){
        cout <<n*(m/2)+(n/2)<<"\n";
    }
    else{
        cout << n*ceil(m/2)<<"\n";
    }

}
