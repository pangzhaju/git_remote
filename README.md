# 剑指offer

##  10/20 顺时针由内到外打印矩阵

### 找规律

* 在逻辑上一般把二维数组看成是一个具有行和列的矩阵
* 指针作为参数传递的时候，指针本身是值传递
* 一级指针作为参数传递无法修改原理指针指向的值
* 如果你想要修改的是指针，那就需要传入指向指针的指针了
* 在函数外部定义一个指针p,在函数内给指针赋值，函数结束后对指针p生效，那么我们就需要二级指针。

* 假设矩阵行数是rows,列数是columns

​             打印第一圈左上角坐标是(1,1)

​                     第二圈的左上角坐标是(2,2)

​            左上角的坐标中行标和列标总是相同的，于是可以在矩阵中选取左上角(start,start)的一圈最为我们分析的目标。

​           对于一个5*5矩阵而言，最后一圈只有一个数字。对于一个6x6的矩阵而言，最后一圈有4个数字。

​          循环继续的条件是columns>startXx*2,并且rows>startY*x2。所以可以用如下的循环打印矩阵。

          ```
void PrintMatrixClockwisely(int **numbers, int columns, int rows)
{
    if(numbers == NULL || columns <= 0 || rows <=0)
      return;
    int start = 0;
    while(columns > start*2 && rows > start *2)
    {
        PrintMatrixInCircle(numbers, columns, rows, start);
        ++ satrt;
    }
}
          ```

​        接着考虑如何打印一圈的功能，即如何实现PrintMatrixInCircle

​        我们可以把打印一圈分为四步:第一步从左到右打印一行

​                                                             第二步从上到下打印一行

​                                                             第三步从右到左打印一行

​                                                             第四步从下到上大印一行

​        每一步我们根据起始坐标和终止坐标用一个循环就能打印出一行或者一列

​        不过值得注意的是，最后一圈有可能退化成只有一行，或一列，甚至只有一个数字，因此打印这样的一圈就不再需要四步。

​        因此我们要仔细分析打印时没一行的前提条件。第一步总是需要的，因为打印一圈至少有一步。如果只有一行，那么就不需要第二步了。

​       也就是说需要第二步的前提条件是终止行号大于起始行号。

​       需要第三步的打印的条件是圈内至少有两行两列，也就是说出了要求终止行号大于起始行号之外，还要求终止列号大于起始列号。

​      同理，需要打印第四步的前提条件是至少有三行两列，因此要求终止行号比起始行号至少大于2，同时终止列号大于起始列号。

​      通过上述分析，我们就可以写出如下代码。

​     void PrintMatrixInCircle(int** numbers, int columns, int rows, int start)

{   

​     int endX  =  columns - 1 - start;

​    int endY  = rows - 1 - start;

   //从左到右打印一行

   for(int i = start; i < endX; i++)

   {

​    int  number = number[][][[start]][][i];

​    printNumber(number)

​    }

//从上倒下打印一行

if(start < endY)

}

``` flow
st=>start: 开始
e=>end: 结束
io_rows_columns=>inputoutput: 输入行数rows,列数columns
op1=>operation: 操作
op2=>operation: 操作2
st->io_rows_columns->e
```

