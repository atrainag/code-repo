#include <bits/stdc++.h>
using namespace std;

const int N=1005;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
bool flag[N][N];
int n,m,a[N][N];

bool bfs(int x,int y)
{
    queue<pair<int,int> > q;
    q.push({x,y});
    flag[x][y]=1;
    while(!q.empty())
    {
        pair<int,int> t=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int xx=t.first+dx[i];
            int yy=t.second+dy[i];
            if(xx<0||xx>=n||yy<0||yy>=m) continue;
            if(flag[xx][yy]==1) continue;
            if(a[xx][yy]==0)
            {
                flag[xx][yy]=1;
                q.push({xx,yy});
            }
        }
    }
    return flag[n-1][m-1];
}

bool check()
{
    memset(flag,0,sizeof flag);
    return bfs(0,0);
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    if(check())
    {
        cout<<"False"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(a[i][j]==0)
            {
                a[i][j]=1;
                if(check())
                {
                    cout<<"True"<<endl;
                    return 0;
                }
                a[i][j]=0;
            }
    cout<<"False"<<endl;
    return 0;
}
