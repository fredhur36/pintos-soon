#include <stdio.h>
#include <syscall.h>
#include <stdlib.h>
#include "userprog/syscall.h"
int main(int args, char **argv)
{
    
    int *my_argv = argv;
    if(args ==5){

        printf("%d\n", sum_of_four_integer(argv[1], argv[2], argv[3], argv[4]));
    }


    return EXIT_SUCCESS;
    
}
