#include<bits/stdc++.h>
using namespace std;
string encoded, decoded;
bool isVowel(const char x)
{
    return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u');
}

int main()
{
    // This makes std::cin and std::cout faster
    ios_base::sync_with_stdio(false); cin.tie(0);

    // Input encoded text (use getline() because a text can contained spaces)
    getline(cin, encoded);
    // If the length less than 3, so there are no encoding
    // Example: 'e' --> 'epe' (when encoded, the length is at least 3)
    if(encoded.size() < 3) decoded = encoded;
    else
    {
        // find a substring in pattern [vowel] + [p] + [vowel]
        int i = 0;
        while(i < encoded.size() - 3)
        {
            if(isVowel(encoded[i]) && encoded[i+1] == 'p' && isVowel(encoded[i+2]))
            {
                decoded.push_back(encoded[i]);
                i += 3;
            }
            else
            {
                decoded.push_back(encoded[i]);
                i += 1;
            }
        }
    }
    // Output
    cout << decoded;
    return 0;
}