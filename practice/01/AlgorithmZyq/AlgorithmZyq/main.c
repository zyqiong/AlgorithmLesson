//
//  main.c
//  AlgorithmZyq
//
//  Created by zyq on 2021/2/23.
//

#include <stdio.h>
#include "stdlib.h"

#define MAXSIZE 100
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

// 线性结构使用顺序表的方式存储

typedef int ElemType;
typedef int Status;

typedef struct {
    ElemType *data;
    int length;
}Sqlist;

// 1.1 顺序表初始化
Status InitList(Sqlist *L) {
    // 为顺序表分配一个大小为MAXSIZE的数组空间
    L->data = malloc(sizeof(ElemType) * MAXSIZE);
    // 如果存储分配失败则退出
    if (!L->data) exit(ERROR);
    // 空表长度为0
    L->length = 0;
    return OK;
}

// 1.2 顺序表的插入
/*
 初始条件：顺序线性表L已经存在：1<=i<=ListLength(L)
 */

Status listEmpty(Sqlist L) {
    if (L.length == 0) {
        return TRUE;
    } else {
        return FALSE;
    }
}
// 线性表的长度
int ListLength(Sqlist L) {
    return L.length;
}

int main(int argc, const char * argv[]) {
    printf("--sd");
    return 0;
}
