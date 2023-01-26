// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
     display(data,length);
     
	
} 



void insertion(int a[],int n){


}

inline void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how may pair to compare?
for(j=1;j<=n-1;j++){
    sorted=1;
    for(i=0;i<n-j;i++){
        if(a[i]>a[i+1]) {
            swap(&a[i],&a[i+1]);
            sorted=0;
        }
        
    }
    if(sorted)break;
  display(a,n);
 }
  
}




