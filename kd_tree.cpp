#include <iostream>

using namespace std; 


const int k = 2; 

struct KD_tree_node
{
	int point[k];
	KD_tree_node *left, *right; 
}; 


struct KD_tree_node * first_node(int arr[])
{
	struct  KD_tree_node* temp = new KD_tree_node; 
	for(int i = 0; i<k; i++){
		temp -> point[i] = arr[i];
	}
	temp->left = temp->right=NULL; 
	return temp; 
}

KD_tree_node* insert_helper(KD_tree_node *root, int point[], unsigned depth)
{
	if(root == NULL)
	{
		return first_node(point);
	}

	unsigned layer = depth%k; 
	if(point[layer] < (root->point[layer]))
		root->left = insert_helper(root->left, point, depth+1);
	else 
		root->right = insert_helper(root->right, point, depth+1);

	cout<<"Root == " << *(root->right->point) << endl; 
	//cout<<"Root == " << (root->right->point) << endl;
	
	return root; 
}

KD_tree_node* insert(KD_tree_node *root, int point[])
{
	//cout<<"Root == " << *(root->right) << endl; 
	return insert_helper(root, point,0);
}



int main() 
{
	struct KD_tree_node *root = NULL; 
	int points [][k] = {{3,6},{17,15},{13,15},{6,12},{9,1},{2,7},{10,19}};

	int number_of_points = sizeof(points)/sizeof(points[0]);

	for (int i = 0; i < number_of_points; i++)
	{
		root = insert(root, points[i]);
		

	}

}