#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    int m1=-1,m2=-1,e=-1;
    for(int i=0;i<n;i++){
        cin >> x[i];

        if(x[i]>m1){
            m1=x[i];
            e=i;
        }if(e!=i){
            m2=max(m2,x[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(e==i){
            cout << m2 <<endl;
        }
        else
            cout <<m1<<endl;
    }
}
