#include <stdio.h>
int stringLength(char *string)
{
    int count = 0;
    for(int i=0; string[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}

/* In place string reversal */
char *reverseString(int length, char *string)
{
    int last = length-1;
    for(int i=0; i<length/2; i++)
    {
        char temp = string[i];
        string[i] = string[last];
        string[last] = temp;
        last--;
    }
    return string;
}
int main()
{
    char str[] = "Hello world!";
    int length = stringLength(str);
    char *reversedString = reverseString(length, str);
    printf("%s", reversedString);
    return 0;
}
