#include <iostream>


using namespace std; 
const int N=4; 
void displayMatrix(int mat[N][N]);

void rotateMatrix (int mat[][N])
{
	for (int x = 0; x<N/2; x++)
	{
		for (int y =x; y<N-x-1;y++)
		{
			int temp = mat[x][y];

			mat[x][y] = mat[y][N-1-x]; //top right corner 
			mat[y][N-1-x] = mat[N-1-x][N-1-y];

			mat[N-1-x][N-1-x] = mat[N-1-y][x];

			mat[N-1-y][x] = temp; 
		}
	}
}

void displayMatrix(int mat[N][N])
{
	for (int i=0; i<N;i++)
	{
		for (int j=0; j<N; j++)
		{
			cout<<mat[i][j];
			cout<<"\n"; 
		}
		cout<<"\n"; 
	}
}

int main() 
{
	int mat[][N] = 
    { 
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}, 
        {13, 14, 15, 16} 
    }; 
    rotateMatrix(mat);
    displayMatrix(mat);
	return 0; 
}