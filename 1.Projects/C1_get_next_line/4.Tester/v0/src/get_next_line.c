#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 42  // You can adjust this

char *get_next_line(int fd) {
  static char buffer[BUFFER_SIZE + 1];
  static int buffer_index = 0;
  static int bytes_read = 0;
  char *line = NULL;
  int line_index = 0;

  while (1) {
    // If we've reached the end of the buffer, read more data
    if (buffer_index >= bytes_read) {
      bytes_read = read(fd, buffer, BUFFER_SIZE);
      buffer_index = 0;

      // If we can't read any more data, we're done
      if (bytes_read <= 0) {
        return line;
      }
    }

    // If we find a newline character, we have a complete line
    if (buffer[buffer_index] == '\n') {
      line = realloc(line, line_index + 1); // +1 for null terminator
      line[line_index] = '\0';
      buffer_index++;
      return line;
    }

    // Otherwise, append the current character to the line
    line = realloc(line, line_index + 2); // +2 for the char and null terminator
    line[line_index] = buffer[buffer_index];
    line_index++;
    buffer_index++;
  }
}