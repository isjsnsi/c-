#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//enum D 
//{
//	e,
//	d,
//	s,
//
//
//
//};
//int main()
//{
//	//int b = 1;
//	//while ((b <= 100))
//	//	b = b + 1;
//	//	printf("d/n",b);
//	printf("abdcdk/0");
//
//
//
//
//
//
//	return 0;
//
//}
//%d对应打印整形
//%c对应字符
//%s打印字符串
//%f打印float类型
//%lf对应double
//\xdd对应十六进制
//\ddd对应八进制
//int main()
//{
//	int imput = 0;
//	printf("%s\n", "\x52");
//	printf("要学习编程吗？(0/1)\n");
//	scanf("%d", &imput);//赋值imput，不用在转义符号后加转行符
//	if (imput == 1)
//	{
//		printf("学会\n");
//	}
//	else
//	{
//		printf("一事无成\n");
//	}
//	
//	return 0;
//}
//while循环练习
//int main()
//{
//	int line = 0;//定义变量line的数据类型与初始赋值
//	printf("练习代码\n");
//	while (line < 20000)//满足括号内条件时进行循环，不满足时结束循环跳到下一个函数
//	{
//		printf("继续练习");
//		printf("%d\n", line);//此时的line作为一个变量出现而不单是一个字符，因此不需要打双引号
//	    line++;//++表示在原来的基础上+1
//	}
//	if (line = 20000)
//	{
//		printf("保研\n");
//	}
//	else
//	{
//		printf("菜就多练\n");
//	}
//
//	return 0;
//}
//函数：
//求任意两个整数的和
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);//scanf函数的转义字符间不加，
//	int sum = Add(a, b);//此处的Add与外函数Add相关联，优点是可以使主函数更加精简
//	printf("sum=%d\n", sum);//双引号内的sum作为字符串存在而不是变量
//
//
//
//
//
//	return 0;
//}
//int Add(int x,int y)//主函数与外函数就类似于代工厂和本部的关系，外函数负责部件的合成，主函数作为最后的总装部分
//{
//	int z = 0;
//	int z = x + y;
//	return (z);//int是函数的返回类型
//
//
//
//}
//数组：一组相同类型元素的集合
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	//arr为数组名称，int为数组元素类型，[10]代表元素个数，{ }写出具体元素
//	//{ }内元素拥有下标，第一个元素下标为0，依次后推
//	printf("%d\n", arr[8]);
//	//arr[8]表示arr这个数组的下标为8的元素
//
//	return 0;
//
//
//
//}
//int main()
//{  
//	int a, b, c;
//	scanf("%d,%d,%d", &a, &b,&c);
//	int max = Max(a, b, c);
//	printf("最大值为%d\n", max);
//	
//	return 0;
//}
//int Max(int x, int y, int z)
//{
//	int m=x;
//	if (y>x)
//	{
//		m = y;
//		}
//	if (z > x)
//	{
//		m = z;
//	}
//
//
//	return m;
//}
//



//int main()
//{
//	int a, b, c,x,x1,x2;
//	scanf("%d,%d,%d",&a,&b,&c);
//	if (b ==0 &&a== 0&&c>0)
//	{
//		x = sqrt(c/a);
//
//	}
//	else
//	{
//		if (a == 0)
//		{
//			x = -c / b;
//		}
//		else
//		{
//			int d = b * b - 4 * a * c;
//			if (d < 0)
//			{
//				printf("该方程无实数根\n");
//			}
//			else
//			{
//				if (d== 0)
//				{
//					x = -b / (2 * a) + sqrt(d) / (2 * a);
//				}
//				else
//					x1 = -b / (2 * a) + sqrt(d) / (2 * a);
//				x2 = -b / (2 * a) - sqrt(d) / (2 * a);
//				printf("%d,%d", x1, x2);
//			}
//		}
//	}
//
//	return 0;
//}


#include <math.h>

