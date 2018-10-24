//
//  main.cpp
//  jianzhipffer
//
//  Created by 刘小菊 on 2018/10/17.
//  Copyright (c) 2018年 ___ORGANIZATIONNAME___. All rights reserved.
//

/*******************************************************************
 Copyright(c) 2016, Harry He
 All rights reserved.
 
 Distributed under the BSD license.
 (See accompanying file LICENSE.txt at
 https://github.com/zhedahht/CodingInterviewChinese2/blob/master/LICENSE.txt)
 *******************************************************************/

//==================================================================
// °∂Ω£÷∏Offer°™°™√˚∆Û√Ê ‘πŸæ´Ω≤µ‰–Õ±‡≥ÃÃ‚°∑¥˙¬Î
// ◊˜’ﬂ£∫∫Œ∫£ÃŒ
//==================================================================

// √Ê ‘Ã‚27£∫∂˛≤Ê ˜µƒæµœÒ
// Ã‚ƒø£∫«ÎÕÍ≥…“ª∏ˆ∫Ø ˝£¨ ‰»Î“ª∏ˆ∂˛≤Ê ˜£¨∏√∫Ø ˝ ‰≥ˆÀ¸µƒæµœÒ°£

#include <cstdio>
#include <stack>
//2018/10/22 向量版本
#include <vector>
//必须加using namespace std;
using namespace std;
//vector<int> PrintMatrix(vector<vector<int>>matrix)
//{
//    //这句不明白
//    vector<int> res;
//    //这句不明白
//    res.clear();
//    //这句不明白
////    int rows = matrix.size();
////    int columns = matrix
//}

//2018/10/22 顺时针由外到内打印矩阵 二维数组版本
void printNumber(int number)
{
    printf("%d\t", number);
}
void PrintMatrixInCircle(int** numbers, int columns, int rows, int start)
{
    int endX = columns - 1 -start;
    int endY = rows - 1 - start;
    
    //从左到右
    for (int i = start; i <= endX ; ++ i) {
        printNumber(numbers[start][i]);
    }
    if (start < endY) {
    //从上到下
    for (int i = start + 1; i <= endY; ++ i) {
        printNumber(numbers[i][endX]);
    }
    }
    
    if (start  < endX && start< endY) {
    //从右到左
    for (int i = endX -1 ; i >= start; --i) {
        printNumber(numbers[endY][i]);
    }
    }
    if (start < endX && start < endY - 1) {
    //从下到上
    for (int i = endY -1; i >= start + 1; --i) {
        printNumber(numbers[i][start]);
    }
    }
}
void PrintMatrixClockwisely(int** numbers,int columns,int  rows)
{
    if (numbers == NULL || columns <= 0 || rows <= 0)
        return;
    int start = 0;
    while(columns >= start * 2 && rows >= start * 2)
    {
        PrintMatrixInCircle(numbers, columns, rows, start);
        ++start;
    }
  
}
void Test(int columns, int rows)
{
    printf("Test Begin: %d columns, %d rows.\n", columns, rows);
    
    if(columns < 1 || rows < 1)
        return;
    
    int** numbers = new int*[rows];
    for(int i = 0; i < rows; ++i)
    {
        numbers[i] = new int[columns];
        for(int j = 0; j < columns; ++j)
        {
            numbers[i][j] = i * columns + j + 1;
        }
    }
    
    PrintMatrixClockwisely(numbers, columns, rows);
    printf("\n");
    
    for(int i = 0; i < rows; ++i)
        delete[] (int*)numbers[i];
    
    delete[] numbers;
}

int main(int argc, char* argv[])
{
    using namespace std;
    /*
     1
     */
    Test(1, 1);
    
    /*
     1    2
     3    4
     */
    Test(2, 2);
    
    /*
     1    2    3    4
     5    6    7    8
     9    10   11   12
     13   14   15   16
     */
    Test(4, 4);
    
    /*
     1    2    3    4    5
     6    7    8    9    10
     11   12   13   14   15
     16   17   18   19   20
     21   22   23   24   25
     */
    Test(5, 5);
    
    /*
     1
     2
     3
     4
     5
     */
    Test(1, 5);
    
    /*
     1    2
     3    4
     5    6
     7    8
     9    10
     */
    Test(2, 5);
    
    /*
     1    2    3
     4    5    6
     7    8    9
     10   11   12
     13   14   15
     */
    Test(3, 5);
    
    /*
     1    2    3    4
     5    6    7    8
     9    10   11   12
     13   14   15   16
     17   18   19   20
     */
    Test(4, 5);
    
    /*
     1    2    3    4    5
     */
    Test(5, 1);
    
    /*
     1    2    3    4    5
     6    7    8    9    10
     */
    Test(5, 2);
    
    /*
     1    2    3    4    5
     6    7    8    9    10
     11   12   13   14    15
     */
    Test(5, 3);
    
    /*
     1    2    3    4    5
     6    7    8    9    10
     11   12   13   14   15
     16   17   18   19   20
     */
    Test(5, 4);

    return 0;
    
}


