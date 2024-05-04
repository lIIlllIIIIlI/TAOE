#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int value = 5;
    char buffer_one[8], buffer_two[8];

    strcpy(buffer_one, "one");
    strcpy(buffer_two, "two");

    printf("[BEFORE] buffer2 is in %p item is \'%s\'.\n", buffer_two, buffer_two);
    printf("[BEFORE] buffer1 is in %p item is \'%s\'.\n", buffer_one, buffer_one);
    printf("[BEFORE] item is in %p item is %d (0x%08x).\n", &value, value, value);

    printf("\n[STRCPY] %d byte cp to buffer2\n\n", strlen(argv[1]));
    strcpy(buffer_two, argv[1]);

    printf("[AFTER] buffer2 is in %p item is \'%s\'.\n", buffer_two, buffer_two);
    printf("[AFTER] buffer1 is in %p item is \'%s\'.\n", buffer_one, buffer_one);
    printf("[AFTER] item is in %p item is %d (0x%08x).\n", &value, value, value);
}
