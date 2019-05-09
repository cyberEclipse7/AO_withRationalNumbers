#include "Rational.h"

int main()
{
	Rational rOne, rTwo;
	Rational rSum, rSub, rMul, rDiv;

	cout << "Enter the nominator and denominator of the first rational number: ";
	cin >> rOne;

	cout << "Enter the nominator and denominator of the second rational number: ";
	cin >> rTwo;

	cout << "The first rational number is: ";
	cout << rOne << endl;

	cout << "The second rational number is: ";
	cout << rTwo << endl;

	rSum = rOne + rTwo;
	cout << "The sum of the two rational numbers " << rOne
		 << " and " << rTwo << " is: " << rSum << endl;

	rMul = rOne * rTwo;
	cout << "The multiplication of the two rational numbers " << rOne
		 << " and " << rTwo << " is: " << rMul << endl;

	rDiv = rOne / rTwo;
	cout << "The division of the two rational numbers " << rOne
		 << " and " << rTwo << " is: " << rDiv << endl;

	cout << "The pre-increment operator of the rational number ";
	cout << rOne;
	cout << " is: " << ++rOne << endl;

	cout << "The post-increment operator of the rational number ";
	cout << rTwo;
	cout << " is: " << rTwo++ << endl;

	cout << "The rational number after the post-increment operator is: "
		 << rTwo << endl;

	if(rOne == rTwo)
		cout << "Using the == operator, the two rationals are equal" << endl;
	else
		cout << "Using the == operator, the two rationals are not equal" << endl;

	return 0;
}
