#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s1 = "AABCD";
    string s2 = "CDAA";
    for (int i = 0; i < s1.size(); i++)
    {
        int j = 0;
        int s2_size = s2.size();
        int s1_size = s1.size();
        if (s2[j] == s1[i])
        {
            while (j < s2_size && (s1[(i + j) % s1_size] == s2[j]))
                j++;
            if (j == s2_size)
            {
                // indicates completely equals.
                cout << "success " << endl;
            }
        }
    }
    cout << "over" << endl;
}