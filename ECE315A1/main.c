/**
 * By Thomas Lorincz (1461567)
 */

#include <stdio.h>

void *question7(int type, void *arg1, void *arg2, void *arg3) {
  if (arg1 == NULL || arg2 == NULL || arg3 == NULL) {
    return NULL;
  }

  switch (type) {
    case 1: {
      char a = *(char *)arg1;
      char b = *(char *)arg2;
      char c = *(char *)arg3;

      if ((b <= a && a <= c) || (c <= a && a <= b)) {
        return arg1;
      } else if ((a <= b && b <= c) || (c <= b && b <= a)) {
        return arg2;
      } else {
        return arg3;
      }
    }
    case 2: {
      int a = *(int *)arg1;
      int b = *(int *)arg2;
      int c = *(int *)arg3;

      if ((b <= a && a <= c) || (c <= a && a <= b)) {
        return arg1;
      } else if ((a <= b && b <= c) || (c <= b && b <= a)) {
        return arg2;
      } else {
        return arg3;
      }
    }
    case 3: {
      double a = *(double *)arg1;
      double b = *(double *)arg2;
      double c = *(double *)arg3;

      if ((b <= a && a <= c) || (c <= a && a <= b)) {
        return arg1;
      } else if ((a <= b && b <= c) || (c <= b && b <= a)) {
        return arg2;
      } else {
        return arg3;
      }
    }
    default: {
      return NULL;
    }
  }
}

int main() {
  {
    char arg1 = 'c';
    char arg2 = 'b';
    char arg3 = 'a';
    printf("arg1: %c arg2: %c arg3 %c\n", arg1, arg2, arg3);

    char answer = *((char *)question7(1, (void *)&arg1, (void *)&arg2, (void *)&arg3));
    printf("Middle char: %c\n", answer);
  }

  {
    int arg1 = 2;
    int arg2 = 1;
    int arg3 = 3;
    printf("arg1: %i arg2: %i arg3 %i\n", arg1, arg2, arg3);

    int answer = *((int *)question7(2, (void *)&arg1, (void *)&arg2, (void *)&arg3));
    printf("Middle int: %i\n", answer);
  }

  {
    double arg1 = 2.0;
    double arg2 = 2.0;
    double arg3 = 3.0;
    printf("arg1: %f arg2: %f arg3 %f\n", arg1, arg2, arg3);

    double answer = *((double *)question7(3, (void *)&arg1, (void *)&arg2, (void *)&arg3));
    printf("Middle double: %f\n", answer);
  }

  return 0;
}