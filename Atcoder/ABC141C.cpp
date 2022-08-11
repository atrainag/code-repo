#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k,q,x;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        a[i]=k;
    }
    for(int i=0;i<q;i++){
        cin >> x;
        a[(x-1)]++;
    }
 //   int ans=0;
    for(int i=0;i<n;i++){
        //cout << a[i]<<endl;
        if(a[i]-q>0){
            cout <<"Yes\n";
        }
        else cout << "No\n";
    }
}
