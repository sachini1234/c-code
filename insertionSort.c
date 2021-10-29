#include <stdio.h>

int main()
{
  int n, array[500], a, b, x, mark = 0;

  printf("Enter number of items\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (a = 0; a < n; a++)
    scanf("%d", &array[a]);

  for (a = 1 ; a <= n - 1; a++) {
    x = array[a];

    for (b = a - 1 ; b >= 0; b--) {
      if (array[b] > x) {
        array[b+1] = array[b];
        mark = 1;
      }
      else
        break;
    }
    if (mark)
      array[b+1] = x;
  }

  printf("Sorted item list in ascending order:\n");

  for (a = 0; a <= n - 1; a++) {
    printf("%d\n", array[a]);
  }

  return 0;
}