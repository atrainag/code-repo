#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>
#include <map>
#include <stack>
#include <string>
#include <cstring>

#define all(x) x.begin(),x.end()
#define last(x) x.size()-1
#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define repe(i,a,n) for(int i=a ; i <n ;i++)
#define rep(i,n) for(int i=0 ; i <n ;i++)
#define semoga using
#define bisa namespace
#define AC std;

semoga bisa AC

void prtv(vector<int> a){
    for(unsigned int i=0;i<a.size();i++){
        cout << a[i]<<" ";
    }
    cout <<"\n";
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n,r,s;
    cin >> t;
    while(t--){
        int n;
        int x[101][101];
        cin >> n;
        for(int i =0;i<n;i++){
            for(int j =0 ;j<n-1;j++){
                cin >> x[i][j];
            }
        }
        int en=0;
        for(int i =0;i<n;i++){
            for(int j =0 ;j<n;j++){
                int idx=0;
                for(int k =1 ;k<n-1;k++){
                    if(x[i][idx]==x[j][k]){
                        idx++;
                    }
                }
                if(idx==n-2){
                    /*
                    for(int k=0;k<n;k++){
                        printf("%d",x[i][k]);
                    }
                    printf("\n");
                    for(int k=0;k<n;k++){
                        printf("%d",x[j][k]);
                    }
                    printf("\n");
                    */
                    for(int k=0;k<n;k++){
                        if(k==n-1){
                            printf("%d\n",x[i][k-1]);
                        }
                        else if(k==0){
                            printf("%d ",x[j][0]);
                        }
                        else printf("%d ",x[j][k]);
                    }
                    en=1;
                    break;
                }
            }
            if(en)break;
        }

    }


}




