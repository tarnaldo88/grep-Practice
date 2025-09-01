//Global Regular Expression Print
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <regex>

void search_pattern(FILE *file, const char* pattern)
{
    char line[1024];
    int line_number = 1 ;

    while(fgets(line, sizeof(line), file))
    {
        if(strstr(line, pattern))
        {
            printf("%d: %s", line_number, line);
        }
        line_number++;
    }
}

int main(int argc, char* argv[])
{
    if(argc < 3)
    {
        printf("Usage: %s <patter> <filename>\n", argv[0]);
        return 1;
    }

    FILE * file = fopen(argv[2], "r");

    if(!file)
    {
        printf("Error opening file\n");
        return 1;
    }

    printf("Simple grep (non-regex):\n");

    search_pattern(file, argv[1]);
}