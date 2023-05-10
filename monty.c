#include "monty.h"

/**
 * interpreter - Short description 
 * @argc: first member 
 * @argv: second member
 * Return: 0
 */

 int interpreter(int argc, char *argv[])
 {
    // variables
    char **line;
    size_t *len;
    
    // file open: FILE *fopen(const char *file_name, const char *mode_of_operation);
    FILE *file_name = fopen(argv[1], 'r+');

    // getline: size_t getline (char **string, size_t *n, FILE *stream);
    while(getline(&line, &len, file_name))
    {
      // token
    }

    // frees
    free(line)

    // file close
    fclose(file_name)
    return (0);
 }

 // string compare

 // string token