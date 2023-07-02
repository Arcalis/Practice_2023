#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include<iostream>


int main()
{
    srand(time(NULL));
    FILE* input, * output;
    int size;
    int* mas;

    input = fopen("input", "w+");
    output = fopen("output", "w+");

    setlocale(LC_ALL, "Rus");
    printf(" ¬ведите размер массива:\n");
    scanf_s("%d", &size);
    mas = new int[size];

    for (int i = 0; i < size; i++) {
        mas[i] = (rand() % 2001) - 1000;
        fprintf(input, "%d ", mas[i]);
    }

    for (int i = 0; i < size; i++) {
        fprintf(output, "%d ", mas[i]);
    }


    return 0;
}
