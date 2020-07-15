#include <stdio.h>

int main(void){
    int price;
    
    printf("金額を入力してください。\n");

    scanf("%d",&price);

    printf("1割引は%d円です。\n",(int)(price * 0.9));
    printf("3割引は%d円です。\n",(int)(price * 0.7));
    printf("5割引は%d円です。\n",(int)(price * 0.5));
    printf("8割引は%d円です。\n",(int)(price * 0.2));

   
   
    /*
    int min,max,sum;

    printf("最小値と最大値を,で区切って入力してください。：");
    scanf("%d,%d",&min,&max);

    sum = (min + max) * (max-min +1) /2;

    printf("%d～%dの合計は%dです。\n",min,max,sum);
    */

    /*
    int data1,data2;
    scanf("%d%d",&data1,&data2);
    printf("%d,%d\n",data1,data2);
    */


    /*
    int data;
    scanf("%d",&data);  //入力部分
    printf("%d\n",data);
    */
    
    

    return 0;
}


/*
メモ

scanf関数
scanf("入力変換指定子",&変数名);

入力変換指定子とは、入力された数字をどのような数値に変換するかを表す文字。
printf関数で使用した出力変換指定子と、ほぼ同じように使用出来る。

# 問題児scanf
scanf関数はにゅうも所では比較的多く使われるのに、本格的な開発ではつかわれない。
一体、何が問題か。それは、"入力ミス"！

区切り記号を指定する場合に、その区切り文字を間違えると
実際に入力した数値と異なる数値でプログラムが動いてしまう。

数値を入力する指定のプログラムに文字列を打ち込んでも、
どこからやってきたかわからないランダムな数値が変数に入力されてしまう。

厄介なことに結果として変数には数値が格納されているわけなので、
入力ミスなのかどうかの判別は極めて困難。

*/