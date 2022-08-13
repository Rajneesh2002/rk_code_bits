// CPP program for finding max path in matrix
#include <iostream>
using namespace std;

// To calculate max path in matrix
int MaxPath(int mat[][n],int n)
{

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n; j++) {

			
			if (j > 0 && j < n - 1)
				mat[i][j] += max(mat[i - 1][j],
							max(mat[i - 1][j - 1],
							mat[i - 1][j + 1]));

			
			else if (j > 0)
				mat[i][j] += max(mat[i - 1][j],
							mat[i - 1][j - 1]);

			
			else if (j < n - 1)
				mat[i][j] += max(mat[i - 1][j],
							mat[i - 1][j + 1]);

			
		}
	}
	int res = 0;
	for (int j = 0; j < n; j++)
		res = max(mat[n-1][j], res);
	return res;
}


int main()
{
    int n; cin>>n;
	
	int mat1[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d ",&mat1[i][j]);
        }
    }
			
	printf("%d\n",MaxPath(mat1[n][n],n));
	return 0;
}
