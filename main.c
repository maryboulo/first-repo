#include <stdio.h>
#include <stdlib.h>

void selection_sort(int*,int);
int main()
{    int n;
    int arr[4] = {55,4,2,0};
    for(n=0;n<4;n++){
        printf("%d ",arr[n]);
    }
    printf("\n\n");
    selection_sort(arr,4);
    for(n=0;n<4;n++){
        printf("%d ",arr[n]);
    }

}

void selection_sort(int*p,int size){

    int i,j,temp;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(p[j]<p[i]){
                temp = p[j];
                p[j] = p[i];
                p[i] = temp;

            }
        }
    }
}


