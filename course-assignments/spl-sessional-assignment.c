#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#include <math.h>
#include <ctype.h>

void introduction();
void menu();

void grade();
void largest();
void smallest();
void oddoreven();
void negorpos();
void voworcon();
void numser();
void alphaser();
void swap();
void bit();
void square();
void cube();
void root();
void area();
void vol();
void slen();
void scount();
void addition();
void subtraction();
void multiplication();
void division();
void calculateRemainder();
void factorial();
void multitable();
void pyramid();
int main()
{
    int x;
    printf("SIR, WELCOME TO MY PROGRAM\n\n\n");
    introduction();
    menu();
    while(1)
    {
        printf("\nEnter your choice:\t");
        scanf("%d", &x);
        switch(x)
        {
        case 1:
            grade();
            break;

        case 2:
            largest();
            break;

        case 3:
            smallest();
            break;

        case 4:
            oddoreven();
            break;

        case 5:
            negorpos();
            break;

        case 6:
            voworcon();
            break;

        case 7:
            numser();
            break;

        case 8:
            alphaser();
            break;

        case 9:
            swap();
            break;

        case 10:
            bit();
            break;

        case 11:
            square();
            break;

        case 12:
            cube();
            break;

        case 13:
            root();
            break;

        case 14:
            area();
            break;

        case 15:
            vol();
            break;

        case 16:
            slen();
            break;

        case 17:
            scount();
            break;

        case 18:
            addition();
            break;

        case 19:
            subtraction();
            break;

        case 20:
            multiplication();
            break;

        case 21:
            division();
            break;

        case 22:
            calculateRemainder();
            break;

        case 23:
            factorial();
            break;

        case 24:
            multitable();
            break;

        case 25:
            pyramid();
            break;

        case 0:
            exit(0);
            break;

        default:
            printf("Invalid choice. Please enter a number between 1 and 25.\n");
            break;
        }

    }



    return 0;
}

void introduction()
{
    printf("\n========================================================\n");
    printf("Introduction\n\n\n");
    printf("+++++++++++++++++++++++++++++++++++++++\n");
    printf("+++++++++++++++++++++++++++++++++++++++\n");
    printf("++                                   ++\n");
    printf("++      Bijoy Chandra Roy            ++\n");
    printf("++      ID: CSE2302029113            ++\n");
    printf("++      Section: 29A2                ++\n");
    printf("++      Mobile Number: 01915862569   ++\n");
    printf("++  Date of Submission: 29 -11- 2023 ++\n");
    printf("++                                   ++\n");
    printf("+++++++++++++++++++++++++++++++++++++++\n");
    printf("+++++++++++++++++++++++++++++++++++++++\n");

}

void menu()
{
    printf("\n========================================================\n");
    printf("Menu\n\n\n");
    printf("1. Grading\n");
    printf("2. Largest Number\n");
    printf("3. Smallest Number\n");
    printf("4. Odd or Even number\n");
    printf("5. Positive or Negative number\n");
    printf("6. Vowel or Consonant\n");
    printf("7. Number Series\n");
    printf("8. Alphabet Series\n");
    printf("9. Number Swap\n");
    printf("10. Bitwise Operators\n");
    printf("11. Square of a Number\n");
    printf("12. Cube of a Number\n");
    printf("13. Square Root of a Number\n");
    printf("14. Area of a Circle\n");
    printf("15. Volume of a Sphere\n");
    printf("16. String Length\n");
    printf("17. Counting Alphabets, Digits, Spaces & Special Characters in a String\n");
    printf("18. Addition\n");
    printf("19. Subtraction\n");
    printf("20. Multiplication\n");
    printf("21. Division\n");
    printf("22. Remainder\n");
    printf("23. Factorial\n");
    printf("24. Multiplication Table\n");
    printf("25. Pyramid\n");
}

