#include <iostream>
#include <limits>
#include <random>
using namespace std;

bool coinToss(default_random_engine&);

int main()
{
	random_device rd;
	default_random_engine rng(rd());

	int tosses;
	cout << "How many times would you like to toss the coin?\n>> ";
	cin >> tosses;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "How many times would you like to toss the coin?\n>> ";
		cin >> tosses;
	}

	for (int i = 0; i < tosses; i++)
	{
		if (coinToss(rng))
			cout << "Heads" << endl;
		else
			cout << "Tails" << endl;
	}
}

bool coinToss(default_random_engine& rng)
{
	static uniform_int_distribution<> dis(1, 2);

	return dis(rng) == 1;
}
