#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x==1){
            cout << 2 <<endl;
        }
        else if(x<=3)cout << 1 <<endl;
        else if(x<=6) cout << 2 <<endl;
        else if(x%3==0){
            cout << x/3<<endl;
        }
        else{
            int d=x/3;
            if(x%3==0)cout << d-1;
            else cout << d+1 << endl;
        }
    }
}