void grade()
{
    printf("\n========================================================\n");
    printf("Grading\n\n\n");
    int m;

    printf("Enter your mark: ");
    scanf("%d", &m);

    printf((m < 0 || m > 100) ? "Mark Invalid\n" :
           (m >= 80) ? "A+\n" :
           (m >= 75) ? "A\n" :
           (m >= 70) ? "A-\n" :
           (m >= 65) ? "B+\n" :
           (m >= 60) ? "B\n" :
           (m >= 55) ? "B-\n" :
           (m >= 50) ? "C+\n" :
           (m >= 45) ? "C\n" :
           (m >= 40) ? "D\n" : "F\n");
}

void largest()
{
    printf("\n========================================================\n");
    printf("Largest Number\n\n\n");
    int a, i, l;
    printf("Enter array size:\n");
    scanf("%d", &a);
    int n[a];
    printf("Enter %d numbers: \n", a);

    for (i=0; i<a; i++)
    {
        scanf("%d", &n[i]);
    }

    l=n[0];

    for (i=1; i<a; i++)
    {
        if (n[i] > l)
        {
            l = n [i];
        }
    }
    printf("The largest number is: %d\n", l);
}

void smallest()
{
    printf("\n========================================================\n");
    printf("Smallest Number\n\n\n");
    int a, i, s;
    printf("Enter array size:\n");
    scanf("%d", &a);
    int n[a];
    printf("Enter %d numbers: \n", a);

    for (i=0; i<a; i++)
    {
        scanf("%d", &n[i]);
    }

    s=n[0];

    for (i=1; i<a; i++)
    {
        if (s >n[i])
        {
            s = n [i];
        }
    }
    printf("The smallest number is: %d\n", s);
}

void oddoreven()
{
    printf("\n========================================================\n");
    printf("Odd or Even number\n\n\n");
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    (a == 0)?printf("The entered number is zero.\n"):(a%2 == 0)?printf("The entered number is an even number\n"):printf("The entered number is an odd number\n");
}

void negorpos()
{
    printf("\n========================================================\n");
    printf("Positive or Negative number\n\n\n");
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    (a< 0)?printf("Negative number\n"):
    (a>0)?printf("Positive number\n"):printf("The number is 0\n");
}

