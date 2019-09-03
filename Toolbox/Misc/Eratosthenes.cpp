/**
 * To select primes,
 * the sieve of Eratosthenes algorithm
 *    T = O(NloglogN)
 */
#include <cstdio>
#include <cmath>

const int maxn = 1000001;
int prime[maxn], num = 0;
bool p[maxn] = {0};

void Find_Prime()
{
	for (int i = 2; i < maxn; i++)
		if (p[i] == false) {
			prime[num++] = i;
			for (int j = i+i; j < maxn; j += i)
				p[j] = true;
		}
}

/*
bool isPrime(int n)
{
	if (n <= 1) return false;
	int sqr = (int) sqrt(1.0 * n);
	for (int i = 2; i <= sqr; i++)
		if (n % i == 0) return false;
	return true;
}

void Find_Prime()
{
	for (int i = 1; i < maxn; i++)
		if (isPrime(i)) {
			prime[num++] = i;
			p[i] = true;
		}
}
*/

int main()
{
	Find_Prime();

	for (int i = 0; i < num; i++)
		printf("%d ", prime[i]);

	return 0;
}

