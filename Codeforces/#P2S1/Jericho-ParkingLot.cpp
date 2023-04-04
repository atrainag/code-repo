#include <vector>
#include <iostream>

using namespace std;

int main(){
    int n,m,o;
    int tot=0;
    cin >> n >> m;
    vector<int> r(n);
    vector<int> w(m);
    vector<bool> s(n);
    vector<int> c(n);
    vector<int> q;

    for(int i = 0 ; i < n ; i++){
        cin >> r[i];
        s[i]=false;
    }
    for(int i = 0 ; i < m ; i++){
        cin >> w[i];
    }
    for(int i = 0 ; i < 2*m ; i++){
        cin >> o;
        if(o<0){
            for(int j = 0; j < n ; j++){
                if(s[j]==true){
                    if(abs(o)==c[j]){
                        s[j]=false;
                        c[j]=0;
                        break;
                    }
                }
            }
            if(q.size()>0){
                for(int j = 0 ; j < n ; j++){
                    if(s[j]==false){
                        s[j]=true;
                        tot+=w[q[0]-1]*r[j];
                        c[j]=q[0];

                        break;
                    }
                }
                int temp;
                temp=q[0];
                q[0]=q[q.size()-1];
                q[q.size()-1]=temp;
                q.pop_back();
            }
        }
        else{
            bool full=true;
            for(int j = 0 ; j < n ; j++){
                if(s[j]==false){
                    s[j]=true;
                    tot+=w[o-1]*r[j];
                    c[j]=o;
                    full=false;
                    break;
                }
            }
            if(full==true){
                q.push_back(o);
            }
        }
    }
    cout << tot<<endl;

}

