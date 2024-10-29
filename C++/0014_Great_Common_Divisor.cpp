#include<bits/stdc++.h>
using namespace std;
int a,b;
int main()
{
    // This makes std::cin and std::cout faster
    ios_base::sync_with_stdio(false); cin.tie(0);

    // Input numbers
    cin >> a >> b;
    // Output
    cout << __gcd(a,b);
}