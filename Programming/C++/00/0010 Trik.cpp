#include<bits/stdc++.h>
using namespace std;
// Setup initial position to 1
int position = 1, length;
string order;

int main ()
{
    // Input a string and find the length of a string
    cin >> order;
    length = order.length();

    // Swap a ball
    // A: Swap position 1 and 2
    // B: Swap position 2 and 3
    // C: Swap position 1 and 3
    for(int i=0;i<length;i++)
    {
        if(order[i] == 'A')
        {
            if(position == 1)
            {
                position = 2;
            }
            else if (position == 2)
            {
                position = 1;
            }
        }
        else if (order[i] == 'B')
        {
            if(position == 2)
            {
                position = 3;
            }
            else if(position == 3)
            {
                position = 2;
            }
        }
        else if (order[i] == 'C')
        {
            if(position == 1)
            {
                position = 3;
            }
            else if(position == 3)
            {
                position = 1;
            }
        }
    }

    // Output the position
    cout << position;

    // End of the program
    return 0;
}