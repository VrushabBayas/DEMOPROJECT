#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 1)
    {
        printf("Please enter some argument's");
        return -1;
    }
    printf("You enterd %d arguments", argc - 1);
}