#include <stdio.h>

int main(void) {
  int gs_prefix, group_id, publisher_code, item_num, check_d;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gs_prefix, &group_id, &publisher_code, &item_num, &check_d);

  printf("GS1 prefix: %d\n", gs_prefix);
  printf("Group identifier: %d\n", group_id);
  printf("Publisher code: %d\n", publisher_code);
  printf("Item number: %d\n", item_num);
  printf("Check digit: %d\n", check_d);
}
