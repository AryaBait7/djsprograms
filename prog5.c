// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     char opt;  
//     int n1, n2;   
//     float res;  
//     printf (" Select an operator");  
//     scanf ("%c", &opt);  
//     printf (" Enter the first number: ");  
//     scanf(" %d", &n1);  
//     printf (" Enter the second number: ");  
//     scanf (" %d", &n2); 
      
//     if (opt == '+')  
//     {  
//         res = n1 + n2;
//         printf (" Addition of %d and %d is: %f", n1, n2, res);  
//     }  
      
//     else if (opt == '-')  
//     {  
//         res = n1 - n2; 
//         printf (" Subtraction of %d and %d is: %f", n1, n2, res);  
//     }  
      
//     else if (opt == '*')  
//     {  
//         res = n1 * n2;   
//         printf (" Multiplication of %d and %d is: %f", n1, n2, res);  
//     }  
      
//     else if (opt == '/')  
//     {  
//         if (n2 == 0) 
//         {  
//             printf (" \n Divisor cannot be zero.");  
//             scanf ("%d", &n2);        
//         }  
//         res = n1 / n2; 
//         printf (" Division of %d and %d is: %.2f", n1, n2, res);  
//     }  
//     else  
//     {  
//         printf("wrong inputs ");  
//     }  
//     return 0;  

// }

// Using switch case 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //clrscr();
    double a,b;
    char ch;
    double ans;
    printf("for add press + \n for sub press - \n for mul press * \n for div press / \n");
    scanf("%c",&ch);
    printf("Enter first number:");
    scanf("%lf",&a);
    printf("Enter second number:");
    scanf("%lf",&b);
    switch(ch)
    {
    case '+':
        ans=a+b;
        printf("add= %lf",ans);
        break;
    case '-':
        ans=a-b;
        printf("sub=%lf",ans);
        break;
    case '*':
        ans=a*b;
        printf("mul=%lf",ans);
        break;
    case '/':
        ans=a/b;
        printf("div=%lf",ans);
        break;
    default:
        printf("Invalid Inputs");

    }

    //getch();
}
