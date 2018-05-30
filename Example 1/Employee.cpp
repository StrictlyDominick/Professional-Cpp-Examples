#include <iostream>
#include "Employee.h"
using namespace std;
namespace Records {
	Employee::Employee()
		: mFirstName("")
		, mLastName("")
		, mEmployeeNumber(-1)
		, mSalary(kDefaultStartingSalary)
		, mHired(false)
	{
	}

	void Employee::promote(int raiseAmount)
	{
		setSalary(getSalary() + raiseAmount);
	}
	void Employee::demote(int demeritAmount)
	{
		setSalary(getSalary() - demeritAmount);
	}
	void Employee::hire()
	{
		mHired = true;
	}
	void Employee::fire()
	{
		mHired = false;
	}
	void Employee::display() const
	{
		cout << "Employee: " << getLastName() << ", " << getFirstName() << endl;
		cout << "-------------------------" << endl;
		cout << (mHired ? "Current Employee" : "Former Employee") << endl;
		cout << "Employee Number: " << getEmployeeNumber() << endl;
		cout << "Salary: $" << getSalary() << endl;
		cout << endl;
	}
	// Getters and setters
	void Employee::setFirstName(const string& firstName)
	{
		mFirstName = firstName;
	}
	const string& Employee::getFirstName() const
	{
		return mFirstName;
	}
	// ... other getters and setters omitted for brevity
}


