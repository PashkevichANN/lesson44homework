#include "logic.h"

int main() {
	int numbers[SIZE];

	for (int i = 0;i < SIZE; i++) {
		cout << "Input a number: ";
		cin >> numbers[i];
		system("cls");
	}
	
	cout << "All numbers are "
		<< (determine_similarity(numbers) ? " the same." : " not the same.");

	return 0;
}