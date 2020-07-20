#include <stdio.h>
int main(void){

    int year,rest;
    printf("西暦を入力してください：");
    scanf("%d",&year);

    rest = year % 4;

    if (rest == 0) printf("夏季オリンピック開催年\n");
    if (rest == 2) printf("冬季オリンピック開催年\n");
    if (rest != 0 && rest != 2) printf("なんもない年\n");



    /*
    int score;
    printf("点数を入力してください:");
    scanf("%d",&score);
    if (score > 100) {
        printf("入力が100より大きいので修正します。\n");
        score = 100;
    }
    printf("点数は%d点です。\n",score);
    


    
    int score;
    printf("点数を入力してください：");
    scanf("%d",&score);
    if (score > 100) printf("入力が100より大きいので修正します。\n");
    if (score > 100) score = 100;
    printf("点数は%d点です。\n",score);



    
    int suuti;
    scanf("%d",&suuti);
    if (suuti >= 8 && suuti <= 12) printf("8～12の間です。");
    if (!(suuti >= 8 && suuti <= 12)) printf("8～12の間ではありません。");


    
    int suuti;
    scanf("%d",&suuti);
    if (suuti == 10) printf("入力値は10です。\n");
    if (suuti >  10) printf("入力値は10より大きいです。\n");
    if (suuti <  10) printf("入力値は10より小さいです。\n");
    
    int suuti;
    scanf("%d",&suuti);
    if (suuti == 10) printf("入力値は10です。\n");
    if (suuti != 10) printf("入力値は10ではありません。\n");
    
    int suuti;
    scanf("%d",&suuti);
    if (suuti == 10) printf("入力値は10です。\n");
    
    int suuti;
    scanf("%d",&suuti);
    if (suuti - 10) printf("入力された数値は10ではありません\n");
    
    int suuti = 10;
    if (suuti) printf("%d\n",suuti);
    */


    return 0;
}


/*
メモ

条件によって処理内容を変えるとき、条件による判断が必要。
コンピュータにとって条件とは数値。２つの数値の比較こそが条件になる。

if文による数値の比較は、指定された数値が０であるかそうでないかを判定する
0を偽の値、0以外を真の値と呼ぶ。

真の値：条件判断の呼び方で、負の数を含め0以外の数値の事。trueと表記することもある。

偽の値：0を意味する。falseと表記することもある。

if文では、指定された数値が真である(数値が0以外の)場合だけ
横の文を実行し、そうでない場合は、文は飛ばされて、if文の後の文を実行する。

比較用の演算子として==が使える。二つの値が等しい時に結果が真になる。

# 等値演算子
記号        真                      偽
==     ２つの値が等しい    　 ２つの値が等しくない
!=     ２つの値が等しくない　　２つの値が等しい

# 関係演算子
記号            真                      偽
<       左の値が右より小さい     左の値が右より小さくない
>       左の値が右より大きい     左の値が右より大きくない
<=      左の値が右以下          左の値が右以下ではない
>=      左の値が右以上          左の値が右以上ではない

# 論理演算子
記号    意味            真                      偽
&&      AND     右と左の条件が両方真        左右どちらかでも偽
||      OR      左右のどちらかでも真        左右が両方真
!       NOT     条件が偽                    条件が真


# ブロック文
- {}で囲むことで、複数の分をまとめる方法。




*/
