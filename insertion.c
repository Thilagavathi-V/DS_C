#include<stdio.h>

int main() {
    int i, j, n, Arr[100], key;

    printf("Enter the number of Elements:");
    scanf("%d", &n);

    printf("Enter the elemnts:");
    for(i=0; i<n; i++) {
        scanf("%d", &Arr[i]);
    }

    for(i=0; i<n; i++){
      int key = Arr[i];
      for(j=i-1; j >= 0 && Arr[j] > key; j--) {
         Arr[j+1] = Arr[j];
      }
      Arr[j+1] = key;
    }

    printf("Sorted Array:\n");
    for(i=0; i<n; i++) {
        printf("%d ", Arr[i]);
    }
    
    return 0;
}