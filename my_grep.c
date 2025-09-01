//Global Regular Expression Print
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <regex>

int main(int argc, char* argv[])
{
    if(argc < 3)
    {
        printf("Usage: %s <patter> <filename>\n", argv[0]);
        return 1;
    }

    FILE * file = fopen(argv[2], "r");

}