#include <iostream>


using namespace std; 
const int MATRIX_SIZE = 4; 
void displayMatrix(int mat[][MATRIX_SIZE]);
void rotateMatrix (int m[MATRIX_SIZE][MATRIX_SIZE]);
void swap(int& i, int& j);

int main() 
{
	
	int count = 0; 
	int mat[MATRIX_SIZE][MATRIX_SIZE];
	for (int i = 0; i<MATRIX_SIZE; i++)
	{
		for (int j = 0; j<MATRIX_SIZE; j++)
		{
			mat[i][j] = count++;
		}
	}

    displayMatrix(mat);
    cout<<"\n";
    rotateMatrix(mat);
	return 0; 
}

void displayMatrix(int mat[MATRIX_SIZE][MATRIX_SIZE])
{
	for (int i=0; i<MATRIX_SIZE;i++)
	{
		for (int j=0; j<MATRIX_SIZE; j++)
		{
			cout<<mat[i][j]<<" "; 
		}
		cout<<endl; 
	}
}

void rotateMatrix (int m[MATRIX_SIZE][MATRIX_SIZE])
{
	int last = MATRIX_SIZE-1;
	int level = 0; 
	int totalnumberoflevel = 1; 
	while (level < totalnumberoflevel)
	{
		for (int i =0; i<last; i++)
		{
			swap(m[level][i],m[i][last]);
			swap(m[level][i],m[last][last-i+level]);
			swap(m[level][i],m[last-i+level][level]);
		}
		++level;
		--last;
	}
	
	displayMatrix(m);
}

void swap(int& i, int& j)
{
	int temp = i;
	i = j; 
	j = temp; 
	//cout << "i=" << i << " " << "j=" << j<<endl; 
}