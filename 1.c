//#define _CRT_SECURE_NO_WARNINGS   1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//#include<limits.h>//INT_MAX�������ֵ
//malloc
//int main()
//{
//	int arr[10] = { 0 };//���ڴ��Ͽ���40���ֽڵĿռ�
//	//��̬�ڴ濪��----�ڶ�����
//	int *p = (int *)malloc(40);//ϣ����40���ֽڵ���10����������
//	if (p == NULL)
//	{
//		printf("�ڴ濪��ʧ��\n");
//	}
//	else
//	{
//		printf("���ٳɹ�\n");
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = 0;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d  ", p[i]);
//		}
//		//�ֶ��ͷ��ڴ�ռ�
//		free(p);
//		p = NULL;//Ҫ��ʱfree,�����ڴ�й¶
//	}
//	return 0;
//}


//calloc���ٿռ��ʼ������������
//malloc���ٿռ䲻��ʼ����һ������

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
//		//�ռ䲻���ˣ����ӿռ�
//		int *psr = (int *)realloc(p,80);//����Ҫ����һ����ָ�������ܷ��صĵ�ַ
//		                             //�����������һ�ֺ����ڴ湻�ã�һ�ֺ����ڴ治����
//		if (psr != NULL)//�п��ܿ���ʧ��
//		{
//			p = psr;
//		}
//		printf("\n");
//		for (i = 0; i < 20; i++)
//		{
//			printf("%d  ", p[i]);//���������������ֵ
//		}
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}

////��NULL�Ľ�����,ʹ�ö�̬�ڴ濪�ٵ�ʱ��Ҫ���
//int main()
//{
//	int *p = (int *)malloc(INT_MAX*INT_MAX);
//	*p = 0;
//	return 0;
//}


//Խ�����
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
//		//Խ�����
//		for (i = 0; i <= 10; i++)
//			*(p + i) = 0;
//		free(p);
//		p = NULL;
//	}
//}


//�ԷǶ�̬�����ͷ��ڴ�
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}


//ֻ�ͷ�һ����

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
//		//Խ�����
//		for (i = 0; i < 5; i++)
//			*p++ = 0;
//		free(p);
//		p = NULL;
//	}
//}

//����ͷ�ͬһ���ڴ�
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
//		free(p);//���
//		free(p);
//		p = NULL;
//	}
//}


//�����ͷ�
//�ڴ�й¶����
