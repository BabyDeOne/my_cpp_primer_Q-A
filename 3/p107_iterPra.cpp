#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s("hello world!");
    if (s.begin() != s.end())
    {
        auto it = s.begin();
        *it = toupper(*it);
        cout << *it << endl;
    }

    cout << s << endl;
}