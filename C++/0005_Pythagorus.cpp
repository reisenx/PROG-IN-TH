#include<bits/stdc++.h>
using namespace std;
double a,b,c;

int main()
{
    // This makes std::cin and std::cout faster
    ios_base::sync_with_stdio(false); cin.tie(0);

    // Input a and b
    cin >> a >> b;
    
    // Calculate c (Pythagorus Theorem)
    c = sqrt(pow(a,2) + pow(b,2));

    // Output c in 6 decimal places
    cout << fixed << setprecision(6) << c;

    // End of the program
    return 0;
}