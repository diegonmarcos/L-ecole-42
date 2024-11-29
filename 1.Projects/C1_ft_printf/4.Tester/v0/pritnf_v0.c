#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdint.h>
#include "inc/libft.h"

int ft_printf(const char *format, ...) {
  va_list args;
  va_start(args, format);

  int count = 0;
  for (int i = 0; format[i] != '\0'; i++) {
    if (format[i] == '%') {
      i++;
      switch (format[i]) {
        case 'd':;{
  			int num = va_arg(args, int);
 			char buffer[20]; // Assuming int won't exceed 20 digits
 			int len = snprintf(buffer, 20, "%d", num); // Convert int to string ft_itoa(num, buffer, 10);
//			int len = ft_itoa(buffer);
 			write(1, buffer, len);
 			count += len;
 			break;
		}
		case 'x':;{
			unsigned int num = va_arg(args, unsigned int);
			char buffer[20]; // Assuming int won't exceed 20 digits
			int len = snprintf(buffer, 20, "%x", num); // Convert int to string ft_itoa(num, buffer, 10);
			write(1, buffer, len);
			count += len;
			break;
		}
		case 'c':;{
			char c = va_arg(args, int);
			write(1, &c, 1);
			count++;
			break;
		}
		case 'f':;{
			double num = va_arg(args, double);
			char buffer[20]; // Assuming int won't exceed 20 digits
			int len = snprintf(buffer, 20, "%f", num); // Convert int to string ft_itoa(num, buffer, 10);
			write(1, buffer, len);
          count += len;
          break;
        }
        case 's':;{
        	char *str = va_arg(args, char *);
        	write(1, str, strlen(str));
        	count += strlen(str);
        	break;
        }
        // Add more cases for other format specifiers like 'c', 'f', 'x', etc.
        default:
          write(1, &format[i], 1);
          count++;
      }
    } else {
      write(1, &format[i], 1);
      count++;
    }
  }

  va_end(args);
  return count;
}

int main(void) 
{
  char str[] = "Moulinette";
  int age = 42;
  ft_printf("Hello, %s! You are %d years old.\n", str, age);
  return 0;
}