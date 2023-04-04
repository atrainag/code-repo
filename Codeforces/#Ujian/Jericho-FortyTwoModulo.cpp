#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int a,n=1;
    vector<int> x(10);
    for(int i =0  ; i < 10 ; i++){
        cin >> a;
        x[i]=(a%42);
    }
    sort(x.begin(),x.end());
    for(int i = 0 ; i < x.size();i++){
        if(i==9){
            break;
        }
        if(x[i]!=x[i+1]){
            n++;
        }
    }
    cout << n << endl;
}


