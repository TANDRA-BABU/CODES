#include <stdio.h>

#include <string.h>

char pallindrome (const char *str)
{
    int l=0;
    int r = strlen(str)-1;
    while (l<r)
    {
        if (str[l] != str[r])
        return 0;
        l++;
        r--;
    }
    return 1;
}
int main()
{
    char str[100];
    printf("Enter the string: \n");
    scanf ("%s", str);
    if (pallindrome(str))
    {
        printf("The string \"%s\" is pallindrome", str);
    }
    else
    {
        printf("The string \"%s\" is not pallindrome", str);
        return 0;
    }
}