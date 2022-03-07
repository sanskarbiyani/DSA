#include <iostream>
using namespace std;

int digitalRoot(int n)
{
	if (n <= 9)
		return n;
	int sum = digitalRoot(n / 10) + n % 10;
	if (sum > 9)
	{
		cout << "For " << sum << ": ";
		sum = digitalRoot(sum);
		cout << sum << "\n";
	}
	return sum;
}

int main()
{
	int n;
	cin >> n;
	cout << digitalRoot(n) << "\n";
	return 0;
}