#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,tot=0;
    cin >> n;
    vector<string> s(n);
    for(int i =0 ; i < n ;i++){
        cin >> s[i];
        if(i>0 && s[i]!=s[i-1]){
            tot+=1;
        }
    }

    cout << tot + 1<<endl;

}
