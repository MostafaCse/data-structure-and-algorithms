#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node *parrent;
};

node *Create_note(int item)
{
    node *new_node;
    new_node=(node*)malloc(sizeof(node));
    new_node->data=item;
    new_node->left=NULL;
    new_node->right=NULL;
    new_node->parrent=NULL;

    return new_node;
}

void Add_left_node(node *Node, node *child)
{
    Node->left=child;
    child->parrent=Node;
}

void Add_right_node(node *Node, node *child)
{
    Node->right=child;
     child->parrent=Node;
}

node *bst_insert(node *root, node *child)
{
    node *current_node,*parrent_node;

  if(root==NULL)
  {
      root=child;
      return root;
  }

  current_node=root;
  while(current_node!=NULL)
  {
      parrent_node=current_node;
      if(child->data<current_node->data)
        current_node=current_node->left;
      else
        current_node=current_node->right;
  }

  if(child->data<parrent_node->data)
    Add_left_node(parrent_node,child);
  else
    Add_right_node(parrent_node,child);

return root;
}

node *create_bst()
{
    int a[]={5,17,3,7,12,19,1,4};
    node *root,*nodes;
    root=Create_note(10);
    for(int i=0; i<8; i++)
    {
        nodes=Create_note(a[i]);

        root=bst_insert(root,nodes);
    }
    return root;
}

node *bst_minimum(node *root)
{
    node *nodes=root;
    node *save;
   while(nodes!=NULL)
   {
       save=nodes;
       nodes=nodes->left;
   }

   return save;
}
int main()
{
    node *root=create_bst();
  node *minimum;
  minimum=bst_minimum(root);
  cout<<minimum->data<<endl;



}


