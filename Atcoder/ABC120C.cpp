#include <iostream>

using namespace std;

int main(){
    int n;
    string s;
    cin >>s;
    n=s.size();
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')a++;
        if(s[i]=='0')b++;
    }
    cout << min(a,b)*2<<endl;
}
