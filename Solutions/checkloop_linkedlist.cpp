#include<iostream>
using namespace std;
struct node
{
    int val;
    node *next;
    node *prev;
};

class linkedlist
{
    node *front;
    node *rear;
    public:
    linkedlist()
    {
        front =NULL;
        rear=NULL;
        
    }
    void push(int v)
    {
        node *temp=new node;
        temp->val=v;
        if(front==NULL)
        {
        
            
            temp->next=NULL;
            temp->prev=NULL;
            front=temp;
            rear=temp;
        }
        else if(front==rear)
        {
            front->next=temp;
            rear=temp;
            rear->prev=front;
            rear->next=NULL;
        }
        else
        {
            rear->next=temp;
            temp->prev=rear;
            rear=temp;
            rear->next=NULL;
        }
    }
    
    void popfront()
    {
        if(front==NULL)
        {
            cout<<"Underflow\n";
        }
        else if(front==rear)
        {
            node * temp=front;
            front=NULL;
            rear=NULL;
            free(temp);
            
        }
        else
        {
            node *temp=front;
            front=front->next;
            free(temp);
        }
    }
    void poprear()
    {
        if(front==NULL)
        {
            cout<<"Underflow\n";
        }
        else if(front==rear)
        {
            node * temp=front;
            front=NULL;
            rear=NULL;
            delete temp;
            
        }
        else
        {
            node *temp=rear;
            cout<<"poprear"<<rear->val<<"\n";
            rear=rear->prev;
            delete temp;
        }
    }
    void view()
    {
        node *i;
        if(front==NULL)
        {
            cout<<"Underflow\n";
        }
        for(i=front;i!=NULL;i=i->next)
        {
            cout<<i->val<<"  ";
        }
        cout<<"\n";
    }
    bool checkloop()
    {
        node *i=rear;
        node *j;
        if(front==NULL)
        {
            cout<<"Underflow\n";
        }
        for(i=rear;i!=NULL;i=i->prev)
        {
            for(j=i->next;j!=NULL;j=j->next)
            {
                if(j==i)
                {
                    return true;
                }
            }
        }
        return false;
    }
        
        
    
};
int main()
{
   linkedlist l;
   l.push(3);
   l.push(4);
   l.push(90);
   l.view();
   l.popfront();
   l.view();
   l.poprear();
   l.view();
   cout<<"Loop present(0-No/1-Yes)"<<l.checkloop()<<"\n";
   l.view();
   return 0;
}
