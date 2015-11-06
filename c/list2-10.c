//1,000までの素数を列挙する list2-9の最適化
//素数：1より大きい自然数で、1とその数自身以外のどのような自然数でも割り切れない数
//計算数14622回

#include<stdio.h>

int main(void)
{
  int i, n;
  int prime[167];                 //list2-9.cで得られた素数の数
  int num = 0;
  unsigned long counter = 0;

  prime[num++] = 2;               //2は素数
  prime[num++] = 3;               //3は素数

  for (n = 5; n <= 1000; n += 2)  //対象の数は奇数のみ、2以上の偶数は素数でないのは明らか
  {
    for (i = 1; i < num; i++)
    {
      counter++;
      if (n%prime[i] == 0)        //対象の数以下の素数で割り切れたら素数じゃない
      {
        break;
      }
    }
    if (num == i)                 //for文最後までまわれば(割り切れてない)、対象の数は素数
    {
      prime[num++] = n;           //配列に素数を追加
    }
  }

  for (int i = 0; i < num; i++)
  {
    printf("%d\n", prime[i]);
  }

  printf("除算の回数：%lu\n", counter);   //-> 14622回

  return 0;
}