#include <stdio.h>

int main(void){
    
    int left;
    int right;
    left = 10;
    right = 3;

    printf("%d\n",left + right);
    printf("%d\n",left - right);
    printf("%d\n",left * right);
    printf("%d\n",left / right);
    printf("%d\n",left % right);




    /*
    int value;  //変数宣言
    value = 10; //代入
    */




    return 0;
}


/*
メモ
変数名の決まり
１．半角アルファベット、半角英数、半角_を使うことができる
２．１文字目に数字は使えない
３．あらかじめ決められた予約後も使用することができない。

※変数の宣言は関数の先頭でないとエラーが起きていた。
※最近のC言語では先頭でなくてもエラーにならないらしい

演算子
+=  変数の値との加算を変数に代入
-=  変数の値との減算を変数に代入
*=  変数の値との乗算を変数に代入
/=  変数の値との除算を変数に代入
%=  変数の値との余算を変数に代入

++　インクリメント
--  デクリメント

*/