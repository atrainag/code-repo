#include <iostream>
#include <vector>

using namespace std;

long long int ans=0;
bool cek(vector<int> a){
    long long int x=0,y=0;
    int posx=0,posy=a.size()-1;
    for(int i=0;i<a.size();i++){
        if(x<=y){
            x+=a[posx];
            posx++;
        }
        else{
            y+=a[posy];
            posy--;
        }
        //cout << x <<" "<<y <<" "<<posx<<" "<<posy<<endl;
    }
    if(x==y){
        return true;
    }
    ans=abs(x-y);
    return false;

}

int main(){
    int n;
    cin >>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if(cek (a)){
        cout <<0<<endl;
    }
    else{
        cout << ans <<endl;
    }
}
