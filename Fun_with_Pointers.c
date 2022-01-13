#include "stdio.h"


void test( int **data )
{
    int mytest = 5678;
    *data = &mytest;
    printf("\nIn test: &data = %p, data = %p, *data = %p, **data = %d\n", &data, data, *data, **data);
}

void test2( int *data )
{
    printf("\nIn test2: data = %p, *data = %d\n", data, *data);
    *data = 9101112;
    printf("\nIn test2: data = %p, *data = %d\n", data, *data);
}

int main()
{
    int data;
    int *p_data = NULL;
    int **pp_data;

    data = 123;
    printf("The address of data = %p and the value is %d\n", &data, data);
    p_data = &data;
    printf("The pointer is stored at address %p and contains a pointer to %p which contains the following value %d\n", &p_data, p_data, *p_data);
    test(pp_data);
    printf("\n\nAddress of data returned: %p value is %d\n\n", *pp_data, **pp_data);
    test2( &data );
    printf("\n\ntest2( &data ) data = %d\n", data);
}
