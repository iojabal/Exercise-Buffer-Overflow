
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define BUFLEN  300

void overflow(const char *src)
{
  char buf[BUFLEN];
  strcpy(&buf[0], src);
}

int main(int argc, char **argv)
{
  void *system_fn = system;
  (void)system_fn;

  if (argc > 1) {
      overflow(argv[1]);
  } else {
    fprintf(stderr, "arg1 missing\n");
    return(1);
  }

  return (0);
}
