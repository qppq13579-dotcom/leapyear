#include <stdio.h>

int main(void)
{
    int year;
    int leapyear;

    printf("연도를 입력하세요: ");
    scanf_s("%d", &year);

    leapyear = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

    if (leapyear)
    {
        printf("윤년입니다.\n");
    }
    else
    {
        printf("평년입니다.\n");
    }

    return 0;
}