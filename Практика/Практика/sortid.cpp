#include"Header.h"

int sortid(int size, int* mas) 
{
	double start = GetTickCount();
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
	double final = GetTickCount() - start;
	system("cls");
	printf("���������� ��������� �������! ��������� ��������� � ����� output.txt\n\n���������� ������������ - %lli.\n����� ���������� ���������� - %g c.", trans, final / 1000);
	return 0;
}