
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int h,w;
    string s;
    cin >> h>>w;
    vector<int> c1(h);
    vector<int> c2(h);
    int cnt1=0,cnt2=0,ans=0;
    for(int i=0;i<h;i++){
        cin >> s;
        for(int j=0;j<s.size();j++){
            if(s[j]=='#'){
                cnt1++;
            }
        }
        c1[i]=cnt1;
        cnt1=0;
    }
    for(int i=0;i<h;i++){
        cin >> s;
        for(int j=0;j<s.size();j++){
            if(s[j]=='#'){
                cnt2++;
            }
        }
        c2[i]=cnt2;
        cnt2=0;
    }
    ans=1;
    for(int i=0;i<h;i++){
        if(c1[i]!=c2[i]){
            ans=0;
        }
    }
    if(ans)cout << "Yes\n" <<endl;
    else cout << "No\n" <<endl;
}

