#include <stdio.h>

#define TARGET 3

int binarySearch(int n, int *A, int a){
  int i, p = 0, q = n - 1;

  while(p <= q){
    i = (p + q) / 2;

    if(A[i] == a){
      return i;
    }
    else if(A[i] > a){
      q = i - 1;
    }
    else if(A[i] < a){
      p = i + 1;
    }
  }

  return -1;
}

int main(){
  int n, i, A[100000], a = TARGET, k;

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

  k = binarySearch(n, A, a);

  if(0 <= k){
    printf("%dをA[%d]に発見\n", a, k);
  }
  else{
    printf("発見できず\n");
  }

  return 0;
}
