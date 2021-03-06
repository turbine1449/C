#include <stdio.h>
int calc(int);
int main(void){

    int value,num;
    scanf("%d",&num);
    value = calc(num);
    
    switch (value)
    {
    case 0:
        printf("夏季オリンピック開催");
        break;
    
    case 1:
        printf("冬季オリンピック開催");
        break;

    default:
        printf("なし");
        break;
    }
    
    return 0;

}

int calc(int year){
    int flag;
    
    if (year % 2 == 0){
        if (year % 4 == 0){
            flag = 0;
        }else{
            flag = 1;
        }

    }else{
        flag = 2;
    }

    return flag;
}

/*
 メモ

一度作ったプログラムをもう一度使いたい場合の方法

# 再利用
以前に作成したプログラムを使うことで手間を省くこと。

# 部品化
単独の機能を持つ小さなプログラムを作り、
それを組み合わせることで大きなプログラムを作る方法。

ソースコードを上から読んでいくC言語の性質上、main関数の後に関数を宣言
した場合、コンパイラが関数の存在を知らないため、main関数の中で自作関数を使えない。

解決法の１つは、main関数の前に自作関数を宣言すること。
この場合、関数が複数ある場合にmain関数がソースコードの後ろにずれていくため、望ましくない。

もう1つの解決法は、プログラムに使われる関数の一覧を先頭に作成する事だ。
この場合、前述したような問題を回避できる。

関数名、関数の型、引数の型、の3つを書いておく事で一覧を作成できる。
この関数の一覧の書き方をプロトタイプ宣言という。



 */