#include<stdio.h>
//int main()
//{
//	char x;
//	int l = 0, m = 0, s = 0, o = 0;
//	printf("请输入一行字符：");
//	while ((x = getchar()) != '\n')
//	{
//		if (x <= '9' && x>='0')m++;
//		else {
//			if ((x <= 'z' && x>='a') || (x < 'Z' && x>'A'))l++;
//			else {
//				if (x == ' ')s++;
//				else o++;
//			}
//			
//
//		}
//	
//	}
//printf("字母=%d,数字=%d,空格=%d,其他字符=%d", l, m, s, o);
//	return 0;
//}
int sum(int a,int b)
{
	int x = a + b;
	return x;
}



int isprime(int x, int prime[], int count);

int main()
{
	/*int a, b, h;
  	scanf_s("%d,%d", &a, &b);
	h = sum(a, b);
	//printf("%d\n", h);*/
	//int x;
	//int count[10];
	//int i;
	//for (i = 0; i < 10; i++) { count[i] = 0; }
	//scanf_s("%d", &x);
	//while (x != -1) {
	//	if (x >= 0 && x <= 9)count[x]++;
	//	scanf_s("%d", &x);
	//}
	//for (i = 0; i < 10; i++) { printf("%d=%d\n", i, count[i]); }
	//任务：获得x以内的素数表
	int i, x,count;
	count = 1;
	int prime[100] = {2};
	printf("请输入x的值：");
	scanf_s("%d", &x);
	for (i = 2; i < x; i++) {
		if (isprime(i, prime, count))
			prime[count++] = i;
	}
	for (i = 0; i < count; i++) {
		printf("%d", prime[i]);
		if ((i + 1) % 5 == 0)printf("\n");
		else printf("\t");
	}


	return 0;

}

int isprime(int x, int prime[],int count)
{
	int ret=0,i=0;
	for (i = 0; i < count; i++) {
		if (x % prime[i] == 0) {
			ret = 0; 	break;
		}
		else ret = 1;
	}
return ret;
}
