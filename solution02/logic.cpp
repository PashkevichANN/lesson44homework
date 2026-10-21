#include "logic.h"

bool determine_similarity(int numbers[SIZE]) {

	for (int i = 0;i < SIZE - 1; i+=2) {
		if (numbers[i] != numbers[i + 1]) {
			return false;
		}
		
	}
	
	return true;
}