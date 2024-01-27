#include<bits/stdc++.h>
using namespace std;
int M,N;
int matrix_01[105][105], matrix_02[105][105], matrix_sum[105][105];

int main ()
{
    // Input row (M) and column (N)
    cin >> M >> N;

    // Input first matrix
    for(int i=1;i<=M;i++)
    {
        for(int j=1;j<=N;j++)
        {
            cin >> matrix_01[i][j];
        }
    }

    // Input second matrix
    // Calculate the sum of 2 matrix
    for(int i=1;i<=M;i++)
    {
        for(int j=1;j<=N;j++)
        {
            cin >> matrix_02[i][j];
            matrix_sum[i][j] = matrix_01[i][j] + matrix_02[i][j];
        }
    }

    // Output the sum of 2 matrix
    for(int i=1;i<=M;i++)
    {
        for(int j=1;j<=N;j++)
        {
            cout << matrix_sum[i][j] << " ";
        }
        cout << "\n";
    }

    // End of the program
    return 0;
}