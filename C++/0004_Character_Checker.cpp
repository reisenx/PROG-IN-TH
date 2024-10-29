#include<bits/stdc++.h>
using namespace std;
string txt;

// Check if they are all uppercase
bool isUpper(const string &txt)
{
    for(char c : txt) { if(c >= 'a' && c <= 'z') return false; }
    return true;
}

// Check if they are all lowercase
bool isLower(const string &txt)
{
    for(char c : txt) { if(c >= 'A' && c <= 'Z') return false; }
    return true;
}

int main()
{
    // This makes std::cin and std::cout faster
    ios_base::sync_with_stdio(false); cin.tie(0);

    // Input text
    cin >> txt;
    // Check conditions
    if(isUpper(txt)) cout << "All Capital Letter";
    else if(isLower(txt)) cout << "All Small Letter";
    else cout << "Mix";

    return 0;
}