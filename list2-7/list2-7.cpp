﻿// list2-7.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
// list2-4.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    const int STD_BMI = 22; // 標準BMI
    double height;  // 身長
    double weight;  // 体重
    double bmi;    // bmi
    double stdWeight;   // 標準体重

    //キー入力をheightに格納する
    cout << "身長(m)を入力してください";
    cin >> height;

    //キー入力をweightに格納する
    cout << "体重(kg)を入力してください";
    cin >> weight;

    // 身長と体重からBMIを産出する
    bmi = weight / height / height;

    // 標準体重を計算する
    stdWeight = STD_BMI * height * height;

    // bmiを画面に表示する
    cout << "あなたのBMIは、" << fixed << setprecision(1) << bmi << "です。" << endl;

    // 標準体重を画面に表示する
    cout << "あなたの標準体重は、" << stdWeight << "です" << endl;
    return 0;
}

