//#define _CRT_SECURE_NO_WARNINGS   1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//#include<limits.h>//INT_MAX整数最大值
//malloc
//int main()
//{
//	int arr[10] = { 0 };//在内存上开辟40个字节的空间
//	//动态内存开辟----在堆区上
//	int *p = (int *)malloc(40);//希望把40个字节当成10个整形数组
//	if (p == NULL)
//	{
//		printf("内存开辟失败\n");
//	}
//	else
//	{
//		printf("开辟成功\n");
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = 0;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d  ", p[i]);
//		}
//		//手动释放内存空间
//		free(p);
//		p = NULL;//要及时free,否则内存泄露
//	}
//	return 0;
//}


//calloc开辟空间初始化，两个参数
//malloc开辟空间不初始化，一个参数

//int main()
//{
//	int *p=(int *)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s",strerror(errno));
//	}
//	else
//	{
//		printf("success\n");
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d  ", p[i]);
//		}
//		//空间不够了，增加空间
//		int *psr = (int *)realloc(p,80);//必须要创建一个新指针来接受返回的地址
//		                             //有两种情况，一种后面内存够用，一种后面内存不够用
//		if (psr != NULL)//有可能开辟失败
//		{
//			p = psr;
//		}
//		printf("\n");
//		for (i = 0; i < 20; i++)
//		{
//			printf("%d  ", p[i]);//后面新增的是随机值
//		}
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}

////对NULL的解引用,使用动态内存开辟的时候要检测
//int main()
//{
//	int *p = (int *)malloc(INT_MAX*INT_MAX);
//	*p = 0;
//	return 0;
//}


//越界访问
//int main()
//{
//	int *p = (int *)malloc(10 * sizeof(int));
//	if (p = NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		//越界访问
//		for (i = 0; i <= 10; i++)
//			*(p + i) = 0;
//		free(p);
//		p = NULL;
//	}
//}


//对非动态开辟释放内存
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}


//只释放一部分

//int main()
//{
//	int *p = (int *)malloc(10 * sizeof(int));
//	if (p = NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		//越界访问
//		for (i = 0; i < 5; i++)
//			*p++ = 0;
//		free(p);
//		p = NULL;
//	}
//}

//多次释放同一块内存
//int main()
//{
//	int *p = (int *)malloc(10 * sizeof(int));
//	if (p = NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i <5; i++)
//			*(p + i) = 0;
//		free(p);//多次
//		free(p);
//		p = NULL;
//	}
//}


//忘记释放
//内存泄露问题
