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
  char *line; /*store the getline*/
  char **linecopy;
  size_t *len;
  stack_t *top; /*pointer to top stack*/
    
  // file open: FILE *fopen(const char *file_name, const char *mode_of_operation);
  FILE *file_name = fopen(argv[1], 'r+');

  // malloc: void *malloc(size_t size);
  line = (char*) malloc(sizeof(char) * 1000);

  // getline: size_t getline (char **string, size_t *n, FILE *stream);
  while(getline(&line, &len, file_name))
  {
    // token
    linecopy = token(line);
    // string compare
    if(linecopy)
    {
      string_compare(linecopy, &top);
      free(linecopy);
    }
  }

  // frees
  free(line);

  // file close
  fclose(file_name);

  return (0);
}

// ========================

 // string compare

 static instructions op_codes[] = {
   {'push', push},
   {'function', comand}
 };

/**
 * string_compare - Short description
 * @linecopy: first member
 * @stack: second member
 * Return void 
 */

 void string_compare(char **linecopy, stack_t **stack)
 {
  int index = 0;

  while (op_codes[index].opcode)
  {
   // int strcmp(const char *s1, const char *s2);
   if (strcmp(linecopy, op_codes[index].opcode) == 0)
   {
    return (op_codes[index].f)
   }
   index++;
  }
  if (!(op_codes[index].opcode))
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, token[0]);
		exit(EXIT_FAILURE);
	}
  return (NULL);
 }

// ========================

/**
 * token - Short description
 * 
 */

int token(char **line, )
{
  char token;
  // string token: char *strtok(char *restrict str, const char *restrict delim);
  token = strtok(line, '\t\r\a\n ;:');

  store = malloc((char) * 100);
}
