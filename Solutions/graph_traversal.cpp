#include<bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    int wt;
    node *link;
};

class Graph
{
    int n;
    int e;
    node **head;
    public:
    Graph(int v)
    {
        n=v;
        e=0;
        head=new node*[n];
        for(int i=0;i<n;i++)
        {
            head[i]=NULL;
        }
    }
    void add_edge(int u,int v,int w)
    {
        node *temp=new node;
        temp->val=v;
        temp->wt=w;
        temp->link=head[u];
        head[u]=temp;
        node *temp2=new node;
        temp2->val=u;
        temp2->wt=w;
        temp2->link=head[v];
        head[v]=temp2;
        
        
    }
    void view()
    {
        for(int i=0;i<n;i++)
        {
            for( node *j=head[i];j!=NULL;j=j->link)
            {
                cout<<i<<"-"<<j->val<<" weight = "<<j->wt<<"\n";
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
                for( node *j=head[d];j!=NULL;j=j->link)
                {
                    stack.push_back(j->val);
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
                for( node *j=head[d];j!=NULL;j=j->link)
                {
                    q.push_back(j->val);
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
