#include<stdio.h>

void traversal(int *Arr, int n)
{
   int i;
   printf("Array Elements:");
   for(i=0; i<n; i++) {
    printf("%d ", *(Arr+i));
   }

}
void insert(int *Arr, int *n) 
{
   int i, pos, value;
   printf("Enter the position to insert:");
   scanf("%d", &pos);
   printf("Enter the number to insert:");
   scanf("%d", &value);
   for(i=*n; i>=pos; i--) {
      *(Arr+i) = *(Arr+i-1);
   }
   *(Arr+pos-1) = value;
   (*n)++;
   printf("Element inserted successfully\n");
}
void delete(int *Arr, int *n) 
{
   int i, pos;
   printf("Enter the position to delete:");
   scanf("%d", &pos);
   for(i=pos-1; i<*n; i++) {
     *(Arr+i) = *(Arr+i+1);
   }
   (*n)--;
   printf("Element deleted successfully\n");
}
void search(int *Arr, int n) 
{
   int i, key, found=0;
   printf("Enter element to search:");
   scanf("%d", &key);
   for(i=0; i<n; i++) {
      if(*(Arr+i) == key) {
        printf("Element found at position %d\n", i+1);
        found++;
      }     
   }
   if(found == 0) {
    printf("Element not found\n");
   }
}
int main () {
    int n, Arr[100], i, ch;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the array elements:");
    for(i=0; i<n; i++) 
        scanf("%d", &Arr[i]);
    do
    {
      printf("\n---MENU---\n");
      printf("1. Traversal\n");
      printf("2. Insert\n");
      printf("3. Delete\n");
      printf("4. Search\n");
      printf("5. Exit\n");

      printf("Enter choice:\n");
      scanf("%d", &ch);

      switch(ch) {
        case 1:
          traversal(Arr, n);
          break;
        case 2:
          insert(Arr, &n);
          break;
        case 3:
           delete(Arr, &n);
           break;
        case 4:
           search(Arr, n);
           break;
        case 5:
           printf("Ended...\n");
           break;
        default:
           printf("Invalid Choice");
      }

    } while(ch != 5);

    return 0;
}