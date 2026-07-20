#include<stdio.h>

int main() {
    int i, j, n, Arr[100], swap, temp;

    printf("Enter the number of Elements:");
    scanf("%d", &n);

    printf("Enter the elements:");
    for(i=0; i<n; i++) {
        scanf("%d", &Arr[i]);
    }
    
    for(i=0; i<n; i++) {
        swap = 0;
        for(j=0; j<n-i-1; j++) {
            if(Arr[j] > Arr[j+1]) {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
                swap = 1;
            }
        }
        if (swap == 0 )
           break;
    }

    printf("Sorted Array:");
    for(i=0; i<n; i++)
      printf("%d ", Arr[i]);

    return 0;

}

