#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main()
{
    // This makes std::cin and std::cout faster
    ios_base::sync_with_stdio(false); cin.tie(0);

    // Input
    cin >> a >> b >> c;
    
    // Output
    // Maximum turns is the longest distance - 1
    cout << max(b-a, c-b) - 1;
    return 0;
}