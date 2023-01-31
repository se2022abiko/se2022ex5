#include <stdio.h>
  
int main(void)
 {
  int i;
 
  /* 自然数 */
  int num;
 
  /* 総和 */
  int sum = 0;
 
  /* 自然数を入力 */
  printf("自然数を入力してください = ");
  scanf("%d", &num);
 
    for(i=1;i<=num;++i){
      sum = sum + i;
    }
    /* 計算した総和を出力 */
    printf("総和 = %d\n", sum);
 
  return 0;
}