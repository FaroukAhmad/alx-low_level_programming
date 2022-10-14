#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
void i_print(va_list i)
{
	printf("%d", va_arg(i, int);
			}
			void c_print(va_list i)
			{
			printf("%c", va_arg(i, char);
			}
			void f_print(va_list i)
			{
			printf("%f", va_arg(i, float);
			}
			void s_print(va_list i)
			{
			if (va_arg(i, char *) == NULL)
			printf("(nil");
			else
			printf("%s", va_arg(i, char *);
			}
			typedef struct print
			char var;
