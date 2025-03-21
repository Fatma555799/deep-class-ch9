#include<iostream>
#include<cmath>
using namespace std;
class  SavingsAccount
{
public:
	static void modifyInterestRate(double newval) { annulInterestRate = newval; }
	SavingsAccount(double s) :savingsBalance(s) {};
	void caluclatemonthlyinterest() { savingsBalance += (savingsBalance * annulInterestRate / 12.0);  cout << savingsBalance<<endl; }

private:
	static double annulInterestRate;
	double savingsBalance;
};
double SavingsAccount::annulInterestRate = 0.0;