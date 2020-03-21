//Learning_source: Tutorialspoint 
/********************************************
Example: 
Input: arr[] = {1, 2, 3, 4, 5, 6, 6, 6, 6, 6}
Output: Root of the following tree
                   1      root -------level 0 
                  / \
   2(level)+1    2   3    2(level+2)--level 1 
                / \ / \
   2(level)+1  4  5 6  6  2(level+2)--level 2
              / \ /
            6  6 6        
*******************Algorithm*****************

If Root is NULL 
	then create_root_node 
return 

if Root node exists then 
	compare the data with node.data 

	while until insertion position is located 

	if data is greater than node.data 
		goto right subtree 
	else 
		goto left subtree 

	endwhile 
	insert data 
end if 

*********************************************/
#include <iostream>
#include <queue>

//-------------------------------------------
struct Node{
	int data; 
	Node* left, *right; 
};

Node* newNode(int data) 
{  
    Node* node = (Node*)malloc(sizeof(Node)); 
    node->data = data; 
    node->left = node->right = NULL; 
    return (node); 
} 

Node* insertLevelOrder(int arr[], Node* root, 
                       int i, int n) 
{ 
    // Base case for recursion 
    if (i < n) 
    { 

        Node* temp = newNode(arr[i]); 
        root = temp; 
        std::cout << "root " << root->data << std::endl;
  
        // insert left child 
        root->left = insertLevelOrder(arr, 
                   root->left, 2 * i + 1, n); 
        //std::cout << "root->left " << root->data << std::endl; 
  
        // insert right child 
        root->right = insertLevelOrder(arr, 
                  root->right, 2 * i + 2, n); 
        //std::cout << "root->right " << root->data << std::endl;
    } 
   
    return root; 
} 
void printInOrderFashion(Node* root)
{
	if (root == NULL)
	{
		return; 
	}
	std::queue <Node*> Q; 
	Q.push(root);
	while (!Q.empty())
	{
		Node* current = Q.front(); 
		Q.pop(); 
		std::cout << current->data<< " "; 
		if(current->left != NULL) Q.push(current->left);
		if(current->right != NULL) Q.push(current->right);
	}
}
//--------------------------------------------
int main() 
{ 
	void printInOrderFashion( Node* root);
    int arr[] = { 1, 2, 3, 4, 5,6}; 
    int n = sizeof(arr)/sizeof(arr[0]);  
    Node* root = NULL; 
    root = insertLevelOrder(arr, root, 0, n); 
    printInOrderFashion(root);

    std::cout<<std::endl; 
    /********Example ****************/
    int firstValueToBePushed = 1;

    std::queue<int *> CheckoutLine;

    CheckoutLine.push(new int(firstValueToBePushed));
    //CheckoutLine.push(&(firstValueToBePushed));

    std::cout << *CheckoutLine.front() << std::endl;

    return 0; 
   
} 
//--------------------------------------------