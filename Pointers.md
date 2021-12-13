# Code

```

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

````

# Results

```

The address of data = 0x7ffcf95b97a4 and the value is 123
The pointer is stored at address 0x7ffcf95b97a8 and contains a pointer to 0x7ffcf95b97a4 which contains the following value 123

In test: &data = 0x7ffcf95b9778, data = 0x7ffcf95b98b0, *data = 0x7ffcf95b9784, **data = 5678

Address of data returned: 0x7ffcf95b9784 value is 5678

In test2: data = 0x7ffcf95b97a4, *data = 123

In test2: data = 0x7ffcf95b97a4, *data = 9101112

test2( &data ) data = 9101112


```

# Breakdown

```
int data;
int *p_data = NULL;
int **pp_data;

data = 123;               &data                       data
The address of data = 0x7fffcde0ae64 and the value is 123

p_data = &data;                       &p_data                                  p_data                                       *p_data               
The pointer is stored at address 0x7fffcde0ae68 and contains a pointer to 0x7fffcde0ae64 which contains the following value 123

```
