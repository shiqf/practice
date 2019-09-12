#include <iostream>
#include <limits.h>

using namespace std;

int main(void)
{
    cout << "max int " << INT_MAX << endl;
    int sum = 0;
    int temp;

    while (cin >> temp) {
        sum += temp;
    }

    cout << "the sum is " << sum << endl;

    return 0;
}
