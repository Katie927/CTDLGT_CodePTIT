#include<iostream>
#include<vector>

using namespace std;

vector<int> a[100001];
bool chuaxet[100001];
void DFS(int u)
{
    chuaxet[u]=false;
    for(int i=0;i<a[u].size();i++)
    {
        int v=a[u][i];
        if(chuaxet[v])
            DFS(v);
    }
}
int main()
{
    // freopen("CTDL.inp","r",stdin);
    // freopen("CTDL.out","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
            a[i].clear(),chuaxet[i]=true;
        for(int i=1;i<=m;i++)
        {
            int u,v;
            cin>>u>>v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        int dem=0;
        for(int i=1;i<=n;i++)
            if(chuaxet[i])
                dem++,DFS(i);
        cout<<dem<<endl;
    }
    return 0;
}
