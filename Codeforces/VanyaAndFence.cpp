#include <iostream>

using namespace std;

int main(){
    int n,h,x,tot=0;
    cin >> n >>h;

    for(int i =0 ; i < n ;i++){
        cin >> x;
        if(x<=h){
            tot+=1;
        }
        else{
            tot+=2;
        }
    }
    cout << tot <<endl;
}


