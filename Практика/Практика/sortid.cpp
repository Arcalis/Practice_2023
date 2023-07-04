#include"Header.h"

int sortid(int size, int* mas) {
	int loop = 0;
	long long int trans = 0;
	int save;
	for (int exit = 1;exit < size; exit++) {
		for (int r = 0; r < size - exit; r++) {
			if (mas[r] > mas[r + 1]) {
				save = mas[r];
				mas[r] = mas[r + 1];
				mas[r + 1] = save;
				trans++;
			}	
		}
	}
	return loop, trans;
}