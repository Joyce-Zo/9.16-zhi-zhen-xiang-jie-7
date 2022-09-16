#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
		整型数组

	int a[] = { 1, 2, 3, 4 };
	 数组名 - 首元素地址
	 1. sizeof(数组名) - 整个数组
	 2. &数组名 - 整个数组
		其他都是首元素地址
	printf("%d\n", sizeof(a));		//16	计算数组总大小，单位字节
	printf("%d\n", sizeof(a + 0));	//8	a-首元素地址,a+0还是首元素地址，地址的大小4/8
	printf("%d\n", sizeof(*a));		//4 a-首元素地址,*a就是首元素，sizeof(*a)就是*a-int类型的大小
	printf("%d\n", sizeof(a + 1));	//8 a-首元素地址,a+1是第二个元素的地址,地址的大小4/8
	printf("%d\n", sizeof(a[1]));	//4	a[1]，第二个元素int的大小
	printf("%d\n", sizeof(&a));		//8 &a 取出的是数组的地址，地址的大小4/8
	printf("%d\n", sizeof(*&a));	//16 &a取出数组的地址,*解引用，*&a就是访问整个数组，整个数组大小16
	printf("%d\n", sizeof(&a + 1));	//8 &a是数组的地址，&a+1跳过整个数组，不过还是地址，地址的大小4/8
	printf("%d\n", sizeof(&a[0]));	//8 a[0]是第一个元素，，地址的大小4/8
	printf("%d\n", sizeof(&a[0] + 1));//8 &a[0]是第一个元素的地址，&a[0]+1是第二个元素的地址，地址的大小4/8

		 字符数组

	char arr[] = { 'a' , 'b','c', 'a', 'e','f' };

	   strlen - 求字符串长度 - 遇到\0

	printf("%d\n", strlen(arr));		  //随机值
	printf("%d\n", strlen(arr + 0));	  //随机值

	printf("%d\n", strlen(*arr));		  //*arr是首元素a,ASCII码表值是97,97作为地址strlen，非法访问，err
	printf("%d\n", strlen(arr[1]));		  //arr[1]=b,ASCII码表值是98,98作为地址strlen，非法访问，err

	printf("%d\n", strlen(&arr));		  //随机值
	printf("%d\n", strlen(&arr + 1));	  //随机值-6，跳过一个数组的大小
	printf("%d\n", strlen(&arr[0] + 1));  //随机值-1，跳过1个元素

		  sizeof - 求所占空间大小
	 
	printf("%d\n", sizeof(arr));		//6	- 整个元素的大小
	printf("%d\n", sizeof(arr + 0));	//8 - 首元素地址
	printf("%d\n", sizeof(*arr));		//1	- 首元素大小
	printf("%d\n", sizeof(arr[1]));		//1 - 首元素大小
	printf("%d\n", sizeof(&arr));		//8 - 整个数组地址
	printf("%d\n", sizeof(&arr + 1));	//8 - 跳过整个数组的地址
	printf("%d\n", sizeof(&arr[0] + 1));//8 - 第二个元素的地址
	
	return 0;
}
