#include<bits/stdc++.h>
using namespace std;
int N, number[1005];
int maximum = -2000000001, minimum = 2000000001;
int main ()
{
    // Input the number of data lines
    cin >> N;

    // Input N numbers and put them in the array
    for(int i=1;i<=N;i++)
    {
        cin >> number[i];
        if(number[i] > maximum)
        {
            maximum = number[i];
        }
        if(number[i] < minimum)
        {
            minimum = number[i];
        }
    }

    // Output the minimum and maximum value
    cout << minimum << "\n";
    cout << maximum;

    // End of the program
    return 0;
}