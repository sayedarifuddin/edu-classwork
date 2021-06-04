#include <stdio.h>

int main()

{
    char ch;

    printf("PLEASE ENTER ANY CHARACTER: ");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("'%c' is NOT a DIGIT.", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is a DIGIT.", ch);
    }
    else
    {
        printf("'%c' is NOT a DIGIT.", ch);
    }

    return 0;
}
