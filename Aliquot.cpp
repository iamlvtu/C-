//  判断能否被357整除
// 【问题描述】
//  给定一个整数，判断它能否被3，5，7整除，并输出以下信息:
//  1、能同时被3，5，7整除(直接输出357，每个数中间一个空格);
//  2、只能被其中两个数整除(输出两个数，小的在前，大的在后。例如:35或者37或者57中间用空格分隔);
//  3、只能被其中一个数整除(输出这个除数)
//  4、不能被任何数整除，输出小写字符'n'，不包括单引号。输入:输入一行，包括一个整数。
//  输出:输出一行，按照描述要求给出整数被3，5，7整除的情况。
// 【样例输入】105
// 【样例输出】3 5 7

#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    cin>>a;
    if (a % 3 == 0)
        cout<<"3 ";
    if (a % 5 == 0)
        cout<<"5 ";
    if (a % 7 == 0)
        cout<<"7 ";
    if (a % 3 != 0 && a % 5 != 0 && a % 7 != 0) 
        cout<<"n";
    return 0;
}
