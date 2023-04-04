#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n==-1){
            break;
        }
        else{
            vector<int> v(n);
            vector<int> t(n);
            vector<int> s(n);
            int st=0;
            int tt;
            for(int i = 0 ; i  < n ; i++){
                cin >> v[i] >> t[i];
            }
            for(int i = 0 ; i  < n ; i++){
                if(i==0){
                    s[i]=v[i]*t[i];
                    tt=t[i];
                    st+=s[i];
                }
                else{
                    s[i]=v[i]*(t[i]-tt);
                    tt=t[i];
                    st+=s[i];
                }
            }
            cout << st<<" miles"<<endl;
        }
    }
}

