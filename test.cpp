#include <iostream>
#include <vector>
using namespace std;

int findUniqueElement(vector<int> arr)
{
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{

    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: " << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];

        
    }
    int UniqueElement = findUniqueElement(arr);
    cout << "Unique element in the array is: " << UniqueElement << endl;

    return 0;
}