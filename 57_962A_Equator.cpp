#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        vector<int> arr(n);

        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        long long targetSum = (sum + 1) / 2; // Calculate the target sum

        long long prefixSum = 0;
        int day = 0;

        for (int i = 0; i < n; i++)
        {
            prefixSum += arr[i];

            if (prefixSum >= targetSum)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}
