#include"Header.h"

void sortid(int size, int* mas) {

	int save;
	for (int exit = 1;exit < size; exit++) {
		for (int r = 0; r < size - exit; r++) {
			if (mas[r] > mas[r + 1]) {
				save = mas[r];
				mas[r] = mas[r + 1];
				mas[r + 1] = save;
			}	
		}
	}
}