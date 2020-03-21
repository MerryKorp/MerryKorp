#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>


using namespace std;

int main()

{

	double total_Units;
	double apt_Rent, maintenance_Cost, increase_in_Rent, rent_after_Increase, total_Maintenance;
	double max_Profit, profit, income, rent;
	double n;

	total_Units = 50.0;
	increase_in_Rent = 40.0;
	maintenance_Cost = 27.0;
	apt_Rent = 600.0; // only when all units are occupied
	max_Profit = 0.0;
	n = 50.0 - total_Units;
	rent_after_Increase = apt_Rent + increase_in_Rent;

	cout << "Enter total number of units";

	cin >> total_Units;

	cout << "Enter cost in rent while all units are occupied";

	cin >> apt_Rent;

	cout << "Enter increase in rent per vacancy";

	cin >> increase_in_Rent;

	cout << "Enter the amount it costs to maintain a rented unit";

	cin >> rent_after_Increase;

	for (double units = 50.0; units > 0.0; units--, rent += increase_in_Rent)

	{

		income = total_Units * apt_Rent;

		total_Maintenance = total_Units * maintenance_Cost;

		profit = income - total_Maintenance;

		if (units == 50.0)

		{
			max_Profit = profit;
		}


		else if (profit > max_Profit)

		{
			max_Profit += profit;

			n = 50.0 - total_Units;
		}

		cout << "Max number of profit that can be made is:";

		cout << n;

		cout << "\n";

		return 0;

	}
}