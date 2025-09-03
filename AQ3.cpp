#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int n = 7;
    int missing = -1;
    for (int i = 1; i <= n + 1; i++)
    {
        bool f = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                f = true;
                break;
            }
        }
        if (!f)
        {
            missing = i;
            break;
        }
    }
    cout << missing << endl;
}