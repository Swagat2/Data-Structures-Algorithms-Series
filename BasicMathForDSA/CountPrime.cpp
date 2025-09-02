#include <iostream>
#include <vector>
using namespace std;

int CountPrimes(int n)
{
    if (n <= 2)
        return 0; // No primes less than 2

    vector<bool> prime(n, true); // Assume all numbers are prime
    prime[0] = prime[1] = false; // 0 and 1 are not prime

    // Only loop until sqrt(n)
    for (int i = 2; i * i < n; i++)
    {
        if (prime[i])
        {
            // Start marking from i*i
            for (int j = i * i; j < n; j += i)
            {
                prime[j] = false;
            }
        }
    }

    // Count primes
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
            count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << CountPrimes(n);
    return 0;
}
