#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<vector<int>> v1{{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
    vector<vector<int>> v2;
    int k = 0;

    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = i + 1; j < v1.size(); j++)
        {
            vector<int> temp = v1[j];
            reverse(temp.begin(), temp.end());

            if (v1[i] == temp)
            {
                v2.push_back(v1[j]);
                k++;
            }
        }
    }

    for (int i = 0; i < v2.size(); i++)
    {
        for (int j = 0; j < v2[i].size(); j++)
        {
            cout << v2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
