# Code

```
#include "stdio.h"


void test( int **data )
{
    int mytest = 5678;
    *data = &mytest;
    printf("In test: &data = %p, data = %p, *data = %p, **data = %d\n", &data, data, *data, **data);
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
}
````

# Results

```
The address of data = 0x7fffcde0ae64 and the value is 123
The pointer is stored at address 0x7fffcde0ae68 and contains a pointer to 0x7fffcde0ae64 which contains the following value 123


In test: &data = 0x7fffcde0ae38, data = 0x7fffcde0af70, *data = 0x7fffcde0ae44, **data = 5678


Address of data returned: 0x7fffcde0ae44 value is 5678

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
