/*
***********************************************************

Topic   : Program to demonstrate Fibonacci Series in c.
Author  : Chpaone09®
Date    : Oct 20, 2020

************************************************************
*/

#include <stdio.h>
#include <conio.h>

void main(){
       
        int a = 1, b = 1, c = 0, n;
           printf("\n\n\t Please enter a number >> ");
           scanf("%d",&n);
            //n = Integer.parseInt(n);
            printf("\n\n\t Fibonacci series till %d th term >> %d %d", n, a, b);
            for(int i=3 ; i<=n ; i++){
                c = a+b;
                printf(" %d", c);
                b=a;
                a=c;   
            }
}




