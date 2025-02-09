#include <stdio.h>

int main(int argc, char** argv)
{
    char* first_arg; 
    int res = 0;

    /* this checks the number of arguments passed in */
    if (argc != 2) {
        printf("usage: %s <arg1>\n", argv[0]);
        return 0;
    }

    first_arg = argv[1];

    printf("My program was given two arguments: %s %s\n",
           first_arg, second_arg);

    return 0;

}