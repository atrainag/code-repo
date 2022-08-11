#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> x;
    x={1,2,3,4,4};
    vector<vector<int>> y;
    do{
        y.push_back(x);
        //cout << x[0]<<" "<<x[1]<<" "<<x[2]<<endl;
    }while(next_permutation(x.begin(),x.end()));
    for(int i=0;i<y.size();i++){
        for(int j=0;j<y[i].size();j++){
            cout << y[i][j]<< " ";
        }
        cout <<"\n";
    }
}
