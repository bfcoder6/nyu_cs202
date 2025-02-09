#include <stdio.h>

int main(int argc, char** argv)
{
    char* first_arg; 
    char* second_arg; 
    char res[6];

    /* this checks the number of arguments passed in */
    if (argc != 3) {
        printf("usage: %s <arg1> <arg2>\n", argv[0]);
        return 0;
    }

    first_arg = argv[1];
    second_arg = argv[2];

    for(int i = 0; i < 3; i++) {
        if(!first_arg[i] || !second_arg[i]) {
            printf("error: one or more arguments have fewer than 3 characters");
            return 0;
        } else {
            res[i] = first_arg[i];
            res[i + 3] = second_arg[i];
        }
    }
    printf("%s\n", res);
    return 0;
}