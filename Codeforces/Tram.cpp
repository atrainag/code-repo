#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,x,y;
    int maks=0,p=0;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> x >>y;
        p+=y-x;
        if(maks<p){
            maks=p;
        }
    }
    cout << maks<<endl;
}

