#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b;
    cin >> a>> b;
    int socket = 1, n=0;
    while(socket < b){
        socket--;
        socket +=a;
        n++;
    }
    cout << n<<endl;

}

