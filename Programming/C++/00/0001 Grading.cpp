#include<bits/stdc++.h>
using namespace std;
int work, midterm, final, score;

int main ()
{
    // Input work, midterm and final score
    cin >> work;
    cin >> midterm;
    cin >> final;
    
    // Calculate the final score
    score = work + midterm + final;

    // Grading
    // A  80-100
    // B+ 75-79
    // B  70-74
    // C+ 65-69
    // C  60-64
    // D+ 55-59
    // D  50-54
    // F  0-49
    if(score>=80 && score<=100)
    {
        cout << "A";
    }
    else if(score>=75 && score<=79)
    {
        cout << "B+";
    }
    else if(score>=70 && score<=74)
    {
        cout << "B";
    }
    else if(score>=65 && score<=69)
    {
        cout << "C+";
    }
    else if(score>=60 && score<=64)
    {
        cout << "C";
    }
    else if(score>=55 && score<=59)
    {
        cout << "D+";
    }
    else if(score>=50 && score<=54)
    {
        cout << "D";
    }
    else
    {
        cout << "F";
    }

    //End of the program
    return 0;
}