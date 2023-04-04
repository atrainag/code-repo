#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,t,i=0;
    cin>>t;
    for(i;i<t;i++)
    {
        int z=0;
        cin>>a>>b>>c>>d;
        if(b>a)
        {
            z+=1;
        }
        if(c>a)
        {
            z+=1;
        }
        if(d>a)
        {
            z+=1;
        }
        cout<<z<<endl;
    }
    return 0;
}
