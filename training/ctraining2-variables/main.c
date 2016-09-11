#include <stdio.h>

int sum(int a, int b);

int var_noinit;
int var_init = 1000;

void main(void){

  int result;
  int *ptr;
  int (*ptr_fun)(int, int);

  int arr[10] = {0,1,2,3,4,5,6,7,8,9};

  ptr_fun = sum;
  ptr = &result;
  result = ptr_fun(5,13);

  printf("El resultado es %d \n", *ptr);
  printf("La direccion de resultado es 0x%X \n", ptr);
  printf("La direccion de la funcion sum es 0x%X \n", ptr_fun);
  printf("La direccion de var global init es 0x%X \n", &var_init);
  printf("La direccion de var global no init es 0x%X \n", &var_noinit);

  printf("La direccion i de arr  0x%X \n", arr);
  printf("La direccion f de arr  %d \n", *(arr+10) ) ;


}

int sum(int a, int b){
   return (a+b);
}

