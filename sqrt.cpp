#include <iostream>

using namespace std;

int sqrt(int n)
{
    int start = 0;
    int end = n;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        int square = mid * mid;

        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

double morePrecission(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j <= n; j+=factor)
        {
            ans = j;
        }
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter The Number:";
    cin >> n;

    int tempSol = sqrt(n);
    double result =  morePrecission(n, 3, tempSol);

    cout<< "Square Root Of The Number Is" <<result << endl;
}