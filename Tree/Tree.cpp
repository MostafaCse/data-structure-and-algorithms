#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};


node *Create_note(int item)
{
    node *new_node;
    new_node=(node*)malloc(sizeof(node));
    new_node->data=item;
    new_node->left=NULL;
    new_node->right=NULL;

    return new_node;
}

void Add_left_node(node *Node, node *child)
{
    Node->left=child;
}

void Add_right_node(node *Node, node *child)
{
    Node->right=child;
}
node *Create_tree()
{
    node *two=Create_note(2);
    node *seven=Create_note(7);
    node *nine=Create_note(9);
    Add_left_node(two,seven);
    Add_right_node(two,nine);

     node *one=Create_note(1);
    node *six=Create_note(6);
    Add_left_node(seven,one);
    Add_right_node(seven,six);

    node *eight=Create_note(8);
    Add_right_node(nine,eight);

    return two;

}
void pre_order(node *tree)
{
  //  cout<<tree->data<<" ";

   if(tree->left!=NULL)
        pre_order(tree->left);
 // cout<<tree->data<<" ";
    if(tree->right!=NULL)
   pre_order(tree->right);
     cout<<tree->data<<" ";
}
int main()

{
    node *tree=Create_tree();
    pre_order(tree);
}
