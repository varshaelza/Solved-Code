//Principle - Inorder traversal of BST gives values in increasing order

bool checkBST(Node* root) {
        
        Node* c=root;
        vector<Node*> st;
        vector<int> a;
        int i=0;
        while(c!=NULL || !st.empty())
        {
            while(c!=NULL)
            {
                st.push_back(c);
                c=c->left;
            }
            
            a.push_back(st.back()->data);
            c=st.back();
            st.pop_back();
            c=c->right;
            
            
        }
        
        for(i=0;i<(a.size()-2);i++)
        {
            if(a[i]>=a[i+1])
            return false;
        }
		return true;
	}
