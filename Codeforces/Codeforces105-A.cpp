#include <iostream>
#include <vector>

using namespace std;

int main(){
    string s;
    int n;


    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int r=0;
        vector<char> t;
        cin >>s;
        if(s.size()%2!=0){
            cout << "NO\n";
        }
        else{
            for(int j = 0 ; j < s.size();j++ ){
                if(s[j]!=s[j+1]&& j!=s.size()-1){
                    if(j>1){
                        if(s[j-2]==s[j-1]){
                            r++;
                        }
                    }
                    else if(j>0){
                        if(s[j-1]==s[j]){
                            r++;
                        }
                    }
                    else{
                        r++;
                    }
                }
                else if(t.size()>=1){
                    cout <<"ANJAY\n";
                    for(int k = 0  ; k < t.size() ; k++){
                        if(t[k] != s[j]){
                            r++;
                            t.pop_back();
                            break;
                        }

                    }
                }
                else{
                    if(j>0){
                        if(s[j]==s[j-1]){
                            t.push_back(s[j]);
                        }
                    }
                }
            }
            if(r==s.size()/2){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
            cout << r<<endl;
        }

    }

}
