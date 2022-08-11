#include <iostream>
#include <cmath>
using namespace std;

int po(int x){
    int i =1;
    while(x--){
        i*=2;
    }
    return i;
}

int main(){
    int n,x;
    cin >>n;
    while(n--){
        cin >> x;
        int a=0,b=0;
        for(int i =1 ; i <= x;i++){
            if(i<=x/2-1){
                a+=po(i);
            }
            else if(i==x){
                a+=po(i);
            }
            else{
                b+=po(i);
            }
        }
        cout << abs(a-b)<<endl;
    }
}
