//
//  main.c
//  number
//
//  Created by 20161104586 on 17/6/7.
//  Copyright © 2017年 20161104586. All rights reserved.
//

#include<stdio.h>
int main()
{
    int a[10],i,j,t;
    printf("请输入10个整数:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<9;i++)
    for(j=0;j<9-i;j++)
        if(a[j]>a[j+1])
            {
                t=a[j]; a[j]=a[j+1]; a[j+1]=t;
            }
    printf("排序以后的数:\n");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    printf("pause");
    return 0;
    
}
