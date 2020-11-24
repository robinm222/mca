#include <stdio.h>
int main()
{
    int n1;
    char str[15];
    printf("Enter your name: ");
    scanf("%s", str);
    printf("Enter your age: ");
    scanf("%d", &n1);
    
   if (n1 >= 0)
      printf(" %str are eligible for voting");

  else
      printf(" %str You are not eligible for voting");

    return 0;
}
