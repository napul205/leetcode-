//{ Driver Code Starts
// C++ program to find predecessor and successor in a BST
#include "bits/stdc++.h"
using namespace std;

// BST Node
struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    key = x;
	    left = NULL;
	    right = NULL;
	}
};


// } Driver Code Ends
/* BST Node
struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    key = x;
	    left = NULL;
	    right = NULL;
	}
};
*/

// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
class Solution
{
    public:int m1 =1e9 , m2 =1e9 ; 
    Node* a1 =NULL , *a2=NULL  ; 
    
    int cal(Node* root  , int key )
    {
        
        if(root==NULL)
        return 1e9 ; 
        
        int l =cal(root->left , key ); 
        int r = cal(root->right, key ) ;
        
        if(l<key)
        {
            if(abs((key - l)) < m1 )
            {
                m1= abs((key - l)) ;
                if(l!=1e9)
                {
                    a1 = root->left ;
                }
            }
        }
        if(r<key)
        {
               if(abs((key - r)) < m1 )
            {
                m1= abs((key - r)) ;
                if(r!=1e9)
                {
                    a1 = root->right ;
                }
            }
        }
        if(l>key)
        {
               if(abs((key - l)) < m2 )
            {
                m2= abs((key - l)) ;
                if(l!=1e9)
                {
                    a2 = root->left ;
                }
            }
            
            
        }
        if(r>key)
        {
            if(abs((key - r)) < m2 )
            {
                m2= abs((key - r)) ;
                if(r!=1e9)
                {
                    a2 = root->right ;
                }
            }
        }
        return root->key ;
    }
    
    
    
    
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        
        cal(root , key ) ;
        
        if(root->key>key)
        {
            if(root->key - key < m2 )
            {
                a2 =root ;
            }
        }
        else if(root->key< key )
        {
            if(-root->key + key < m1 )
            {
                a1 =root ;
            }
        }
        
        
         pre =a1 ;
         suc =a2; 
        // Your code goes here
    }
};

//{ Driver Code Starts.

Node* buildTree(string str)
{
   // Corner Case
   if(str.length() == 0 || str[0] == 'N')
       return NULL;

   // Creating vector of strings from input
   // string after spliting by space
   vector<string> ip;

   istringstream iss(str);
   for(string str; iss >> str; )
       ip.push_back(str);

   // Create the root of the tree
   Node* root = new Node(stoi(ip[0]));

   // Push the root to the queue
   queue<Node*> queue;
   queue.push(root);

   // Starting from the second element
   int i = 1;
   while(!queue.empty() && i < ip.size()) {

       // Get and remove the front of the queue
       Node* currNode = queue.front();
       queue.pop();

       // Get the current node's value from the string
       string currVal = ip[i];

       // If the left child is not null
       if(currVal != "N") {

           // Create the left child for the current node
           currNode->left = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->left);
       }

       // For the right child
       i++;
       if(i >= ip.size())
           break;
       currVal = ip[i];

       // If the right child is not null
       if(currVal != "N") {

           // Create the right child for the current node
           currNode->right = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->right);
       }
       i++;
   }

   return root;
}
// Driver program to test above functions
int main() {
   
   int t;
   string tc;
   getline(cin, tc);
   t=stoi(tc);
   while(t--)
   {
        string s; 
        getline(cin, s);
        Node* root = buildTree(s);
        getline(cin, s);
        int k = stoi(s);
        Node *pre=NULL,*succ=NULL;
        Solution ob;
        ob.findPreSuc(root,pre,succ,k);
        (pre!=NULL)?cout<<pre->key:cout<<-1;
        cout<<" ";
        (succ!=NULL)?cout<<succ->key:cout<<-1;
        cout<<endl;
        // inOrderTraversal(root);
   }
   return 0;
}
// } Driver Code Ends