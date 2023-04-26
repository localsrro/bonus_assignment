#include <stdio.h>

#define DEFAULT 10

typedef struct list list;
typedef struct block block;

struct list
{
         int size;
         int cap;
         block * arr;
};

struct block
{
         char ** arr;
};

list * create_list();

int main()
{
         // direct mapped cache
         list * addr01 = malloc(sizeof)(list);
         int len01 = 9; // 0x9cb key
         int ind01 = 4;

         int len02 = 10; // 0xbf8ef key
         int ind02 = 3;
}


list * create_list()
{
         list * ret = (list *) malloc(sizeof(list));
         ret -> size = 0;
         ret -> cap = DEFAULT;
         ret -> arr = (block *) malloc(ret -> cap * sizeof(block));

         return ret;
}
