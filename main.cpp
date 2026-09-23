#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	cout << "CAMPUS PACKAGE PICKUP\n"
		<< "----------------------\n\n";

	// map container - package available for pickup
	// student name is key

	map<string, string> packages;

	packages["Mike"] = "UPS";
	packages["Joel"] = "FedEx";
	packages["Grace"] = "USPS";
	packages["Emma"] = "UPS";

	cout << "PACKAGES AVAILABLE\n"
		<< "--------------------\n";

	for (string carrier : carrier)
	{
		cout << carrier << endl
	}

	for (pair<string, string> package : packages)
	{
		cout << package.first << " - " << package.second << endl;
	}

	set<string> carriers;
	carriers.insert(package.second);

	cout << "\nDELIVERY CARRIERS\n"
                 << "---------------------\n"


	for (string carrier : carriers)
	{
		cout << carrier << endl;
	}

	queue<string> pickupLine;

	pickupLine.push("Mike");
	pickupLine.push("Grace");
	pickupLine.push("Joel");

	//adfmdgfsdfhgf

	vector<string> pickuphistory;

	cout << "asdfasdfasdfasdf";

	while (!pickupLine.empty())
	{
		string student = pickupLine.front();
		cout << "HELPINGNNNNNNN" + student;
		//ASDFSADFDSFDSA

		auto package = packages.find();

		if (package != packages.end())
		{
			cout << "Package was delivered by " << package->second << endl;

			pickupHistory.push_back(student);

			packages.erase(package);

			cout << "Pickup complete!" << endl << endl;
		}
		else
		{
			cout << "No package found for " << student << endl;
		}

		pickupLine.pop(); //remove student from the front of the queue

		if (!pickupLine.empty())
		{
			cout << "Next Student: " << pickupLine.front() << endl;
 		}
	}

	//display
	cout << "label";

	for (int i = 0; i < pickupHistory.size(); i++)
	{
		cout << (i + 1) << ") " << pickupHistory[i] << endl;
	}

	cout << "asdfsadf";

	for (pair<string, string> package : packages)
	{
		cout << package.first << " - " << package.second << endl;
	}

	return 0;
}
