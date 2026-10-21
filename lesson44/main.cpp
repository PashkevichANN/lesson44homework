#include "logic.h"


int main() {
	int numbers[SIZE];
	int even, odd;

	srand(time(NULL));

	even = calculate(numbers);
	odd = SIZE - even;

	cout << "Even: " << even << " , odd: " << odd;
	return 0;
}