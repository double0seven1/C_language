#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//培养我的分析问题，解决问题的能力！！！！

//char* my_strcat(char arr1[], const char arr2[])
//{
//	assert(arr1 && arr2);
//	char* p = arr1;
//	//找到\0的位置
//	while (*arr1)//为什么要解引用？。。
//	{
//		arr1++;
//	}
//
//	//strcmp的操作
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return p;
//
//}
//
//int main()//模拟实现strcat
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
//int main()//模拟实现strcmp
//{
//	char* arr1 = "abc";
//	char* arr2 = "abc";
//	printf("%d", my_strcmp(arr1, arr2));
//	return 0;
//}




//char* my_strstr(const char* p1, const char* p2)//最重要的:对比时，记录那两个指针的位置（防止诈胡）
//{
//	char* s1 = (char*)p1;  char* s2 = (char*)p2;//为什么这里要强制类型？
//	//p的类型暗示了里面的内容不能被改变，如果把地址穿给了能改变的char*类型，不安全。
//	char* cur = s1;
//	//如果是\0的话:
//	if (!*s2)
//		return (char*)p1;
//
//	while (*cur)
//	{
//		//这个重置化很关键
//		s1 = cur; s2 = (char*)p2;
//
//		while (*s2 && *s1 && *s1 == *s2)//每次的对比
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
//int main()//模拟实现strstr
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	printf("%s",my_strstr(arr1, arr2));
//
//	return 0;
//}





//int main()//strtok:会创建静态变量，就是会记住分隔符的位置。
//{
//	char arr[] = "114.434.43.1";
//	char copy[30] = {0};//因为会strtok会修改，所以要备份
//	strcpy(copy, arr);
//	char* p = ".";
//	char* rec = NULL;
//	//strtok  找到分割符，并把它给记录下来
//	for (rec = strtok(arr, p); rec != NULL; rec=strtok(NULL, p))
//	{
//		printf("%s\n", rec);
//	}
//	return 0;
//}