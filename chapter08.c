#include <stdio.h>

int main(void){

    int no;
    scanf("%d",&no);
    switch (no){
        case 1:
        case 3:
        case 4:
            printf("男性\n");
            break;
        case 2:
            printf("女性\n");
            break;
        default:
            printf("Unknown");
            break;
    }

/*
    int no;
    scanf("%d",&no);
    switch (no){
        case 1:
            printf("野比のび太\n");
            break;
        case 2:
            printf("源静香\n");
            break;
        case 3:
            printf("剛田武\n");
            break;
        case 4:
            printf("骨川スネ夫\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }


/*
    int no;
    scanf("%d",&no);
    if (no == 1){
        printf("野比のび太\n");
    } else if (no == 2){
        printf("源静香\n");
    } else if (no == 3){
        printf("剛田武\n");
    } else if (no == 4){
        printf("骨川スネ夫\n");
    } else {
        printf("Unknown\n");
    }

/*
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



番号による場合分け
switch 文～caseを使うと美しい。
switch文は、指定された条件式の値と同じ値のcaseへジャンプする。
ジャンプ先ではcase以下の文を実行し、break(ブレイク)文を見つけたら、
switch文の後で囲っている {} の中から抜け出す。
当てはまらなかった場合の処理はdefaultを使用して記述する。

caseは、複数を連続させて使うことが可能。
case自体には、switch文でジャンプする場所を示す意味しか無いため、
caseを複数つなげても、実行内容には影響がない。
caseの条件として使えるのは整数値のみ。
つまり、switch文で指定した変数とcaseの整数値の比較しかできない。
変数や実数、条件式は使えないため、判断力は弱い。


*/