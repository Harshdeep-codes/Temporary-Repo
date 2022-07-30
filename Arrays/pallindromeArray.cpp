#include <iostream>
using namespace std;
int pallindromeArray(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            return -1;
        }
    }
        return 1;
}
        int main()
        {
            int arr[] = {2, 1, 2, 5, 2, 1, 2};
            int n = 7;
            cout << pallindromeArray(arr, n);
            return 0;
        }