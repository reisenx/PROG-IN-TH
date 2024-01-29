#include<bits/stdc++.h>
using namespace std;
int number[10],A,B,C;
string order;
int main ()
{
    // Input number and string
    for(int i=0;i<3;i++)
    {
        cin >> number[i];
    }
    
    cin >> order;

    // Sorting
    if(number[0] <= number[1] && number[0] <= number[2])
    {
        A = number[0];
        if(number[1] <= number[2])
        {
            B = number[1];
            C = number[2];
        }
        else
        {
            B = number[2];
            C = number[1];
        }
    }
    else if(number[1] <= number[0] && number[1] <= number[2])
    {
        A = number[1];
        if(number[0] <= number[2])
        {
            B = number[0];
            C = number[2];
        }
        else
        {
            B = number[2];
            C = number[0];
        }
    }
    else if(number[2] <= number[0] && number[2] <= number[1])
    {
        A = number[2];
        if(number[0] <= number[1])
        {
            B = number[0];
            C = number[1];
        }
        else
        {
            B = number[1];
            C = number[0];
        }
    }

    // Output
    if(order == "ABC")
    {
        cout << A << " " << B << " " << C;
    }
    else if(order == "ACB")
    {
        cout << A << " " << C << " " << B;
    }
    else if(order == "BAC")
    {
        cout << B << " " << A << " " << C;
    }
    else if(order == "BCA")
    {
        cout << B << " " << C << " " << A;
    }
    else if(order == "CAB")
    {
        cout << C << " " << A << " " << B;
    }
    else if(order == "CBA")
    {
        cout << C << " " << B << " " << A;
    }

    // End of the program
    return 0;
}