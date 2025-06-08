#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int n;
    cout << "enter n:";

    cin >> n;
    vector<string> srr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> srr[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << srr[i] << " ";
    }

    cout << endl;
    cout << "max ye rha" << endl;
    int max = stoi(srr[0]);
    int maxs = 0;
    for (int i = 1; i < n; i++)
    {
        int x = stoi(srr[i]);
        if (x > max)
        {
            max = x;
            maxs = i;
        }
    }
    cout << max << " " << maxs;
}