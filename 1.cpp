#include<iostream>
using namespace std;

int main()
{
	const int N = 2;
	int a, b, sum;
	double	avg;
	a = 4, b = 8;

	sum = a + b;
	avg = sum/N;
	
	cout << "The sum of two numbers are:" << sum << endl;
	cout << "The average of two numbers are:" << avg << endl;

	return 0;
}