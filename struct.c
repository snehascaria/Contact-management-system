#include<stdio.h>
#include<string.h>
#define MAX_CONTACTS 100

struct Contacts
{
 char name[50];
 char ph[15];
 char em[50];
};

void display(struct Contacts c)
{
 printf("Name :%s\n",c.name);
 printf("Phone number:%s\n",c.ph);
 printf("Email address:%s\n",c.em);
}

int main()
{
 struct Contacts c[MAX_CONTACTS];
 int numContacts=0;
 int choice;
 int i;
 while(1)
 {
  printf("---------CONTACT MANAGEMENT--------\n");
  printf("1. ADD CONTACT\n");
  printf("2. VIEW CONTACT\n");
  printf("3. EXIT\n");
  printf("Enter your choice:");
  scanf("%d",&choice);

 switch(choice)
 {
  case 1 :
  if(numContacts<MAX_CONTACTS)
  {
   struct Contacts newContact;
   printf("Enter Name :");
   scanf(" %[^\n]",newContact.name);
   printf("Enter Phone number :");
   scanf(" %[^\n]",newContact.ph);
   printf("Enter Email address :");
   scanf(" %[^\n]",newContact.em);

   c[numContacts]=newContact;
   numContacts++;
   printf("Contact added sucessfully.\n");
  }
  else
  {
   printf("Contact limit reached. Cannot add more contacts.\n");
  }

 case 2 :
 if(numContacts==0)
 {
  printf("No contacts available.,");
 }
 else
 {
  printf("Contacts List:\n");
  for(int i=0;i<numContacts;i++);
  {
   printf("Contacts %d:\n",i+1);

 display(c[i]);
  }
 }
break;
 case 3 :
 printf("Exiting the contact management system.\n");
 return 0;

default:
printf("Invalid choice. Please try again.\n");
}
}
return 0;
}

