#include <stdio.h>

int main(void){

    int min,max,sum;

    printf("最小値と最大値を,で区切って入力してください。：");
    scanf("%d,%d",&min,&max);

    sum = (min + max) * (max-min +1) /2;

    printf("%d～%dの合計は%dです。\n",min,max,sum);

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

*/