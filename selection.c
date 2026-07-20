#include<stdio.h>

int main() {

    int i, j, n, Arr[100];

    printf("Enter the number of Elements:");
    scanf("%d", &n);

    printf("Enter the elements:");
    for(i=0; i<n; i++) {
      scanf("%d", &Arr[i]);
    }

    for(i=0; i<n; i++) {
        int min = i;
        for(j=i+1; j<n; j++){
          if(Arr[j] < Arr[min])
             min = j;
        }
        int temp = Arr[min];
        Arr[min] = Arr[i];
        Arr[i] = temp;
    }

    printf("Sorted Array:\n");
    for(i=0; i<n; i++) {
       printf("%d ", Arr[i]); 
    }
    
    return 0;
}