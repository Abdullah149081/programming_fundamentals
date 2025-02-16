#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string str, word, mx_word;
        getline(cin, str);

        map<string, int> mp; // key , value
        int mx_count = 0;

        stringstream ss(str);
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > mx_count)
            {
                mx_count = mp[word];
                mx_word = word;
            }
        }
        cout << mx_word << " " << mx_count << endl;
    }

    return 0;
}