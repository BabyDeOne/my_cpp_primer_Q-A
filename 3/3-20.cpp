#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> ivec;
    int i, sum;
    while (cin >> i)
    {
        ivec.push_back(i);
    }
    cout << "content of voctor: " << endl;
    for (int i : ivec)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "sum of each pair of adjacent elements: " << endl;
    for (decltype(ivec.size()) a = 0; a < ivec.size(); ++a)
    {
        decltype(ivec.size()) b = a + 1;
        if (a < ivec.size() - 1)
        {
            sum = ivec[a] + ivec[b];
            cout << sum << " ";
        }
    }
    cout << endl;
}