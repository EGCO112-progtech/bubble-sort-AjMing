// selection sort function module in C

void display(int a[],int n){
    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

int Isprime(int x){
   int i,n=0;
  
    for(i=1;i<=x;i++){
       if(x%i==0) n++;
    }
  if(n==2) return 1;
  return 0;
  
}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	for (i = 0; i < length - 1; i++) 
	{ 
	   /* find the minimum */ 
	   mi = i; 
	   for (j = i+1; j < length; j++) 
	   { 
	      if (data[j] < data[mi]) { mi = j; } 
	   } 
	   swap(&data[i],&data[mi]);
	} 

     
	
} 



void insertion(int a[],int n){


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
      display(a,n);
    }
    //if(sorted==0)break;

 }
  
}




