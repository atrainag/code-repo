#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;


void tulis(int kedalaman){
    if(kedalaman >= N){
        for(int i =0 ; i < N ;i++){
            cout << catat[i];
        }
        cout << "\n";
    }
    else{
        for(int i =0  ; i <N ; i++){
            catat[kedalaman]=s[i];
            tulis(kedalaman+1);
        }
    }
}
int main(){
    int n,N;
    string s;
    cin >> s >>n;
    vector<int> catat()
    N=s.size();
    tulis(N);
}


