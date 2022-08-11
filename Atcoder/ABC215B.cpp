    #include <iostream>
    #include <cmath>
    #include <sstream>
    using namespace std;

    int main(){
        long long int n;
        cin >> n;
        int x=0;
        while(powl(2,x)<n){
            x++;
        }
        if(powl(2,x)>n){
            x--;
        }
        cout << x;
    }


