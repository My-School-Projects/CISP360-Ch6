#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

double getSales(string division_name);
void findHighest(double ne, double se, double nw, double sw);

int main()
{
	findHighest(getSales("Northeast"), getSales("Southeast"), getSales("Northwest"), getSales("Southwest"));
}

void findHighest(double ne, double se, double nw, double sw)
{
	cout << setprecision(2) << fixed;
	if (ne > se && ne > nw && ne > sw)
	{
		cout << "Northeast: $" << ne << endl;
	}
	if (se > ne && se > nw && se > sw)
	{
		cout << "Southeast: $" << se << endl;
	}
	if (nw > se && nw > ne && nw > sw)
	{
		cout << "Northwest: $" << nw << endl;
	}
	if (sw > ne && sw > nw && sw > se)
	{
		cout << "Southwest: $" << sw << endl;
	}
}

double getSales(string division_name)
{
	double figure = -1;
	while (figure < 0)
	{
		cout << "Please enter the quarterly sales for the " + division_name + " division.\n>> $";
		cin >> figure;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return figure;
}
