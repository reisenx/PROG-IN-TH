#include<bits/stdc++.h>
using namespace std;
unordered_set<int> uniqueModulo;

int main()
{
    // This makes std::cin and std::cout faster
    ios_base::sync_with_stdio(false); cin.tie(0);

    // Input numbers
    for(int i = 0; i < 10; i++)
    {
        int num;
        cin >> num;
        uniqueModulo.insert(num%42);
    }
    // Output numbers of unique modulo
    cout << uniqueModulo.size();
}