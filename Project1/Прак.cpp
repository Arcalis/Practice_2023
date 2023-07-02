#include "Header.h"

int main()
{
    srand(time(NULL));
    FILE* input, * output;
    int size;
    int* mas;

    input = fopen("input", "w+");
    output = fopen("output", "w+");

    setlocale(LC_ALL, "Rus");
    printf(" Введите размер массива:\n");
    scanf_s("%d", &size);

    while (size <= 1)
    {
        printf("Попробуйте еще раз.");
        scanf_s("%d", &size);
    }
    mas = new int[size];

   
    input_masize(mas, input, size);
          
    sortid(size, mas);
    output_mas(size, mas, output);
          
    return 0;
}