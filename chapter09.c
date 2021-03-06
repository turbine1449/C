#include <stdio.h>

int main(void){

    int x,y;

    for(x=1;x<=9;x++){
        for(y=1;y<=9;y++){
            printf("%2d ×%2d =%2d ",x,y,x*y);
        }
        printf("\n");
    }



/*
    int i;
    for(i =1;i <= 10;i++){
        printf("%d\n",i);
        if (i == 3) break;

    }


/*
    int i;
    for (i =1; i <= 10;i++){
        printf("%02d回目\n",i);
        
    }
*/

    return 0;
}



/*
メモ

回数が決まっている繰り返しはfor文を使用する。

----------------
//構文
int i;
for (i = 1;i <= 繰り返し回数;i++) {
繰り返す文;
}
----------------
この i は整数型の変数であり、繰り返しの回数を数えるために使われる。
この i は、for文を使う前に宣言しておく必要がある。

このとき使用する変数を、カウント変数と呼ぶことがある。
カウント変数は i でなくても、何でも良いのだが、
C言語では、慣習的に i を使用する人が多いようだ。

--------------------------------
//ループ動作の仕組み
for (初期化;条件式;更新) {
繰り返す文;
}
--------------------------------

初期化とは、カウント変数の初期化を行うための文。
ここに書かれた式は、最初に1回だけ実行される。

条件式とは、ループの終了条件を設定するための文。
ここに書かれた式の値が真の間は、繰り返す文を実行し続ける。

更新とは、カウント変数の更新を行うための文。
ここに書かれた式は、繰り返しを行う文を実行した後に実行される。

for文に何も条件を付けないで実行することもできる。
その場合は無限ループ状態になる。
実は無限ループは多く使われているテクニックである。
例えば、メモ帳などのアプリケーションでは、
キーの入力があったら、それを表示するという処理を、
ユーザーが×ボタンを押して終了させるまでは永遠に繰り返している。
つまり、これまでに作ってきたプログラムと違い、
メモ帳のプログラムは勝手に終わることがない。

break文：
for文で条件が満たされなくても処理を強制的に終わらせることができる。

*/