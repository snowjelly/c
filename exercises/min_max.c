#include <stdio.h>

int main(void) {
  int n1, n2, n3, n4, largest, smallest, n1small, n1large, n2small, n2large,
      n3large, n3small, n4small, n4large;
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

  int counter;

  n1small = (n1 < n2 && n1 < n3 && n1 < n4);
  n1large = (n1 > n2 && n1 > n3 && n1 > n4);

  switch (n1small) {
  case 1:
    smallest = n1;
    break;
  }

  switch (n1large) {
  case 1:
    largest = n1;
    break;
  }

  n2small = (n2 < n1 && n2 < n3 && n2 < n4);
  n2large = (n2 > n1 && n2 > n3 && n2 > n4);

  switch (n2small) {
  case 1:
    smallest = n2;
    break;
  }

  switch (n2large) {
  case 1:
    largest = n2;
    break;
  }

  n3small = (n3 < n1 && n3 < n2 && n3 < n4);
  n3large = (n3 > n1 && n3 > n2 && n3 > n4);

  switch (n3small) {
  case 1:
    smallest = n3;
    break;
  }

  switch (n3large) {
  case 1:
    largest = n3;
    break;
  }

  n4small = (n4 < n1 && n4 < n2 && n4 < n3);
  n4large = (n4 > n1 && n4 > n2 && n4 > n3);

  switch (n4small) {
  case 1:
    smallest = n4;
    break;
  }

  switch (n4large) {
  case 1:
    largest = n4;
    break;
  }

  printf("Largest: %d\n", largest);
  printf("Smallest: %d \n", smallest);
}
