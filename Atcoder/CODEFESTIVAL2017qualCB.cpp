#include <iostream>
#include <vector>

using namespace std;

int ans=0;
int n;
void dfs(vector<int> a,vector<int> sol){
    if(sol.size()==n){
        for(int i=0;i<sol.size();i++){
            if(sol[i]%2==0){
                ans++;
                break;
            }
        }
    }
    else{
        for(int i=-1 ;i<2 ;i++){
            //cout << sol.size()<<endl;
            vector<int> nsol;
            nsol=sol;
            nsol.push_back(a[sol.size()]+i);
            dfs(a,nsol);
        }
    }
}

int main(){

    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    vector<int> sol;
    dfs(a,sol);
    cout << ans <<endl;
}
