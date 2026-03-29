#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    double result = 1.0;

    cin >> n;

    if (n >= 0)
    {
        for (int i = 0; i < n; i++)
        {
            result *= 2.0;
        }
    }
    else
    {
        for (int i = 0; i < -n; i++)
        {
            result /= 2.0;
        }
    }

    cout << fixed << setprecision(5) << result << endl;

    return 0;
}
