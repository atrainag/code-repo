#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;

    cin >> n;
    vector<int> x(n-1);
    for(int i = 0 ; i < n-1 ; i++){
        cin >> x[i];
    }
    sort(x.begin() , x.end());
    for(int i = 0 ; i < x.size() ; i++){
        if(x[i+1]-x[i]!=1){
            if(i!=n-2){
                cout << i+2<<endl;
                break;
            }
            else{
                if(x[0]!=1){
                    cout << 1;
                }
                else{
                    cout << x[n-2]+1;
                }
            }

        }
    }
}

