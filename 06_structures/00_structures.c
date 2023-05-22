#include<stdio.h>

struct Person
{
int age;
float weight;
float height;
};
int main()
{
struct Person p1;
p1.age = 17;
p1.weight = 55.5;
p1.height = 5.7;

printf("age of the person = %d\n",p1.age);
printf("weight of the person = %.1f\n",p1.weight);
printf("height of the person = %.1f\n",p1.height);

struct Person p2;
p2.age = 18;
p2.weight = 55.5;
p2.height = 5.9;

printf("age of the person = %d\n",p2.age);
printf("weight of the person = %.1f\n",p2.weight);
printf("height of the person = %.1f\n",p2.height);

struct Person p3;
p3.age = 19;
p3.weight = 57.5;
p3.height = 5.8;

printf("age of the person = %d\n",p3.age);
printf("weight of the person = %.1f\n",p3.weight);
printf("height of the person = %.1f\n",p3.height);

    return 0;
}