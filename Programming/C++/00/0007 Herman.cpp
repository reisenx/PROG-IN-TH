#include<bits/stdc++.h>
using namespace std;
int R;
double Euclidean, Taxicab;

int main ()
{
    // Input radius (R)
    cin >> R;

    // Calculate and output Euclidean geometry (pi*R^2)
    // Calculate and output Taxicab geometry (2*(R^2))
    Euclidean = M_PI * R * R;
    Taxicab = 2 * R * R;

    // Output in 6 decimal places
    cout << fixed << setprecision(6) << Euclidean << endl;
    cout << fixed << setprecision(6) << Taxicab << endl;

    // End of the program
    return 0;
}