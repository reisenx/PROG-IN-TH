#include<bits/stdc++.h>
using namespace std;
int X1,X2,S;

int main ()
{
    // This makes std::cin and std::cout faster
    ios_base::sync_with_stdio(false); cin.tie(0);

    // Input X1 and S
    cin >> X1 >> S;

    // Calculate and output X2
    // S = (X1+X2)/2
    // 2S = X1+X2
    // X2 = 2S - X1
    X2 = (2*S) - X1;
    cout << X2;
}