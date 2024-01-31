#include<bits/stdc++.h>
using namespace std;
int number[10];

int main()
{
    // Input 3 integers
    for(int i=0;i<3;i++)
    {
        cin >> number[i];
    }

    // Output
    // Maximum turn is the longest distance - 1
    cout << std::max(number[1]-number[0], number[2]-number[1]) - 1 << endl;

    // End og the program
    return 0;
}