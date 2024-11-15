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
    cout << "24-11-15 update sample git cherry-pick" << endl;
    sort(vec);
    return 0;
}