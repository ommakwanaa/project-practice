#include<iostream>
#include<queue>
#include<vector>
#include<unordered_map>

using namespace std;

//Data Structure to store a binary tree node;
struct Node
{
    int data;
    Node *l,*r;
    Node(int data)
    {
        this->data = data;
        this->l = NULL;
        this->r = NULL;
    }
};

//function to print all nodes of a given binary tree in a specific
//order from top to bottom

void printNode(Node* root)
{
    //return if the tree is empty
    if(root==NULL){
    return;
    }
    
    //print the root Node
    cout<<root->data<<" ";
    
    //create two empty queues and enqueue root's left and right child, respectively
    queue<Node*>q1,q2;
    
    if(root->l && root->r)
    {
        q1.push(root->l);
        q2.push(root->r);
    }
    //loop till queue is empty
    while(!q1.empty())
    {
        //calculate the total number of nodes at the current level
        int n = q1.size();
        
        //process every node of the current level
        while(n--)
        {
            //dequeue front node from the first queue and print it
            Node* x = q1.front();
            q1.pop();
            cout<<x->data<<" ";
            
            //enqueue left and right child of 'x' to the first queue
            if(x->l)
            {
                q1.push(x->l);
            }
            
            if(x->r)
            {
                q1.push(x->r);
            }
            
            //dequeue front node from the second queue and print it
            Node* y = q2.front();
            q2.pop();
            cout<<y->data<<" ";
            
            //enqueue left and right child of 'x' to the first queue
            if(y->r)
            {
                q2.push(y->r);
            }
            
            if(y->l)
            {
                q2.push(y->l);
            }
            
        }
    }
}

//a specific order from bottom to top

void priNodes(Node* root)
{
  //return if the tree is empty
  if(root ==NULL)
  {
   return ;
   }
 
  //start with level 1
  int level = 1;

  //create an empty multimap of int associated with multiple values
  unordered_map<int, vector<int>> map;

  //insert the root node at the first level
  map[level].push_back(root->data);
  queue<Node*>q1,q2;
  
  if(root->l && root->r)
  {
    q1.push(root->l);
    q2.push(root->r);
   }

    //loop till queue is empty
    while(!q1.empty())
    {
      level++;
      int n = q1.size();

       while(n--)
        {
            //dequeue front node from the first queue and print it
            Node* x = q1.front();
            q1.pop();
       
            map[level].push_back(x->data);
            //enqueue left and right child of 'x' to the first queue
             if(x->l)
            {
                q1.push(x->l);
            }
            
            if(x->r)
            {
                q1.push(x->r);
            }
            //dequeue front node from the first queue and print it
            Node* y = q2.front();
            q2.pop();
            map[level].push_back(y->data);
            //enqueue left and right child of 'x' to the first queue
            if(y->r)
            {
                q2.push(y->r);
            }
            
            if(y->l)
            {
                q2.push(y->l);
            }
         }
     }
       //print all nodes present at every level
        for(int i=map.size();i>0; i--)
        {
           for(int j: map[i]){
             cout<<j<<" ";
        }
     }
 }           
int main()
{
    Node* root = new Node(1);
    root->l = new Node(2);
    root->r = new Node(3);
    root->l->l = new Node(4);
    root->l->r = new Node(5);
    root->r->l = new Node(6);
    root->r->r = new Node(7);
    root->l->l->l = new Node(8);
    root->l->l->r = new Node(9);
    root->l->r->l = new Node(10);
    root->l->r->r = new Node(11);
    root->r->l->l = new Node(12);
    root->r->l->r = new Node(13);
    root->r->r->l = new Node(14);
    root->r->r->r = new Node(15);
    cout<<"Print Top-Down"<<endl;
    printNode(root);
    cout<<"\nPrint Bottom-Up"<<endl;
    priNodes(root);
    return 0;
}