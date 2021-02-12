vector<int> rightView(Node *root)
{
   vector<int>v;
   if(!root)
   {
       return v;
   }
   queue<Node*>q;
   int flag;
   int count;
   q.push(root);
   while(q.size()>0)
   {
       count=q.size();
       int t=count;
       flag=1;
       while(count--)
       {
           
           root=q.front();
           q.pop();
           if(flag==t)
           {
               v.push_back(root->data);
           }
           if(root->left)
           {
               q.push(root->left);
           }
           if(root->right)
           {
               q.push(root->right);
           }
           flag++;
       }
       
   }
   return v;
}

