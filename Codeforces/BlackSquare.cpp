#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> x(4);
    string s;
    cin >> x[0] >> x[1] >> x[2]>>x[3]>>s;
    //cout << s <<endl;
    int t=0;
    for(int i =0 ; i <s.size();i++){
        t+=x[s[i]-'0'-1];
    }
    cout << t <<endl;
}
