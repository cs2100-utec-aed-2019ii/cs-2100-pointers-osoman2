#include <iostream>

/** ejemplo **/
void ejercicio_x (int, int) {
    return;
}

int main (int, char * []){
    //1 --> 1 2 3 4 5 6 7 8 9 10
    //2 --> 7 5 10
    /**3 --> T
             L
             T
     **/
    //4 --> 1
    //5 --> Da error pues el puntero al ser una variable del tipo double no puede recibir una del tipo char 
    /**6 --> void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
     **/
    //7 --> 28
    //8 --> 0
    //      8
    //9 --> 8
    //      15
    //10 --> 8 
    /**11 --> int main()
{

    int a = 10;
             int *ptr = &a;
             cout<<*ptr<<ptr<<&(*ptr);
    return 0;
}
     **/
    //12 --> 39 13 39
    //13 --> 5 5 5
    //14 --> 1 1   
    /**15 --> int main()
{

    int a,b,suma;
    int * ptr1 = &a; int *ptr2 = &b;
    suma = *ptr1+*ptr2;
    return 0;
}
     **/
    //16 -->19
    //17 --> Segmentation ... Flata iniciar el puntero
    //18 --> 18
    //19 --> recorre un string de atrás para adelante y la llena con el caracter vacío
    //20 --> elimina las comas de una cadena y pone un espacio
    
    return 1;
}
