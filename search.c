#include<stdio.h>
#include<string.h>

void linear_no() {
    int n, i, found=0;
    int Arr[100], key;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the numbers in sorted order:");
    for(i=0; i<n; i++)
     scanf("%d", &Arr[i]);
    printf("Enter the number to search:");
    scanf("%d", &key);
    for(i=0; i<n; i++)  {
      if (Arr[i] == key) {
         printf("Number found at position %d", i+1);
         found = 1;
         break;
        }
   }
   if(found == 0)
    printf("Number not found");
}

void binary_no() {
    int n, i, found=0, low, high, mid;
    int Arr[100], key;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the numbers in sorted order:");
    for(i=0; i<n; i++)
     scanf("%d", &Arr[i]);
    printf("Enter the number to search:");
    scanf("%d", &key);
    low = 0;
    high = n-1; 
    while(low <= high) {
        mid = (low + high)/2;
        
        if (mid == key) {
            printf("Number found at position %d", mid+1);
            found = 1;
            break;
        }
        else if(key < mid)
          high = mid - 1;
        else
          low = mid + 1;
    }
    if(found == 0)
       printf("Number not found");

}

void linear_str() {
   int n, i, found=0;
   char names[10][40], key[30];
   printf("Enter the number of names:");
   scanf("%d", &n);
   printf("Enter the names in alphabetical order:");
   for(i=0; i<n; i++)
     scanf("%s", names[i]);
    printf("Enter the name to search:");
   scanf("%s", key);
   for(i=0; i<n; i++)  {
    if (strcmp(names[i], key) == 0) {
        printf("Name found at position %d", i+1);
        found = 1;
        break;
      }
   }
   if(found == 0)
    printf("Name not found");
}

void binary_str() {
    int n, i, found=0, low, high, mid, cmp;
    char names[10][30], key[30];
    printf("Enter the number of names:");
    scanf("%d", &n);
    printf("Enter the names in alphabetical order:");
    for(i=0; i<n; i++)
     scanf("%s", names[i]);
    printf("Enter the name to search:");
    scanf("%s", key);
    low = 0;
    high = n-1; 
    while(low <= high) {
        mid = (low + high)/2;
        cmp = strcmp(key, names[mid]);
        if (cmp == 0) {
            printf("Name found at position %d", mid+1);
            found = 1;
            break;
        }
        else if(cmp < 0)
          high = mid - 1;
        else
          low = mid + 1;
    }
    if(found == 0)
       printf("Name not found");
}

int main() {
  int choice;
  do {
       printf("\n----MENU---\n");
       printf("1. Linear Search in Numbers\n");
       printf("2. Binary Search in Numbers\n");
       printf("3. Linear Search in Strings\n");
       printf("4. Binary Search in Strings\n");
       printf("5. End\n");
       printf("Enter your choice:");
       scanf("%d", &choice);
       switch(choice)  
       {
          case 1:
            linear_no();
            break;
          case 2:   
            binary_no();
            break;
          case 3:    
            linear_str();
            break;
          case 4:
            binary_str();
            break;
          case 5:
            printf("Ended...");
            break;
          default:
            printf("Invalid Choice"); 
        }

    }while(choice != 5);
  
    return 0;

}
  
