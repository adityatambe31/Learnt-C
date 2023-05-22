#include<stdio.h>
#include<string.h>
struct number
{
    char first_name[50];
    char last_name[50];
    char phone_number[13];


};

int main()
{
    char fName[50];
    char lName[50];
    char pNumber[13];
    struct number n;

    printf("enter your first name: ");
    scanf("%s",&fName);
    strcpy(n.first_name,fName);

    printf("enter your last  name: ");
    scanf("%s",&lName);
    strcpy(n.last_name,lName);


    printf("enter your phone number: ");
    scanf("%s",&pNumber);
    strcpy(n.phone_number,pNumber);


    printf("your contact is saved in our lists, ");
    printf("According to the info you mentioned\n");
    printf("Your First Name is : %s \n",n.first_name);
    printf("Your Last  Name is : %s \n",n.last_name);
    printf("And Your Phone Number is : %s \n",n.phone_number);

return 0;
}