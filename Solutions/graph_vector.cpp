#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int n;
    int e;
    vector<vector<pair<int,int>>> head;
    public:
    Graph(int v)
    {
        n=v;
        e=0;
        head.resize(v);
    }
    void add_edge(int u,int v,int w)
    {
        
        head[u].push_back(make_pair(v,w));
        head[v].push_back(make_pair(u,w));
        
    }
    void view()
    {
        for(int i=0;i<n;i++)
        {
            for( auto j=head[i].begin();j!=head[i].end();j++)
            {
                cout<<i<<"-"<<j->first<<" weight = "<<j->second<<"\n";
            }
        }
    }
    
    void dfs(int val)
    {
        vector<bool> visit(n,false);
        dfssub(val,visit);
        
    }
    
    void dfssub(int val,vector<bool> visit)
    {
        vector<int> stack;
        stack.push_back(val);
        while(!stack.empty())
        {
            int d=stack.back();
            stack.pop_back();
            if(visit[d]==false)
            {
                cout<<d<<" ";
                visit[d]=true;
                for( auto j=head[d].begin();j!=head[d].end();j++)
                {
                    stack.push_back(j->first);
                }
                
            }
        }
    }
    void bfs(int val)
    {
        vector<bool> visit(n,false);
        bfssub(val,visit);
        
    }
    
    void bfssub(int val,vector<bool> visit)
    {
        vector<int> q;
        q.push_back(val);
        while(!q.empty())
        {
            int d=q.front();
            q.erase(q.begin());
            if(visit[d]==false)
            {
                cout<<d<<" ";
                visit[d]=true;
                for( auto j=head[d].begin();j!=head[d].end();j++)
                {
                    q.push_back(j->first);
                }
                
            }
        }
    }
    
};

int main()
{
    Graph g(5);
    g.add_edge(0,1,3);
    g.add_edge(0,2,4);
    g.add_edge(1,3,8);
    g.add_edge(2,4,3);
    g.add_edge(4,1,9);
    g.view();
    cout<<"DFS\n";
    g.dfs(2);
    cout<<"\nBFS\n";
    g.bfs(2);
    return 0;
    
}
