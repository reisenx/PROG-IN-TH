#include<bits/stdc++.h>
using namespace std;
int A = 0, B = 0, G = 0, maxScore, n;
string sol;

// Patterns = "ABC"
void adrian(const string &sol, int &score, const int &i)
{
    string check = "ABC";
    if(sol[i] == check[i%3]) score++;
}

// Patterns = "BABC"
void bruno(const string &sol, int &score, const int &i)
{
    string check = "BABC";
    if(sol[i] == check[i%4]) score++;
}

// Patterns = "CCAABB"
void goran(const string &sol, int &score, const int &i)
{
    string check = "CCAABB";
    if(sol[i] == check[i%6]) score++;
}

int main()
{
    // This makes std::cin and std::cout faster
    ios_base::sync_with_stdio(false); cin.tie(0);

    // Input
    cin >> n >> sol;
    // Count a score
    for(int i = 0; i < n; i++)
    {
        adrian(sol, A, i);
        bruno(sol, B, i);
        goran(sol, G, i);
    }
    // Output maximum score
    maxScore = max(A,max(B,G));
    cout << maxScore << endl;
    // Output name
    if(A == maxScore) cout << "Adrian" << endl;
    if(B == maxScore) cout << "Bruno" << endl;
    if(G == maxScore) cout << "Goran" << endl;
}