#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n,g;

    cin >> n >>g;
    vector<int> x(n);
    vector<int> y(g);
    for(int i =0 ; i < n ; i++){
        cin >> x[i];
    }
    sort(x.begin(),x.end());
    for(int i = 0 ; i < g ; i++){
        cin >> y[i];
    }
    for(int i = 0 ; i < g ; i++){
        int t=0;
        for(int j = 0 ; j < x.size() ;j++){
            if(y[i]<x[j]){
                break;
            }
            if(y[i]==x[j]){
                t++;
            }
        }

        cout << t<<endl;
    }



}
