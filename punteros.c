#include <stdio.h>
//Problem 1
void swap(int *p1,int*p2){
  int aux;
  aux = *p1;
  *p1 = *p2;
  *p2 = aux;
}
//Problem 4
void print_addr(int x){
  // int *puntero;
  // puntero = &x;
  printf("%p\n",&x);

}

//Problem 5
int* new_integer(){
  int p = 5;
  return &p; 
}

//Problem 6
void print_array(){

}
int main()
{
  //Problem 1
  int p1 = 5;
  int p2 = 4;
  printf("p1 = %d\n p2 = %d\nSwap\n",p1,p2);
  swap(&p1,&p2);
  printf("p1 = %d\n p2 = %d\n",p1,p2);

  //Problem 4.
  int a = 5;
  printf("Direccion de memoria de  a: %p\n",&a);
  printf("\nDireccion de memoria usando la funcion print_addr() pasandole a: ");
  print_addr(a);
  
  //Problem 5.
  printf("\nEl valor del puntero es: %d\n ", *new_integer());

    /*

  int a = 5; //Declaración de variable entera de tipo entero
  int *puntero;
  puntero= &a; //Declaración de variable puntero de tipo entero

//puntero = &a; //Asignación de la dirección memoria de a
 
printf("El valor de a es: %d. \nEl valor de *puntero es: %d. \n",a,*puntero);
printf("La direccion de memoria de *puntero es: %p\n",puntero);

 printf("El valor de *puntero1 es: %d.La direccion de *pu ntero1 es: %p. \n",*puntero1,puntero1);
 printf("El valor de **puntero2 es: %d.La direccion de **puntero2 es: %p. \n",**puntero2,*puntero2);
 printf("El valor de ***puntero3 es: %d.La direccion de ***puntero3 es: %p. \n",***puntero3,**puntero3);
    */
return 0;
}
