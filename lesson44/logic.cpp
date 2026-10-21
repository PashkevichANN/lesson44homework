#include "logic.h"

int calculate(int numbers[SIZE]) {
	int even = 0;
	for (int i = 0; i < SIZE; i++) {
		numbers[i] = rand();
		if (numbers[i] % 2 == 0) {
			even++;
		}
	}
	return even;
}