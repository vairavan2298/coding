#include<bits/stdc++.h> 

using namespace std; 

/* A binary tree node has data, 
pointer to left child and 
a pointer to right child */
struct Node{
	int data;
	Node *left, *right; 
};

//a funtion o create new node
Node *newNode(int data){
	Node *node = (Node*)malloc(sizeof(Node));
	node ->data = data;
	node ->left = node ->right = NULL;
	return (node);
}

Node *insertElement(int arr[],Node *root, int i,int n){
	if(i<n){
		Node *temp = newNode(arr[i]);
		root = temp;
		
	    //insert left child
	    root ->left = insertElement(arr,root->left,2*i+1,n);
	    
	     //insert right child
	    root ->right = insertElement(arr,root->right,2*i+2,n);
	}
	return root;
}

void inOrder(Node * root){
	if(root != NULL){
		inOrder(root->left);
		cout<<root ->data <<" ";
		inOrder(root ->right);
	}
}

void leftViewUntil(Node *root,int level,int *max_level){
	if(root == NULL)
		return;
	if(*max_level <level){
		cout<<root->data << "\t";
		*max_level = level;
	}
	leftViewUntil(root ->left,level+1,max_level);
	leftViewUntil(root ->right,level+1,max_level);
}
void leftView (Node *root){
	int max_level =0;
	leftViewUntil(root, 1 , &max_level);
}

int isBSTUtil(Node* node, int min, int max); 

/* Returns true if the given 
tree is a binary search tree 
(efficient version). */
int isBST(Node* node) 
{ 
	return(isBSTUtil(node, INT_MIN, INT_MAX)); 
} 

/* Returns true if the given 
tree is a BST and its values 
are >= min and <= max. */
int isBSTUtil(Node* node, int min, int max) 
{ 
	/* an empty tree is BST */
	if (node==NULL) 
		return 1; 
			
	/* false if this node violates 
	the min/max constraint */
	if (node->data < min || node->data > max) 
		return 0; 
	
	/* otherwise check the subtrees recursively, 
	tightening the min or max constraint */
	return
		isBSTUtil(node->left, min, node->data-1) && // Allow only distinct values 
		isBSTUtil(node->right, node->data+1, max); // Allow only distinct values 
}

int maxDepth(Node *node){
	if(node ==NULL)
		return 0;
	else{
		int ldepth = maxDepth(node ->left);
		int rdepth = maxDepth(node ->right);
		
		if(ldepth >rdepth)
			return ldepth+1;
		else
			return rdepth+1;
	}
}

//to find the maximum path of the given tree

int maxPathUtil(Node *node, int &res){
	if(node ==NULL){
		return 0;
	}
	else{
		int leftChild = maxPathUtil(node ->left,res);
		int rightChild = maxPathUtil(node ->right,res);
		
		int maxSingle = max(max(leftChild,rightChild)+node->data,node->data);
		int maxTop = max(maxSingle,leftChild+rightChild+node->data);
		
		res = max(res,maxTop);
		return maxSingle;
	}
}

int maxPathSum(Node *node){
	int res = INT_MIN;
	
	maxPathUtil(node,res);
	return res;
}



/* Driver code*/
int main() 
{ int n,arr[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	Node* root = insertElement(arr,root,0,n);
	
	cout<<"the inorder of given tree is:";
	inOrder(root);//to print elements in inorder traveral
	cout<<"\n";

	
	if(isBST(root)) {
		cout<<"the given tree Is BST"; 
		cout<<endl;
	}
		
		
	else
		cout<<"The given tree is Not a BST \n"; 
	
	cout<<"the left view of given tree is:";
	leftView(root); // to print left view of a tree	"
	cout<<"\nthe depth f the given tree is:";
	cout<<maxDepth(root);
	cout<<"the MAXIMUM path sum of the given tree is:";
	cout<<maxPathSum(root);
	return 0; 
} 

