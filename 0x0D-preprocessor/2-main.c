#include <stdio.h>

/**
* main - print name of file using macro.
*Return: 0 - success.
*/
int main(void)
{
    printf("%s\n", _FILE_);
    return (0);
}
