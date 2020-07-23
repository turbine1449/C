#include <stdio.h>

int main(void){
    int age;
    printf("年齢：");
    scanf("%d",&age);
    if (age <= 3) {
        printf("幼児：無料\n");
    } else if (age <= 12){
            printf("子供：250円\n");
    } else {
            printf("大人：400円\n");
        }



/*
    int age;
    printf("年齢：");
    scanf("%d",&age);
    if (age <= 3) {
        printf("幼児：無料\n");
    } else {
        if (age <= 12){
            printf("子供：250円\n");
        } else {
            printf("大人：400円\n");
        }
    }


/*
    int age;
    printf("年齢：");
    scanf("%d",&age);
    if (age <= 3) printf("幼児：無料/n");
    if (age >= 4 && age <= 12) printf("子供：250円\n");
    if (age >= 13) printf("大人：400円\n");





/*
    int suuti;
    scanf("%d",&suuti);
    if (suuti == 10)
        printf("入力値は10です。\n"); 
    else 
        printf("入力値は10ではありません。");

*/


    return 0;
}

/*
メモ
条件に一致しなかった時にも文を実行させたい時、
if文と一緒に、else(エルス)文を使用する

"if (条件式) 真の場合に実行する文; else 偽の場合に実行する文 ;"

---------------
if (条件){
    実行したい文
}else {
    実行したい文
}
---------------
↑結局この書き方が見やすいので、普段からこう書こう。

*/