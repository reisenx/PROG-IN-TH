#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> scores;

int main()
{
    // This makes std::cin and std::cout faster
    ios_base::sync_with_stdio(false); cin.tie(0);

    // Input score of each person
    for(int person = 1; person <= 5; person++)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int score = a + b + c + d;
        scores.push_back(make_pair(score, person));
    }
    // Sort the scores in descending order
    sort(scores.begin(), scores.end(), greater<pair<int,int>>());

    // Output a person who has maximum score
    cout << scores[0].second << " " << scores[0].first;
    return 0;
}