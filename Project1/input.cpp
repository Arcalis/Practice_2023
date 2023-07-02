#include"Header.h"

void input_masize(int* mas, FILE* input, int size) {
	for (int i = 0; i < size; i++) {
		mas[i] = (rand() % 2001) - 1000;
		fprintf(input, "%d ", mas[i]);
	}
}