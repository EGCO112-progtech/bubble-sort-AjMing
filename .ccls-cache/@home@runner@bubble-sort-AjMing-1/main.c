
#include <stdio.h>
#include <stdlib.h>

#include "sorting.h"

int main(int argc,char **argv) {
    int *a;//[N]={3,2,6,7,3,1};
    int n=argc-1;
    a=(int*)malloc(sizeof(int)*n);
  int i,j,new_number;
    for(i=0;i<n;i++){
        a[i]=atoi(argv[i+1]);
    }
 display(a,n);
  bubbleSort(a,n);
   //insertion(a,N);

  // selectionSort(a,N);
   display(a,n);
 return 0;
}


