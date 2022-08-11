#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#include <cmath>
#include <iomanip>
#include <map>
#include <stack>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define mp(a,b) make_pair(a,b)
#define fi first
#define se second
#define repe(i,a,n) for(int i=a ; i <n ;i++)
#define rep(i,n) for(int i=0 ; i <n ;i++)
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> prev;
    int i=1;
    while(1){
        if(find(prev.begin(),prev.end(),n)!=prev.end()){
            break;
        }
        prev.push_back(n);
        if(n%2==0){
            n/=2;
        }
        else{
            n*=3;
            n++;
        }
        i++;
    }
    cout << i << endl;

}





