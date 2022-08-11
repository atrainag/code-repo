#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long int t,a,b,c;


    cin >> t;
    for(int i = 0 ; i < t;i++){
        bool near=false;
        vector<long long int> x;
        cin >> a>>b;
        c=a*b;
        x.push_back(c);
        int j = 1;
        while(1){
            if(a==b){
                break;
            }
            //cout <<j <<endl;
            for(int k =1 ; k <= x.size() ; k++){
                   // cout << k*a <<" "<<(x[j-1])-(k*a)<<" "<<x[j-1]<<endl;
                if(((x[j-1])-(k*a) )% a == 0 && ((x[j-1])-(k*a) )% b!=0 &&(k*a !=(x[j-1])-(k*a)) && ( k*a +(x[j-1])-(k*a) ==  x[j-1])){
                    cout <<"YES\n";
                    cout << k*a <<" "<<(x[j-1])-(k*a)<<" "<<x[j-1]<<endl;
                    near=true;
                    break;
                }
            }
            if(near){
                break;
            }
            j++;
            x.push_back(j*c);

        }
        if(!near){
            cout << "NO\n";
        }
    }

}
//12321321732189    172839712
