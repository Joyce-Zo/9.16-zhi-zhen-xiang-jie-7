#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
		��������

	int a[] = { 1, 2, 3, 4 };
	 ������ - ��Ԫ�ص�ַ
	 1. sizeof(������) - ��������
	 2. &������ - ��������
		����������Ԫ�ص�ַ
	printf("%d\n", sizeof(a));		//16	���������ܴ�С����λ�ֽ�
	printf("%d\n", sizeof(a + 0));	//8	a-��Ԫ�ص�ַ,a+0������Ԫ�ص�ַ����ַ�Ĵ�С4/8
	printf("%d\n", sizeof(*a));		//4 a-��Ԫ�ص�ַ,*a������Ԫ�أ�sizeof(*a)����*a-int���͵Ĵ�С
	printf("%d\n", sizeof(a + 1));	//8 a-��Ԫ�ص�ַ,a+1�ǵڶ���Ԫ�صĵ�ַ,��ַ�Ĵ�С4/8
	printf("%d\n", sizeof(a[1]));	//4	a[1]���ڶ���Ԫ��int�Ĵ�С
	printf("%d\n", sizeof(&a));		//8 &a ȡ����������ĵ�ַ����ַ�Ĵ�С4/8
	printf("%d\n", sizeof(*&a));	//16 &aȡ������ĵ�ַ,*�����ã�*&a���Ƿ����������飬���������С16
	printf("%d\n", sizeof(&a + 1));	//8 &a������ĵ�ַ��&a+1�����������飬�������ǵ�ַ����ַ�Ĵ�С4/8
	printf("%d\n", sizeof(&a[0]));	//8 a[0]�ǵ�һ��Ԫ�أ�����ַ�Ĵ�С4/8
	printf("%d\n", sizeof(&a[0] + 1));//8 &a[0]�ǵ�һ��Ԫ�صĵ�ַ��&a[0]+1�ǵڶ���Ԫ�صĵ�ַ����ַ�Ĵ�С4/8

		 �ַ�����

	char arr[] = { 'a' , 'b','c', 'a', 'e','f' };

	   strlen - ���ַ������� - ����\0

	printf("%d\n", strlen(arr));		  //���ֵ
	printf("%d\n", strlen(arr + 0));	  //���ֵ

	printf("%d\n", strlen(*arr));		  //*arr����Ԫ��a,ASCII���ֵ��97,97��Ϊ��ַstrlen���Ƿ����ʣ�err
	printf("%d\n", strlen(arr[1]));		  //arr[1]=b,ASCII���ֵ��98,98��Ϊ��ַstrlen���Ƿ����ʣ�err

	printf("%d\n", strlen(&arr));		  //���ֵ
	printf("%d\n", strlen(&arr + 1));	  //���ֵ-6������һ������Ĵ�С
	printf("%d\n", strlen(&arr[0] + 1));  //���ֵ-1������1��Ԫ��

		  sizeof - ����ռ�ռ��С
	 
	printf("%d\n", sizeof(arr));		//6	- ����Ԫ�صĴ�С
	printf("%d\n", sizeof(arr + 0));	//8 - ��Ԫ�ص�ַ
	printf("%d\n", sizeof(*arr));		//1	- ��Ԫ�ش�С
	printf("%d\n", sizeof(arr[1]));		//1 - ��Ԫ�ش�С
	printf("%d\n", sizeof(&arr));		//8 - ���������ַ
	printf("%d\n", sizeof(&arr + 1));	//8 - ������������ĵ�ַ
	printf("%d\n", sizeof(&arr[0] + 1));//8 - �ڶ���Ԫ�صĵ�ַ
	
	return 0;
}
