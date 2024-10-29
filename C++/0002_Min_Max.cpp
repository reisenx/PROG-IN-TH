#include<bits/stdc++.h>
using namespace std;
int n, minVal, maxVal;
int main()
{
    // This makes std::cin and std::cout faster
    ios_base::sync_with_stdio(false); cin.tie(0);

    // Input numbers
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        // Find minimum and maximum value;
        if(i == 0) { minVal = num; maxVal = num; }
        minVal = min(minVal, num);
        maxVal = max(maxVal, num);
    }
    // Output
    cout << minVal << endl << maxVal;
    return 0;
}