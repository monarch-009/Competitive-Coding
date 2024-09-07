// This is the Naive Approach to Check Prime
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    if (isPrime(num))
    {
        cout << num << " is Prime Number.";
    }
    else
    {
        cout << num << " is not a Prime Number.";
    }
}