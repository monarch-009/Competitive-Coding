// This is the Naive Approach to Check Prime
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    // Check divisibility from 2 to √n
    // Here is the only diffrence from naive method which make change in TC From O(n) to o(sqrt(n));

    // This Both work same
    //  for (int i = 2; i * i <= n; i++)
    for (int i = 2; i <= sqrt(n); i++) // sqrt is function in cmath library
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