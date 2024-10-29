#include<bits/stdc++.h>
using namespace std;
int row,col;
vector<vector<int>> mat01, mat02;
int main()
{
    // This makes std::cin and std::cout faster
    ios_base::sync_with_stdio(false); cin.tie(0);

    // Input matrices
    cin >> row >> col;
    for(int i = 0; i < row; i++)
    {
        vector<int> temp(col);
        for(int j = 0; j < col; j++) { cin >> temp[j]; }
        mat01.push_back(temp);
    }
    for(int i = 0; i < row; i++)
    {
        vector<int> temp(col);
        for(int j = 0; j < col; j++) { cin >> temp[j]; }
        mat02.push_back(temp);
    }
    // Output sum matrix
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << mat01[i][j] + mat02[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}