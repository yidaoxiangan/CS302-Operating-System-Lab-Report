#include <iostream>
#include <algorithm>

using namespace std;

int diff(int a, int b)
{
    return a > b ? a - b : b - a;
}

int main()
{

    int S, M, N;
    cin >> S >> M >> N;

    int *arr = new int[N + 1];

    int tmp = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    arr[N] = S;

    sort(arr, arr + N + 1);
    int last_num = S;
    int sum = 0;

    for (int i = 0; i < N + 1; i++)
    {
        int index_S = -1;
        for (int j = 0; j < N + 1; j++)
        {
            if (arr[j] == S)
            {
                index_S = j;
                cout << S << " ";
                for (int k = j - 1; k >= 0; k--)
                {

                    sum += diff(arr[k], last_num);
                    last_num = arr[k];
                    cout << arr[k] << " ";
                }

                break;
            }
        }

        for (int j = N; j > index_S; j--)
        {
            sum += diff(arr[j], last_num);
            last_num = arr[j];
            cout << arr[j] << " ";
        }

        if (index_S != -1)
        {
            cout << "\n"
                 << sum << endl;
            break;
        }
    }
}