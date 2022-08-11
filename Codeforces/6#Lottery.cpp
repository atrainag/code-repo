#include <iostream>

using namespace std;

int main(){
    long long int n;
    long long int c=0;
    cin >> n;
    while(n>0){
        if(n-100>=0){
            n-=100;
            c++;
        }
        else if(n-20>=0){
            n-=20;
            c++;
        }
        else if(n-10>=0){
            n-=10;
            c++;
        }
        else if(n-5>=0){
            n-=5;
            c++;
        }
        else{
            n-=1;
            c++;
        }
    }
    cout << c;
}
