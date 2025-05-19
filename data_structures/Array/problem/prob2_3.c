//Write a C program to find the frequency of each element in an array.

#include <stdio.h>

int main() {
    int arr[100],freq[100];
    int n,i,j,count;

    //input:size of array
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);

    //input:array elements
    printf("Enter %d elements:\n",n);
    for(i = 0;i < n;i++){
        scanf("%d",&arr[i]);
        freq[i] = -1; //initializing all frequencies to -1 (-1 means uncounted)
    }

    //calculating the frequencies
    for(i = 0;i < n;i++){
        count = 1;
        if(freq[i] != 0) {//Only count if not already counted
            for(j = i + 1;j < n;j++){
                if(arr[i] == arr[j]){
                    count++;
                    freq[j] = 0;// Mark as counted (0 means counted)
                }
            }
            freq[i] = count;// Store frequency
        }
    }

    //displaying frequencies
    printf("\nFrequency of each element:\n");
    for(i = 0;i < n;i++){
        if(freq[i] != 0){
            printf("%d occurs %d times\n",arr[i],freq[i]);
        }
    }

    return 0;
}


