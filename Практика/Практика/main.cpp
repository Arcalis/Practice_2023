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
    printf("����� ����������! ������ ��������� ��������� ���������� ������� �������� �������������� �����.\n\n������� ������� ������ �������:\n");
    scanf_s("%d", &size);

    while (size <= 1)
    {
        printf("���������� ��� ���.");
        scanf_s("%d", &size);
    }
    mas = new int[size];

    while (work == true)
    {
        system("cls");
        printf("�������� ��������� ��������:\n1. �������� ������ �������.\n2. ��������� ������ ���������� �������.\n3. ������������� ������.\n");

        getchar();
        char comand[] = { getchar() };
        switch (comand[0])
        {
        case '1':
            printf(" ������� ���������� �����: ");
            scanf_s("%d", &size);

            while (size <= 1)
            {
                printf("���������� ��� ���.");
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