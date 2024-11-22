#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(void) 
{
  const char *filename = "corrupted_file.txt";
  int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
  if (fd == -1) {
    perror("open");
    exit(1);
  }

  // Write some valid data
  const char *valid_data = "This is some valid text.\nThis is another line.\n";
  write(fd, valid_data, strlen(valid_data));

  // Write some invalid/corrupted data (e.g., binary data)
  char invalid_data[] = {0x01, 0x02, 0x03, 0x04, 0x05, 0xFF, 0xF0, 0x00};
  write(fd, invalid_data, sizeof(invalid_data));

  // Write more valid data
  const char *more_valid_data = "This is after the corrupted data.\n";
  write(fd, more_valid_data, strlen(more_valid_data));

  close(fd);
  return 0;
}