#include<bits/stdc++.h>
using namespace std;
string pattern;
vector<int> nums(3); 
int main()
{
    // This makes std::cin and std::cout faster
    ios_base::sync_with_stdio(false); cin.tie(0);

    // Input numbers and sort them
    for(int i = 0; i < 3; i++) { cin >> nums[i]; }
    sort(nums.begin(), nums.end());
    
    // Input patterns and output number
    cin >> pattern;
    for(char &c: pattern)
    {
        if(c == 'A') cout << nums[0] << " ";
        if(c == 'B') cout << nums[1] << " ";
        if(c == 'C') cout << nums[2] << " ";
    }

    return 0;
}