#include "Header.h"

int main()
{
    srand(time(NULL));
    FILE* input, * output;
    int size;
    bool work = true;
    int* mas;
    int x = 0;

    input = fopen("input", "w+");
    output = fopen("output", "w+");

    setlocale(LC_ALL, "Rus");
    printf("Добро пожаловать! Данная программа выполняет сортировку массива случайно сгенерированых чисел.\n\nСначала введите размер массива:\n");
    scanf_s("%d", &size);

    while (size <= 1)
    {
        printf("Попробуйте еще раз.");
        scanf_s("%d", &size);
    }
    mas = new int[size];

    while (work == true)
    {
        system("cls");
        printf("Выберете следующее действие:\n1. Изменить размер массива.\n2. Заполнить массив случайными числами.\n3. Отсортировать массив.\n");

        getchar();
        char comand[] = { getchar() };
        switch (comand[0])
        {
        case '1':
            printf(" Введите количество чисел: ");
            scanf_s("%d", &size);

            while (size <= 1)
            {
                printf("Попробуйте еще раз.");
                scanf_s("%d", &size);
            }
            mas = new int[size];

            break;

        case '2':
            input_masize(mas, input, size);
            break; 
        case '3':
            sortid(size, mas);
            output_mas(size, mas, output);
            work = false;
            break;
        }
    }
    return 0;
}