#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sort(vector<int>& vec)
{
    sort(vec.begin(), vec.end());
}

int main()
{
    vector<int> vec = {5, 3, 1, 4, 2};
    sort(vec);
    return 0;
}