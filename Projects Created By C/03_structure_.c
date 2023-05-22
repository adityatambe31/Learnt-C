/* #include<stdio.h>
struct student
{
    char Name[50];
    int roll_number;
    int marks[3];

};
int main()
{
    struct student s1;
    int total_marks = 0;
    printf("Enter your name: ");
    scanf("%s", s1.Name);

    printf("Enter your Roll Number: ");
    scanf("%d", &s1.roll_number);

    printf("Enter your marks: ");
    scanf("%d", &s1.marks);

    for (int i = 0; i<3; i++ )
    {
        scanf("%d", &s1.marks[i]);
        total_marks += s1.marks[i];
    }

    if ("Marks >= 150")
    {
        printf("you are pass\n",s1.Name, s1.marks);
    }
    else if("Marks >= 200  ")
    {
        printf("you are pass, with decent score\n",s1.Name, s1.marks);
    }
    else if("Marks >= 250 ")
    {
        printf("you are pass with good score, keep it up!!\n",s1.Name, s1.marks);
    }
    else if("Marks >= 275 ")
    {
        printf("you are pass with a great score nearly a topper!!\n",s1.Name, s1.marks);
    }
    else if("Marks >= 290 ")
    {
        printf("you are pass with a great score and a topper, congrats!!\n",s1.Name, s1.marks);
    }
    
    else
    {
        printf("Kindly enter the marks according to instruction provided!! ");
    }

return 0;
}*/

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
scanf("%d", &p1.age);
scanf("%.1f", &p1.weight);
scanf("%.1f", &p1.height);

printf("age of the person = %d\n",p1.age);
printf("weight of the person = %.1f\n",p1.weight);
printf("height of the person = %.1f\n",p1.height);

return 0;
}