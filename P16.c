#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch='\0';

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isalnum(ch))
        printf("%c is an alphanumeric character.\n", ch);
    else
        printf("%c is not an alphanumeric character.\n", ch);
}