//int main() {
//    int a, b, c;
//    double x1, x2, d;  // 使用double提高精度
//
//    // 修正scanf语法错误
//    printf("请输入a, b, c的值（用空格分隔）: ");
//    if (scanf("%d %d %d", &a, &b, &c) != 3) {
//        printf("输入格式错误！\n");
//        return 1;
//    }
//
//    // 检查a是否为0
//    if (a == 0) {
//        // 一元一次方程 bx + c = 0
//        if (b == 0) {
//            if (c == 0) {
//                printf("方程有无数解\n");
//            }
//            else {
//                printf("方程无解\n");
//            }
//        }
//        else {
//            x1 = (double)(-c) / b;
//            printf("这是一元一次方程，解为: x = %.2f\n", x1);
//        }
//    }
//    else {
//        // 一元二次方程 ax? + bx + c = 0
//        d = b * b - 4 * a * c;  // 判别式
//
//        if (d < 0) {
//            printf("该方程无实数根\n");
//        }
//        else if (d == 0) {
//            // 修正：重根公式应该是 -b/(2a)
//            x1 = (double)(-b) / (2 * a);
//            printf("方程有重根: x = %.2f\n", x1);
//        }
//        else {
//            // 修正：求根公式应该是 (-b ± sqrt(d)) / (2a)
//            x1 = (double)(-b + sqrt(d)) / (2 * a);
//            x2 = (double)(-b - sqrt(d)) / (2 * a);
//            printf("方程有两个实数根: x1 = %.2f, x2 = %.2f\n", x1, x2);
//        }
//    }
//
//    return 0;
//}
//操作符：
//！ 逻辑范操作符，单目：!=相当于不等于
//& 取地址 
//sizeof 操作数的长度，单目，可操作变量或者类型也行：sizeof（a） sizeof（int）
//		 也可接数组或数组内元素，结果是数组的长度或该元素的长度；int arr[10]={0}
//++/-- 表示加或减1，如i++等同于i=i+1，先使用再加1；++i也表示i=i+1，但先加1再使用。--也类似
// * 间接取地址符
// （）强行类型转换：int a=(int) 3.14=3
// 
// 关系操作符：
// >= 大于等于
// <= 小于等于
// != 不等于
// == 等于；注：“=”是赋值而不是等于
// 
// 逻辑关系符
// && 表示逻辑与 也就是并且 数学上的交集 同时满足
// || 表示逻辑或 也就是或者 数学上的并集 有一个满足即可
// 
// 条件操作符
// exp1 ? exp2 : exp3 三目操作符
// 含义：若exp1为真，则exp2为真，exp3为假
//		 若exp1为假，则exp2为假，exp3为真
//		 例子:int a=10;
//			  int b=20;
//			  int r=(a > b ? a : b);
//			  结果r=20
//逗号表达式：就是用逗号隔开的一系列表达式，从左向右进行计算，整个表达式的结果是最右侧表达式
//			  的结果
//			  例子：int a=10;
//					int b=9;
//					int c=6;
//					int r=(a=b+c,c=a+b,r=a+c);
//					结果r=39
// 
// 下标引用操作符：[]  explame: int arr[5]={2,4,7,0,3};
//								arr[4]=0;//arr和3即为[]的操作数
// 
// 函数调用符:()
//				以前面的Add函数为例，（）即使函数调用操作符，Add和a，b均为其的操作数
// 
// 
// 
// 
// 
// 
//int main()
//{
//	/*int a, b;
//	float x, y;
//	char c1, c2;
//	scanf("a=%db=%d", &a, &b);
//	scanf("%f%e", &x, &y);
//	scanf("%c%c", &c1, &c2);
//	printf("%d %d %f %e %c %c", a, b, x, y, c1, c2);
//	return 0;*/
//	int c1, c2;
//	c1 = getchar();
//	putchar(c1);
//	c2 = getchar();
//	putchar(c2);
//	printf("%c,%c\n", c1, c2);
//	return 0;
//	
//
//
//
//
//
//}

//int main()
//{
//	double I,T;
//	I = 0;
//	printf("请输入本月利润：");
//	scanf_s("%lf",&I);
//	if (I <= 100000) T = 0.1 * I;
//	else {
//		if (I <= 200000) T = 10000 + 0.075 * (I - 100000);
//		else {
//			if (I <= 400000)T = 17500 + 0.05 * (I - 200000);
//			else {
//				if (I <= 600000)T = 27500 + 0.03 * (I - 400000);
//				else {
//					if (I <= 1000000)T = 33500 + 0.015 * (I - 600000);
//					else T = 39500 + 0.01 * (I - 1000000);
//				}
//			}
//		}
//	}
//	printf("奖金总数为%f\n", T);
//	return 0;
//}


//int main()
//{
//	double x, y;
//	printf("请输入坐标的x和y，并以逗号隔开：");
//	scanf_s("%lf,%lf", &x, &y);
//	int h = 0;
//	if ((x + 2)*(x + 2) + (y + 2)*(y + 2) == 1 || (x + 2)*(x + 2) + (y - 2)*(y - 2) == 1 || (x - 2)*(x - 2) + (y + 2)*(y + 2) == 1)
//		h = 10;
//	if ((x - 2) * (x - 2) + (y - 2) * (y - 2) == 1)
//		h = 10;
//	printf("该坐标建筑高为%dm\n", h);
//	return 0;
//
//
//
//
//
//}
//
// 整数的分解
// %10得到个位数
// /10去除个位数
// 再次%10得到十位数
// 以此类推
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
//
int main()
{
	int arr[5];
	int d;
	int a = 0,i=0,x=0;
	scanf("%d", &d);
	do
	{
		arr[a] = d % 10;
		printf("它的第%d位数字是%d\n",a+1, arr[a]);
		d = d / 10;
		a++;
	} while (d > 0);
	printf("这是个%d位数\n", a);
	while (i < a)
	{
	x= arr[i] + x*10;
		i++;
	}
	printf("这个数的倒叙数是%d\n", x);
	return 0;
	}
//
//
//
//
//int main()
//{
//	int n,i,f;
//	f = 1;
//	printf("请输入n的值：");
//	scanf("%d", &n);
//	/*for (i = 1; i<= n; i++)
//	{
//		f = f * i;
//	}
//	;*/
//	for (; n > 1; n--)
//	{
//		f = f * n;
//	}
//	printf("n的阶乘结果为%d\n", f);
//	return 0;
//
//
//
//
//
//}








