#include <stdio.h>
void fun();
int main ()
    {
        fun();
        fun();
        fun();
        return 0;
    }
    void fun()
        {
            int a = 1;
            static int b = 10;  //Static variable is supposed to retain it's value even after when the fuction block ends
            printf("a = %d \n", a);
            printf("b = %d \n \n", b);  
            a++;  //Incrementing a
            b++;  //Incrementing b
        }