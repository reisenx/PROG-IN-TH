#include<bits/stdc++.h>
using namespace std;
vector<int> paths(4);

int main()
{
    // This makes std::cin and std::cout faster
    ios_base::sync_with_stdio(false); cin.tie(0);

    // Input paths
    for(int i = 0; i < 4; i++) { cin >> paths[i]; }
    // Sort paths in ascending order
    sort(paths.begin(), paths.end());
    // width of a rectangle is a minimum value of index 2 and 3
    // height of a rectangle is a maximum value of index 0 and 1
    cout << min(paths[0], paths[1]) * min(paths[2], paths[3]);
}