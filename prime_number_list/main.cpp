#include <fstream>
#include <cmath>
using namespace std;

bool isPrime(unsigned);

int main()
{
	ofstream out;
	out.open("primes.txt");
	for (int i = 0; i < 100; i++)
	{
		if (isPrime(i))
			out << i << endl;
	}
	out.close();
}

bool isPrime(unsigned n)
{
	if (n == 2) return true;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}
