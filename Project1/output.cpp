#include"Header.h" 

void output_mas(int size, int *mas, FILE* output) {
	for (int i = 0; i < size; i++) {
		fprintf(output, "%d ", mas[i]);
	}
}