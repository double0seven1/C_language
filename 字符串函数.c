#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//�����ҵķ������⣬��������������������

//char* my_strcat(char arr1[], const char arr2[])
//{
//	assert(arr1 && arr2);
//	char* p = arr1;
//	//�ҵ�\0��λ��
//	while (*arr1)//ΪʲôҪ�����ã�����
//	{
//		arr1++;
//	}
//
//	//strcmp�Ĳ���
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return p;
//
//}
//
//int main()//ģ��ʵ��strcat
//{
//	char arr1[30] = "abcd";
//	char arr2[] = "adidas";
//	char* p = my_strcat(arr1, arr2);
//
//	return 0;
//}






//int my_strcmp(char* a,char* b)
//{
//	while (*a++ == *b++)
//	{
//		if (*a == '\0')
//			return 0;
//
//	}
//	if (*a < *b)
//		return 1;
//	else
//		return -1;
//
//}
//int main()//ģ��ʵ��strcmp
//{
//	char* arr1 = "abc";
//	char* arr2 = "abc";
//	printf("%d", my_strcmp(arr1, arr2));
//	return 0;
//}




//char* my_strstr(const char* p1, const char* p2)//����Ҫ��:�Ա�ʱ����¼������ָ���λ�ã���ֹթ����
//{
//	char* s1 = (char*)p1;  char* s2 = (char*)p2;//Ϊʲô����Ҫǿ�����ͣ�
//	//p�����Ͱ�ʾ����������ݲ��ܱ��ı䣬����ѵ�ַ�������ܸı��char*���ͣ�����ȫ��
//	char* cur = s1;
//	//�����\0�Ļ�:
//	if (!*s2)
//		return (char*)p1;
//
//	while (*cur)
//	{
//		//������û��ܹؼ�
//		s1 = cur; s2 = (char*)p2;
//
//		while (*s2 && *s1 && *s1 == *s2)//ÿ�εĶԱ�
//		{
//
//			s1++;  s2++;
//		}
//		if (*s2 == '\0')
//			return cur;
//			cur++;
//	}
//	return NULL;
//}
//
//int main()//ģ��ʵ��strstr
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	printf("%s",my_strstr(arr1, arr2));
//
//	return 0;
//}





//int main()//strtok:�ᴴ����̬���������ǻ��ס�ָ�����λ�á�
//{
//	char arr[] = "114.434.43.1";
//	char copy[30] = {0};//��Ϊ��strtok���޸ģ�����Ҫ����
//	strcpy(copy, arr);
//	char* p = ".";
//	char* rec = NULL;
//	//strtok  �ҵ��ָ��������������¼����
//	for (rec = strtok(arr, p); rec != NULL; rec=strtok(NULL, p))
//	{
//		printf("%s\n", rec);
//	}
//	return 0;
//}