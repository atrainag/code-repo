#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for(int i= 0 ; i < n ; i++)

using namespace std;

int main(){
    int t,n;
    string s;
    cin >> n;
    rep(i,n){
        cin >> t;
        cin >> s;
        int start=-1,ennd=-1,temp=-1;
        bool same = true;
        rep(j,t){
            if(s[j]!='?'){
                same = false;
                break;
            }
        }
        if(same){
            rep(j,t){
                if(j%2==0){
                    cout << "B";
                }
                else{
                    cout <<"R";
                }
            }
            cout <<"\n";
            continue;
        }
        rep(j,t){
            if(s[j]=='?' && j==t-1 && start == -1){
                if(s[j-1]=='B'){
                    s[j]='R';
                }
                else{s[j]='B';}
            }
            else if(s[j]=='?'){
               if(start == -1 && j!=t-1){
                    start = j;
               }
               else if(j==t-1){
                    for(int k = start ; k<=t-1;k++){
                        if((k-temp) %2 ==0){
                            s[k]=s[temp];
                        }
                        else{
                            if(s[temp]=='B'){
                                s[k]='R';
                            }
                            else{
                                s[k]='B';
                            }

                        }
                    }
                    start = -1;
               }
            }
            else{
                if(j!=0){
                     ennd = j-1;
                }

                temp = j;
                if(start == -1 ){
                    continue;
                }
                for(int k = start ; k <= ennd ; k++){
                    if((j-k) %2 ==0){
                        s[k]=s[j];
                    }
                    else{
                        if(s[j]=='B'){

                            s[k]='R';
                        }
                        else{

                            s[k]='B';
                        }

                    }
                }
                //cout << start <<" "<<ennd<<endl;
                start = -1;
            }
        }
        cout << s<<endl;
    }
}

