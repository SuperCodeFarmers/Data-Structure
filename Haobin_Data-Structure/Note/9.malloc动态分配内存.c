***************************************************************************************************************************
												9.malloc动态分配内存  2012.3.20
***************************************************************************************************************************
不管变量多大,malloc()函数只返回该变量的第一个地址,这是个无意义的地址,因为只知道这个地址却不知变量长度，这个地址又称作“干地址”,
所以通常在malloc()函数前面进行强制类型转换

#include "stdio.h"
#include "malloc.h"
void main()
{
	int a[5];
	
	int len;
	printf("请输入要分配的的数组的长度：");
	scanf("%d",&len);
	
	int *pArr=(int *)malloc(sizeof(int)*len);
//	*pArr=999;
//	pArr[2]=4;
//	printf("*pArr=%d , pArr[2]=%d\n",*pArr,pArr[2]);

//	当普通内存来使用;
	for(int i=0;i<len;++i)
	{
		scanf("%d",&pArr[i]);
	}
	for(i=0;i<len;++i)
	{
		printf("%d\n",*(pArr+i));
	}
	
	free(pArr);    //把pArr代表的动态分配的内存释放掉s
}
