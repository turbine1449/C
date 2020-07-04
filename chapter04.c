#include <stdio.h>

int main(void){
    /*
    printf("%d+",100);
    printf("%d=",200);
    printf("%d\n",300);
    */
   //printf("%d",100+200);
   /*
   printf("%d\n",10 + 3);
   printf("%d\n",10 - 3);
   printf("%d\n",10 * 3);
   printf("%d\n",10 / 3);
   printf("%d\n",10 % 3);
   */
  printf("%d\n", (1+100)*100/2);


    return 0;


}

/*
メモ書き
"aaa"ダブルクォーテーションで囲まれた部分は文字列リテラルと呼ぶ

printfはあくまでも文字列を表示する関数のため、数値を表示するには
出力変換指定子を使用する。(%d...etc)
*/