void voworcon()
{
    printf("\n========================================================\n");
    printf("Vowel or Consonant\n\n\n");
    char a;
    printf("Enter an alphabet: ");
    scanf(" %c", &a);
    if((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
    {
        switch(a)
        {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("%c is a Vowel\n",a);
            break;
        default:
            printf("%c is a Consonant\n",a);
        }
    }
    else
    {
        printf("\nWrong Input.\n");
    }

}

void numser()
{
    printf("\n========================================================\n");
    printf("Number Series\n\n\n");
    int i, lim, ini, inc, dec;
    char a;
    printf("\nPress F for Forward series\nor \nPress B for Backward series\n\n");
    scanf(" %c", &a);
    switch(a)
    {
    case 'F':
    case 'f':
        printf("\nInitialization value: ");
        scanf("%d",&ini);
        printf("Increment value: ");
        scanf("%d", &inc);
        printf("Limit: ");
        scanf("%d", &lim);

        if(ini<lim)
        {
            for(i=ini; i<=lim; i+=inc)
            {
                printf("%d\t",i);
            }
            printf("\n\n");
        }
        else
        {
            printf("Wrong input\n");
        }
        break;
    case 'B':
    case 'b':
        printf("\nInitialization value: ");
        scanf("%d",&ini);
        printf("decrement value: ");
        scanf("%d", &dec);
        printf("Limit: ");
        scanf("%d", &lim);

        if(ini>lim)
        {
            for(i=ini; i>=lim; i-=dec)
            {
                printf("%d\t",i);
            }
            printf("\n\n");
        }
        else
        {
            printf("Wrong input\n");
        }
        break;
    default:
        printf("Wrong input\n");
    }
}

void alphaser()
{
    printf("\n========================================================\n");
    printf("Alphabet Series\n\n\n");
    int i, lim;
    char ini, a;
    int inc, dec;

    printf("\nPress F for Forward series\nor \nPress B for Backward series\n\n");
    scanf(" %c", &a);

    switch(a)
    {
    case 'F':
    case 'f':
        printf("\nInitialization value: ");
        scanf(" %c", &ini);
        printf("Increment value: ");
        scanf("%d", &inc);
        printf("Limit (as a character): ");
        scanf(" %c", &lim);

        if (ini < lim)
        {
            for (i = ini; i <= lim; i += inc)
            {
                printf("%c\t", i);
            }
            printf("\n\n");
        }
        else
        {
            printf("Wrong input\n");
        }
        break;

    case 'B':
    case 'b':
        printf("\nInitialization value: ");
        scanf(" %c", &ini);
        printf("Decrement value: ");
        scanf("%d", &dec);
        printf("Limit (as a character): ");
        scanf(" %c", &lim);

        if (ini > lim)
        {
            for (i = ini; i >= lim; i -= dec)
            {
                printf("%c\t", i);
            }
            printf("\n\n");
        }
        else
        {
            printf("Wrong input\n");
        }
        break;

    default:
        printf("Wrong input\n");
    }
}

void swap()
{
    printf("\n========================================================\n");
    printf("Number Swap\n\n\n");
    int x, y, temp;

    printf("Enter two numbers: \n");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x=%d, y=%d\n", x, y);

    temp = x;
    x = y;
    y = temp;

    printf("After swapping: x=%d, y=%d\n", x, y);
}

void bit()
{
    printf("\n========================================================\n");
    printf("Bitwise Operations\n\n\n");

    int a, b, c;

    printf("1. Bitwise AND operation\n");
    printf("2. Bitwise OR operation\n");
    printf("3. Bitwise XOR operation\n");
    printf("4. Bitwise Left Shift\n");
    printf("5. Bitwise Right Shift\n");
    printf("6. Bitwise NOT operation\n");
    printf("Select: ");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        printf("1. Bitwise AND operation\n");
        printf("Enter two numbers:\n");
        scanf("%d %d", &a, &b);
        printf("%d & %d = %d\n", a, b, a & b);
        break;

    case 2:
        printf("2. Bitwise OR operation\n");
        printf("Enter two numbers:\n");
        scanf("%d %d", &a, &b);
        printf("%d | %d = %d\n", a, b, a | b);
        break;

    case 3:
        printf("3. Bitwise XOR operation\n");
        printf("Enter two numbers:\n");
        scanf("%d %d", &a, &b);
        printf("%d ^ %d = %d\n", a, b, a ^ b);
        break;

    case 4:
        printf("4. Bitwise Left Shift\n");
        printf("Enter the value:\n");
        scanf("%d", &a);
        printf("Enter the amount of shift you need:\n");
        scanf("%d", &b);
        printf("%d << %d = %d\n", a, b, a << b);
        break;

    case 5:
        printf("5. Bitwise Right Shift\n");
        printf("Enter the value:\n");
        scanf("%d", &a);
        printf("Enter the amount of shift you need:\n");
        scanf("%d", &b);
        printf("%d >> %d = %d\n", a, b, a >> b);
        break;

    case 6:
        printf("6. Bitwise NOT operation\n");
        printf("Enter a number:\n");
        scanf("%d", &a);
        printf("~%d = %d\n", a, ~a);
        break;

    default:
        printf("Wrong input\n");
        break;
    }
}

void square()
{
    printf("\n========================================================\n");
    printf("Square of a Number\n\n\n");
    int k, s;
    printf("Enter a number : ");
    scanf("%d", &k);
    s = k*k;
    printf("Square = %d\n",s);
}

void cube()
{
    printf("\n========================================================\n");
    printf("Cube of a Number\n\n\n");
    int k, s;
    printf("Enter a number : ");
    scanf("%d", &k);
    s = k*k*k;
    printf("Cube = %d\n",s);
}

void root()
{
    printf("\n========================================================\n");
    printf("Square Root of a Number\n\n\n");
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Square root of %d is %lf\n", a, sqrt(a));
}

void area()
{
    printf("\n========================================================\n");
    printf("Area of a Circle\n\n\n");
    float pi = 3.1416, r;
    printf("Enter radius of a circle: ");
    scanf("%f", &r);

    float k = pi * r * r;

    printf("Area = %f\n", k);
}

void vol()
{
    printf("\n========================================================\n");
    printf("Volume of a Sphere\n\n\n");
    float pi = 3.1416, r;
    printf("Enter radius of a sphere: ");
    scanf("%f", &r);

    float k = pi * r * r* r;

    printf("Area = %f\n", k);
}

void slen()
{
    printf("\n========================================================\n");
    printf("String Length\n\n\n");
    char s2[50];
    gets(s2);
    printf("Length of 2nd string = %d\n",strlen(s2));
}

void scount()
{
    printf("\n========================================================\n");
    printf("Counting Alphabets, Digits, Spaces & Special Characters in a String\n\n\n");
    char str[100];
    gets(str);
    int alpha = 0, digit = 0, space=0, special = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        if(isalpha(str[i]) != 0 )
        {
            alpha++;
        }
        else if(isdigit(str[i]) != 0)
        {
            digit++;
        }
        else if(isspace(str[i]) != 0)
        {
            space++;
        }
        else
        {
            special++;
        }
        i++;
    }
    printf("Alphabet(s): %d\n", alpha);
    printf("Digit(s): %d\n", digit);
    printf("Space(s): %d\n", space);
    printf("Special character(s): %d\n", special);
}

