#include<bits/stdc++.h>
using namespace std;
int number[15], modulo[15], modulo_count = 0;
bool IsModulo[50];
int main ()
{
    // 1.) Input 10 numbers then Modulo with 42
    // 2.) Mark that modulo as true
    for(int i=1;i<=10;i++)
    {
        cin >> number[i];
        modulo[i] = number[i] % 42;
        IsModulo[modulo[i]] = true;
    }

    // Count and output how many IsModulo boolean is true
    for (int i=0;i<42;i++)
    {
        if(IsModulo[i] == true)
        {
            modulo_count = modulo_count + 1;
        }
    }
    cout << modulo_count;

    // End of the program
    return 0;
}