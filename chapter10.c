#include <stdio.h>

int main (void){

    int r;
    double s;

    do {
        printf("半径？：");
        scanf("%d",&r);
    }while (r < 0);

    s = r * r * 3.14;
    printf("面積は%fです。\n",s);


/*
※再入力はできているが、同じデータ入力の処理を２回書いているのが無駄
    int r;
    double s;

    printf("半径？：");
    scanf("%d",&r);

    while (r < 0){
        printf("半径？：");
        scanf("%d",&r);
    }

    s = r * r * 3.14;
    printf("面積は%fです。\n",s);




/*
※条件不一致の場合に再入力できない。
    int r;
    double s;

    printf("半径?:");
    scanf("%d",&r);
    if (r < 0){
        printf("半径は負の数になりません。");

    }else{
        s = r * r * 3.14;
        printf("面積は%fです。\n",s);

    }
    


/*
    double money = 1;
    int month = 1;

    while(money < 1000000){
        printf("%02dヶ月目：%7.0f円\n",month,money);
        money *=2;
        month++;
    }
    printf("%02dヶ月目に%7.0f円となり、100万円を超える。\n",month,money);
*/



    return 0;
}

/*
メモ

回数が分からないループの場合はwhile文が便利

-------
//構文
while (条件式) {
繰り返す文;
}
-------


while文は、繰り返す文の実行を行う前に条件式を判定する。
しかし、do～while文は、繰り返す文の実行後に条件式を判定する。
-------
//構文
do {
繰り返す文;
} while (条件式);
-------
do～while文には、1つ大きな利点がある。
それは、繰り返し文が、必ず1回は実行されるという点だ。

*/