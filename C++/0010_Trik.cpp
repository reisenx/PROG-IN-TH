#include<bits/stdc++.h>
using namespace std;
string command;
vector<int> pos = {1,0,0};

int main()
{
    // This makes std::cin and std::cout faster
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    // Input and run command
    cin >> command;
    for(char &c: command)
    {
        if(c == 'A') swap(pos[0], pos[1]);
        else if(c == 'B') swap(pos[1], pos[2]);
        else if(c == 'C') swap(pos[0], pos[2]);
    }
    // Output
    cout << find(pos.begin(), pos.end(), 1) - pos.begin() + 1;
    return 0;
}