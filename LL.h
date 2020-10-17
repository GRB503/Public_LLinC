#include<stdio.h>
#include<stdlib.h>

typedef int element;

struct node
{
  element e;
  struct node * next;
};
typedef struct node * llist;

llist creatememory();
