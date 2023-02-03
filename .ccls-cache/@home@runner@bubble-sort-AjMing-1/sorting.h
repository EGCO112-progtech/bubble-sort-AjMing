// selection sort function module in C

void display(int a[], int n) {
  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
}

int Isprime(int x) {
  int i, n = 0;

  for (i = 1; i <= x; i++) {
    if (x % i == 0)
      n++;
  }
  if (n == 2)
    return 1;
  return 0;
}

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int a[], int n) {
  int i, j;

  // int m = a[0]; // minimum
  int mi = 0;

  for (j = 0; j < n - 1; j++) {
    // m = a[j];
    mi = j;
    for (i = j + 1; i < n; i++) {
      if (a[mi] > a[i]) {
        // m = a[i];
        mi = i;
      }
    }
    swap(&a[j], &a[mi]);

    display(a, n);
  }
}

void bubbleSort(int a[], int n) {

  int i, j;
  int sorted;
  // how may pair to compare?
  for (j = 1; j <= n - 1; j++) {
    sorted = 1;
    for (i = 0; i < n - j; i++) {
      if (a[i] > a[i + 1]) {
        swap(&a[i], &a[i + 1]);
        sorted = 0;
      }
      display(a, n);
    }
    // if(sorted==0)break;
  }
}
void insertionSort(int x[], int n) {

  int j, i;
  for (j = 1; j < n; j++) {
    int value = x[j];
    for (i = j-1; i >= 0; i--) {
      if (value > x[i])
        break;
      else
        x[i + 1] = x[i];
       display(x,n);
    }
    x[i + 1] = value;
       display(x,n);
     printf("\n");
  }
}