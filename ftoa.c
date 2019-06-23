#include<stdio.h>
#include<math.h>

void reverse(char *str, int len)
{
    int i=0, j=len-1, temp;
    while (i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++; j--;
    }
}

int intToStr(int x, char str[], int d)
{
    int i = 0;

    while (x)
    {
        str[i++] = (x%10) + '0';
        x = x/10;
    }
    while (i < d)
        str[i++] = '0';
    reverse(str, i);
    str[i] = '\0';

    return i;
}

void ftoa(float n, char *res, int afterpoint)
{
    int ipart = (int)n;
    float fpart = n - (float)ipart;
    int i = intToStr(ipart, res, 12);

    if (afterpoint != 0)
    {
        res[i] = '.';
        fpart = fpart * pow(10, afterpoint);
        intToStr((int)fpart, res + i + 1, afterpoint);
    }
}

int main()
{
    char res[100];
    double n = 123456.123456;
    ftoa(n, res, 6);
    printf("\n\"%s\"\n", res);
    printf("libc:%f\n", 123456.123456);
    return 0;
}