void addition()
{
    printf("\n========================================================\n");
    printf("Summation\n\n\n");
    int n, i, s=0;
    printf("Number of elements you want to sum= ");
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("Summation= %d\n", s);
}

void subtraction()
{
    printf("\n========================================================\n");
    printf("Subtraction \n\n\n");
    int a, b, c=0;

    printf("Enter the first number and the second number: \n");
    scanf("%d%d", &a, &b);
    printf("The result of subtraction is: %d\n", a-b);

}

void multiplication()
{
    printf("\n========================================================\n");
    printf("Multiplication\n\n\n");
    int n, i, s=1;
    printf("Number of elements you want to multiply= ");
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        s=s*a[i];
    }
    printf("Multiplication= %d\n", s);
}

void division()
{
    printf("\n========================================================\n");
    printf("Division\n\n\n");
    int a,b;
    printf("Enter two numbers for division: \n ");
    scanf("%d%d",&a,&b);
    printf("%d / %d = %d\n",a,b,a/b);
}

void calculateRemainder()
{
    printf("\n========================================================\n");
    printf("Remainder\n\n\n");
    int a,b;
    printf("Enter dividend: ");
    scanf("%d",&a);
    printf("Enter divisor: ");
    scanf("%d",&b);
    printf("The remainder of %d divided by %d is: %d\n", a, b, a%b);
}

void factorial()
{
    printf("\n========================================================\n");
    printf("Factorial\n\n\n");
    int i, n, s=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        s=s*i;
    }
    printf("Factorial of %d is: %d\n",n,s);
}

void multitable()
{
    printf("\n========================================================\n");
    printf("Multiplication Table\n\n\n");
    int i, n;
    printf("Multiplication Table for number: ");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
        printf("%d x %d= %d\n",n,i,n*i);
}

void pyramid()
{
    printf("\n========================================================\n");
    printf("Pyramid\n\n\n");
    int t,r,c;
    printf("No. of rows you want to display: ");
    scanf("%d",&t);
    for(r = 1; r <= t; r++)
    {
        for(c = 1; c <=r; c++)
        {
            printf("%d ",c);
        }
        printf("\n");
    }
}