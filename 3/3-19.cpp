#include <vector>
#include <iostream>

using namespace std;

// list three ways to define a vector and give it then elements, each
// with value 42. Indicate whether there is a preferred way to do so and why.

int main()
{
    vector<int> vec1(10, 42);
    for (int i : vec1)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> vec2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    for (int i : vec2)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> vec3;
    for (int i = 0; i != 10; i++)
    {
        vec3.push_back(42);
    }
    for (int i : vec3)
    {
        cout << i << " ";
    }
    cout << endl;
}