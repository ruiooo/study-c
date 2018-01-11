#include <stdio.h>
#include <stdint.h> //int扩展
#include <limits.h>
#include <float.h>
#include <string.h>

#define DENSITY 62.4
#define RUI "liusr"
#define PI 3.141593
#define PAGES 959
#define F_RUI 3852.99

int day6(void);
int day7(void);
int day8(void);
int day9(void);
int main(void) {
    //day1();

    //day 2

    // printf("I am Rui! ");
    // printf("haha.\n");
    // printf("This is num %d.\n", num);
    //
    // getchar();
    //day 3

    // float weight;
    // float value;
    // char string;
    //
    // string = 'liusr\a';
    // printf("My name is %c.\n", string);
    // return 0;
    //
    // printf("Are you worth your weight in platinum?\n");
    // printf("let's check it out.\n");
    // printf("Please enter your weight in pounds: ");
    //
    // scanf("%f", &weight);
    //
    // value = 1700 * weight * 14.5833;
    // printf("Yout weight in platinum is worth $%.2f.\n", value);
    // printf("You are easily worth that! If platinum prices drop,\n");
    // printf("eat more to maintain your value.\n");
    //
    // return 0;

    //day 4
    // char unsigned ch;
    //
    // printf("Please enter a character.\n");
    // scanf("%c", &ch);
    // printf("The code for %c is %d.\n", ch, ch);
    //
    // int_fast8_t num;
    // num = 127;
    // printf("%d\n", num);
    //
    // int x;
    // x = 22222;
    // printf("%d\n", x);
    //
    // printf("Type int has a size of %zd bytes.\n", sizeof(int));
    // printf("Type char has a size of %zd bytes.\n", sizeof(char));
    // printf("Type short has a size of %zd bytes.\n", sizeof(short));
    // printf("Type long has a size of %zd bytes.\n", sizeof(long));
    // printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
    // printf("Type float has a size of %zd bytes.\n", sizeof(float));
    // printf("Type double has a size of %zd bytes.\n", sizeof(double));
    // printf("Type long double has a size of %zd bytes.\n", sizeof(long double));

    //day 5
    //
    // int x;
    // scanf("%d", &x);
    // printf("num: %d\n", x);
    // day6();
    //day7();
    // day8();
    day9();
    return 0;
}

int day1(void) {
    /* code */
    int dogs;
    int num;
    num = 10;

    printf("How many dogs do you have?\n");
    scanf("%d", &dogs);
    printf("so you have %d dog(s)!\n", dogs);

    return 0;
}

int day6(void) {
    // float weight, volume;
    // int size, letters;
    // char name[40];
    //
    // printf("Hi! what's your first name?\n");
    // scanf("%s", name);
    // printf("%s, what's your weight in pounds?\n", name);
    // scanf("%f", &weight);
    // size = sizeof name;
    // letters = strlen(name);
    // volume = weight / DENSITY;
    // printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    // printf("Also, your first name has %d letters,\n", letters);
    // printf("and we have %d bytes to store it.\n", size);
    //
    int size1, size2;

    size1 = strlen(RUI);
    size2 = sizeof(RUI);

    printf("%d, %zd", size1, size2);

    return 0;
}

int day7(void) {
    // int size1, size2;
    // int num;
    // num = 10;
    // char name[2];
    //
    // scanf("%d", &num);
    // size1 = strlen(name);
    // size2 = sizeof(name);
    //
    // //printf("%d, %zd\n%zd, %zd\n", size1, size2, strlen(RUI), sizeof(RUI));
    // printf("%zd\n", num);


    // printf("Biggest int: %d\n", INT_MAX);
    // printf("Smallest long long: %lld\n", LLONG_MAX);
    // printf("One byte = %d bits on this system.\n", CHAR_BIT);
    // printf("Largest double: %e\n", DBL_MAX);
    // printf("Smallest normal float: %e\n", FLT_MIN);
    // printf("float precision = %d digits\n", FLT_DIG);
    // printf("float epsilon = %e\n", FLT_EPSILON);

    // int number = 7;
    // float pies = 12.75;
    // int cost = 7800;
    //
    // printf("The %d contestants ate %f berry pies.\n", number, pies);
    // printf("The value of pi is %f.\n", PI);
    // printf("Farewell! thou art too dear for my possessing,\n");
    // printf("%c%d\n", '$', 2 * cost);

    // printf("*%d*\n", PAGES);
    // printf("*%2d*\n", PAGES);
    // printf("*%3d*\n", PAGES);2
    // printf("*%6d*\n", PAGES);
    // printf("*%10d*\n", PAGES);
    // printf("*%-10d*\n", PAGES);
    // printf("*% d*\n", PAGES);
    //
    const double RENT = 3852.99;

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2ff*\n", RENT);

    return 0;
}

int day8(void) {
    char c;
    scanf("%s\n", &c);




    return 0;
}
//2018-01-15
int day9(void) {
    // int age;
    // float assets;
    // char pet[30];
    //
    // printf("Enter your age, assets, and favorite pet.\n");
    // scanf("%d %f", &age, &assets);
    // scanf("%s", pet);
    // printf("%d $%.2f %s\n", age, assets, pet);
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;
    int n;

    printf("Enter a field width:\n");
    scanf("%d", &width);
    printf("The number is :%*d:\n", width, number);
    printf("Now enter a width and a precision:\n");
    scanf("%d %d", &width, &precision);
    printf("weight = %*.*f\n", width, precision, weight);
    printf("Done!\n");


    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last integers was %d\n", n);


    return 0;
}
