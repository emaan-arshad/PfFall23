#include <stdio.h>
#include <stdlib.h>



void swap (int *a, int *b);
int
main ()
{
  unsigned int datatype, size;


  printf
    ("enter datatype of elements \nenter 1 for int\nenter 2 for float\nenter 3 for char :");
  scanf ("%d", &datatype);
  printf ("enter elements") switch (datatype)
    {
    case 1:
    
      int ptr1;
      int ptr2;
      scanf ("%d", ptr1);
        scanf ("%d", ptr2);
      swap(&ptr1,&ptr2); 
      break;
    case 2:
      ptr = malloc (sizeof (float));
      float *ptr2 = (float *) ptr;
      scanf ("%f", ptr2);
      break;
    case 3:
      ptr = malloc (sizeof (char));
      char *ptr3 = (char *) ptr;
      scanf (" %c%c", ptr3);
    default:
      printf ("invalid datatype choice");
    }




  return 0;
}

void
swap (void *a, void *b)
{
  *a = *a ^ *b;
  *b = *a ^ *b;
  *a = *a ^ *b;
}
