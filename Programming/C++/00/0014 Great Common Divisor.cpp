#include<bits/stdc++.h>
using namespace std;
int number[10];

int main ()
{
    // Input 2 number
    for(int i=0;i<=1;i++)
    {
        cin >> number[i];
    }

    // Output GCD
    cout << __gcd(number[0],number[1]) << endl;

    // End of the program
    return 0;
}