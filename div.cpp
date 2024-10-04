#include <iostream>
using namespace std;

int main()
{
	int N = 17;

	// Extract the last digit using N % 10
	int lastDigit = N % 10;

	// Check for last digit
	if (lastDigit == 0 || lastDigit == 5) {
		cout << N << " is divisible by 5";
	}
	else {
		cout << N << " is not divisible by 5";
	}
}
