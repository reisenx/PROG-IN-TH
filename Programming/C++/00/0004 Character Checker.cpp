#include<bits/stdc++.h>
using namespace std;
int length;
string text;
bool isUpper = true, isLower = true;

int main ()
{
    // Input a string and find a length of the string
    cin >> text;
    length = text.length();
    
    // Check if the string is all uppercase
    for(int i=0;i<length;i++)
    {
        if(text[i]>='A' && text[i]<='Z')
        {
            isUpper = true;
        }
        else
        {
            isUpper = false;
            break;
        }
    }

    // Check if the string is all lowercase
    for(int i=0;i<length;i++)
    {
        if(text[i]>='a' && text[i]<='z')
        {
            isLower = true;
        }
        else
        {
            isLower = false;
            break;
        }
    }

    // Output the results
    if(isUpper == true)
    {
        cout << "All Capital Letter";
    }
    else if(isLower == true)
    {
        cout << "All Small Letter";
    }
    else if(isUpper == false && isLower == false)
    {
        cout << "Mix";
    }

    // End of the program
    return 0;
}