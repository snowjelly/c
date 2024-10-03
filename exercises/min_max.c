#include <stdio.h>

int main(void) {
  int n1, n2, n3, n4, largest, smallest, n1small, n1large, n2small, n2large;
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

  int counter;

  // if false == 1
  // if true == 2;
  n1small = (n1 < n2 == 1 && n3 < n4 == 1 && n1 < n3 == 1) + 1;
  // if false == 3
  // if true == 4
  n1large = (n1 > n2 == 1 && n3 > n4 == 1 && n1 > n3 == 1) + 3;

  
  // if false == 5
  // if true == 6
  n2small = (n2 < n1 == 1 && n3 < n4 == 1 && n2 < n3 == 1) + 5;
  // if false == 7
  // if true == 8
  n2large = (n2 > n1 == 1 && n3 > n4 == 1 && n2 > n3 == 1) + 7;

  switch(n1small) {
    case 2: smallest = n1;
  }

  switch(n2small) {
    case 6: smallest = n2;
  }
  


  printf("Largest: %d\n", largest);
  printf("Smallest: %d \n", smallest);
}
