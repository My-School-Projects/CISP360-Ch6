#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

float calculateRetail(float, float);
float inputFloat(string);

int main()
{
	float wholesale, markup;

	wholesale = inputFloat("Please enter the wholesale price \n>> $");

	markup = inputFloat("Please enter the markup\n>> %");

	float retail = calculateRetail(wholesale, markup);

	cout << "The retail price is $" << setprecision(2) << fixed << retail << endl;
}

float calculateRetail(float wholesale, float markup)
{
	markup /= 100;

	return wholesale * (1 + markup);
}

float inputFloat(string prompt)
{
	float f = -1;
	while (f < 0)
	{
		cout << prompt;
		cin >> f;
	}
	return f;
}
