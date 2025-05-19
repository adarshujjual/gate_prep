//Write a C program to find the union of two arrays.

#include <stdio.h>

int main() {
    int a[100],b[100],unionArr[200];
    int n1,n2;
    int i,j,k = 0;
    int isDuplicate;

    //input:size and elements of first array
    printf("Enter the number of elements in the first array:");
    scanf("%d",&n1);
    printf("Enter %d elements:\n",n1);
    for(i = 0; i < n1; i++){
        scanf("%d", &a[i]);
        unionArr[k++] = a[i];   //initially adding all elements of first array to union array
    }

    //input:size and elements of second array
    printf("Enter the number of elements in the second array:");
    scanf("%d",&n2);
    printf("Enter %d elements:\n",n2);
    for(i = 0; i < n2; i++){
        scanf("%d", &b[i]);

        //checking if b[i] already exists in unionArr (the union wil have only unique elements no repetition)
        isDuplicate = 0;
        for(j = 0; j < k; j++){
            if(b[i] == unionArr[j]){
                isDuplicate = 1; //1 indicates it is duplicate i.e true
                break;
            }
        }

        //if not a duplicate,then add to unionArr
        if(!isDuplicate){
            unionArr[k++] = b[i];
        }
    }

    //printing the output union_array
    printf("\nUnion of the two arrays:\n");
    for(i = 0; i < k; i++){
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}
