#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> array = {1, 2, -3, -5, -6, 0, -9, 3};
    int left = 0; // Represents the left boundary of the negative section

    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] < 0)
        {
            swap(array[i], array[left]); // Move negative number to the left boundary
            left++;
        }
    }

    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}
