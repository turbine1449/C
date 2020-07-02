#include <stdio.h>

int main(void) {
    /*
    printf("HelloWorld");
    
    return 0;
    printf("ByeWorld");//returnより後は実行されないYo
    */

   printf("Hello\n");
   printf("World\n");

   /* "\t"は頭を揃えるエスケープシーケンス */
   printf("Windows\tMicrosoft\n");
   printf("MacOS\tApple\n");

   return 0;
}

/*
自由書式のためこんな書き方もできる↓
int
main
(
    void
)
{
    return
    0
    ;
}
トークン同士をつなげて書いてはいけない
トークンごとに分解しても一応コンパイルできる。
*/
