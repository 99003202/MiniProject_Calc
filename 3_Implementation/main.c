#include<stdio.h>
#include "calc.h"
 int c1=0,c2=0,c3=0;
int main()
{

    int sel=0;
    printf("\n****************************************************************************************");
    printf("\n                                      Main Menu                                         ");
    printf("\n****************************************************************************************");
    printf("\n                              Welcome to Scientific Calculator                          ");
    printf("\n                                      1.Arithmetic                                      ");
    printf("\n                                      2.Conversions                                     ");
    printf("\n                                      3.Trignometry                           ");
    printf("\n                                      Enter your choice                                 ");
    scanf("%d",&sel);
   
    switch (sel)
    {
        case 1  : { printf("\n                1.Addition                            ");
                    printf("\n                2.Subtraction                         ");
                    printf("\n                3.Multipication                       ");
                    printf("\n                4.Division                            ");
                    printf("\n                5.Modulus                             ");
                    printf("\n                6.Square                              ");
                    printf("\n                7.Square Root                         ");
                    printf("\n                Enter your choice                     ");
                    scanf("%d",&c1);
                    break;
                  }            
        case 2  : {printf("\n                  1.Kilometres to Metres                 ");
                   printf("\n                  2.Metres to Centimetres                ");
                   printf("\n                  3.Feet to Inches                       ");
                   printf("\n                  4.Inches to Centimetres                ");
                   printf("\n                  5.Centimetres to meters                ");
                   printf("\n                  6.Yard to metres                       ");
                   printf("\n                  7.Yard to Centimetres                  ");                            
                   printf("\n                  Enter your choice                      ");
                   scanf("%d",&c2);
                   break;
                  }   
        case 3  : {
                   printf("\n                   1.Sine                              ");
                   printf("\n                   2.Cosine                            ");
                   printf("\n                   3.Tangent                           ");
                   printf("\n                   4.Cotangent                         ");
                   printf("\n                   5.Secant                            ");
                   printf("\n                   6.Cosecant                          ");
                   printf("\n                   Enter your choice                   ");
                   scanf("%d",&c3);
                   break;
                   }
        default: printf("\n                     Invalid Entry                       ");

    }
        switch(c1)  
        {
            case 1:{ int num1,num2;
                     printf("\n Enter the numbers");
                     scanf("%d",&num1);
                     scanf("%d",&num2);
                     int res= add(num1,num2);
                     printf("\n The Answer is: %d",res);
                     break;
                    }
            case 2:{ int num1,num2;
                     printf("\n Enter the numbers");
                     scanf("%d",&num1);
                     scanf("%d",&num2);
                     int res= sub(num1,num2);
                     printf("\n The Answer is: %d",res);
                     break;
                      }  
            case 3:{ double num1,num2;
                     printf("\n Enter the numbers");
                     scanf("%lf",&num1);
                     scanf("%lf",&num2);
                    double res= mul(num1,num2);
                     printf("\n The Answer is: %lf",res);
                     break;
                    }
            case 4:{double num1,num2;
                    printf("\n Enter the number");
                     scanf("%lf", &num1);
                    printf("\n Enter the number");
                     scanf("%lf", &num2);;
                     printf("\n The Answer is: %lf", div(num1,num2));
                     break;
                    }
            case 5:{ double num1,num2;
                     printf("\n Enter the numbers");
                     scanf("%lf",&num1);
                     scanf("%lf",&num2);
                     int res= mod(num1,num2);
                     printf("\n The Answer is: %d",res);
                     break;
                    }
            case 6:{double num1;
                    printf("\n Enter the number");
                    scanf("%lf",&num1);
                    double res=sqr(num1);
                    printf("\n The Answer is: %lf",res);
                    break;
                    }
            case 7:{double num1;
                    printf("\n Enter the number");
                    scanf("%lf",&num1);
                    double res=sqart(num1);
                    printf("\n The Answer is: %lf",res);
                    break;
                    }
            default:printf("\n Invalid Entry");
          switch(c2)
          {
           case 1:{int num2,num1;
                   printf("enter value in km");
                   scanf("%d",&num1);
                   num2=kmtom(num1);
                   printf("%d",num2);
                   break;
                  }
           case 2:{int num2,num1;
                   printf("enter value in cm");
                   scanf("%d",&num1);
                   num2=mtocm(num1);
                   printf("%d",num2);
                   break;
                  }
           case 3:{int num2,num1;
                   printf("enter value in f");
                   scanf("%d",&num1);
                   num2=ftoi(num1);
                   printf("%d",num2);
                   break;
                  }
           case 4:{int num2,num1;
                   printf("enter value in i");
                   scanf("%d",&num1);
                   num2=itocm(num1);
                   printf("%d",num2);
                   break;
                  }
           case 5:{int num2,num1;
                   printf("enter value in cm");
                   scanf("%d",&num1);
                   num2=cmtom(num1);
                   printf("%d",num2);
                   break;
                  }
           case 6:{int num2,num1;
                   printf("enter value in y");
                   scanf("%d",&num1);
                   num2=ytom(num1);
                   printf("%d",num2);
                   break;
                  }
           case 7:{int num2,num1;
                   printf("enter value in y");
                   scanf("%d",&num1);
                   num2=ytocm(num1);
                   printf("%d",num2);
                   break;
                  }
              

                    switch(c3)
                    {
                        case 1:{double num1;
                                printf("\n Enter the Angle in Degree");
                                scanf("%lf",&num1);
                                double res=sine(num1);
                                printf("\n The Answer is: %lf",res);
                                break;
                                }
                        case 2:{double num1;
                                printf("\n Enter Angle in Degree");
                                scanf("%lf",&num1);
                                double res=cosi(num1);
                                printf("\n The Answer is: %f",res);
                                break;
                                }
                        case 3:{double num1;
                                printf("\n Enter the angle in Degree");
                                scanf("%lf",&num1);
                                double res=tang(num1);
                                printf("\n The Answer is: %lf ",res);
                                break;
                                }
                        case 4:{double num1;
                                printf("\n Enter the angle in Degree");
                                scanf("%lf",&num1);
                                double res=cot(num1);
                                printf("\n The Answer is: %lf",res);
                                break;
                                }
                        case 5:{double num1;
                                printf("\n Enter the angle in Degree");
                                scanf("%lf",&num1);
                                double res=sec(num1);
                                printf("\n The Answer is: %lf ",res);
                                break;
                                 }
                        case 6:{double num1;
                                printf("\n Enter the angle in the Degree");
                                scanf("%lf",&num1);
                                double res=cosec(num1);
                                printf("\n The Answer is: %lf ",res);
                                }
                    }


                          
        }
        
                           
                            
}
}
