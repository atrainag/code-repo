#include <iostream>

using namespace std;

int main(){
    int a,b;
    //scanf("%d %d",&a,&b);
    cin >> a >>b;
    //printf("%d\n",(b*(b+1))/2 - (a*(a-1))/2);
    cout << (b-a+1)*(a+b)/2<<endl;
    int tot=0;
    for(int i= a;i<=b;i++){
        tot+=i;
    }
    //printf("%d\n",tot);
}
