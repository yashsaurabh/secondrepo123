#include <stdio.h>
#define MAX 16

int main(void) {
   int i, n, arr[MAX];
   printf("Enter the total number of elements: ");
   scanf("%d", &n);

   printf("Enter the elements\n");

   for (i = 0; i < n; ++i) scanf("%d", &arr[i]);
   printf("Array has following elements\n");
   for (i = 0; i < n; ++i) printf("|%d| ", arr[i]);
   
   printf("\n");
   return 0;
}
