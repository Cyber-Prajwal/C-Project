#include <stdio.h>
#include<stdlib.h>
#include<strings.h>

int i=0;
char pswd[100];
struct passengerdetails
{
    char pfname[20];
    char plname[20];
    char aadhar[12];
    int covchoice;
    char cov[20];
    char meal[20];
    int mchoice;
    char dep[50];
    char des[50];
    long long int cont;
    char tct[100];
    int x[50];
    

}pgr[200];


void cov()
        {
           printf("\n\nCovid regulations and protocols\n\n");
                  printf("\n1.)Avoid touching surfaces"
                         "\n2.)Follow social distancing guidelines: Stay at least 6 feet away from other commuters and avoid gathering in groups."
                         "\n3.)Using public bathrooms at the train station: Wash your hands with soap and water for at least 20 seconds after using the public bathroom"
                         "\n4.)Carry your own water bottle and food packets, don’t accept or offer water bottles to other commuters."
                         "\n5.)Avoid spitting: This is a strict no no."
                         "\n6.)If possible, get an e-pass/ e-ticket so you don’t have to wait in serpentine queues to get your travel documents in order."
                         "\n7.)Choose to make contactless reservations and payments."
                         "\n8.)Travel in the non-peak hours."
                         "\n9.)Before you leave for work, wash your hands with soap and water and then wear your mask."
                         "\n10.) Wear gloves before you step out, these will work as a barrier if you end up touching door handles, railings etc."
                         "\n11.)ensure that you don’t touch your face during the transit and that you wash your hands thoroughly after getting work.\n");
                 

        

         }

void addetails()
          {
              FILE *ptr;
           char veg[20]="Vegetarian",nonveg[20]="Non-Vegetarian",jain[20]="Jain",
               pos[20]="Covid-positive",neg[20]="Covid-negative",risk[20]="At mild risk",report[20]="At high risk",sr[20]="Sr. No.";
              int flag=0,flag1=0,flag2=0;
  

    

              printf("\n\n\t\t\t\t\t\t\t\t\tEnter the Passenger details\n");
              if(i==0)
              ptr=fopen("Rimstest.c","w");
              else
              ptr=fopen("Rimstest.c","a+");
                  

              printf("\t\t\t\t\t\t\t\t\t\tName:\t\t\t");
              scanf("%s",pgr[i].pfname);
              printf("\t\t\t\t\t\t\t\t\t\tSurname:\t\t");
              scanf("%s",pgr[i].plname);
              printf("\t\t\t\t\t\t\t\t\t\tAadhar number:\t");
              scanf("%s",pgr[i].aadhar);
              printf("\t\t\t\t\t\t\t\t\t\tDeparture:\t\t");
              scanf("%s",pgr[i].dep);
              printf("\t\t\t\t\t\t\t\t\t\tDestination:\t");
              scanf("%s",pgr[i].des);
              

              printf("\t\t\t\t\t\t\t\t\t\tMeal Choice:");
              printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t1)Vegetarian\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t2)Non vegetarian\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t3)Jain\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
           do{
               scanf("%d",&pgr[i].mchoice);
                     switch(pgr[i].mchoice)
                             {
                                 case 1: strcpy(pgr[i].meal,veg);
                                        flag1=0;
                                             break;
                                 case 2:strcpy(pgr[i].meal,nonveg);
                                         flag1=0;
                                             break;
                                 case 3:strcpy(pgr[i].meal,jain);
                                        flag1=0;
                                             break;
                                 default:
                                     printf("Please enter a valid choice from 1/2/3.\n");
                                         flag1=1;
                                         break;
                                     

                             }
 

           }while(flag1!=0);

             printf("\t\t\t\t\t\t\t\t\t\tCovid-19:");
           do{
              printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t1)Covid positive\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t2)Covid negative\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t3)In contact with a covid positive person for past 15 days\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t4)Any symptoms of covid-19 in past week\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t5)Choose this option for more covid related guidelines\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
             scanf("%d",&pgr[i].covchoice);

                             switch(pgr[i].covchoice)
                                     {
                                         case 1: strcpy(pgr[i].cov,pos);
                                             flag2=0;
                                                 break;
                                         case 2:strcpy(pgr[i].cov,neg);
                                             flag2=0;
                                                 break;
                                         case 3:strcpy(pgr[i].cov,risk);
                                             flag2=0;
                                                 break;
                                         case 4:strcpy(pgr[i].cov,report);
                                             flag2=0;
                                                 break;
                                         

                                         case 5:
                                             if (flag==0)
                                             cov();
                                         

                                             else
                                               printf("Enter a valid choice among 1/2/3/4.\n");
                                             

                                                flag++;
                                                  break;
                                         default:printf("\nEnter a valid choice");
                                              flag2++;
                                                break;
                                     }
                       }while(pgr[i].covchoice==5||flag2!=0);//DEfault case condition to be checked.
                        

           printf("\t\t\t\t\t\t\t\t\t\tContact number:\t");
           scanf("%lld",&pgr[i].cont);
           

           printf("\n\t\t\t\t\t\t\t\t\t\tTicket number %s%s%s\n\n\n",pgr[i].dep,pgr[i].des,pgr[i].aadhar);
                     strcat(pgr[i].tct,pgr[i].dep);
                     strcat(pgr[i].tct,pgr[i].des);
                     strcat(pgr[i].tct,pgr[i].aadhar);
 

              if(i==0)
              

                  fprintf(ptr,"%s\t\tTicket Number\t\t\tFirst Name\t\tLast Name\tChoice Of meal\t\tCovid status\t\tContact no\n",sr);
        

                  fprintf(ptr,"%d\t\t\t%s\t\t%s\t\t\t%s\t\t%s\t\t\t%s\t\t%lld\n",i+1,pgr[i].tct,pgr[i].pfname,pgr[i].plname,pgr[i].meal,pgr[i].cov,pgr[i].cont);
              fclose(ptr);
                  

              

    i++;
    

    

}


void moretct()
        {
            printf("\t\t\t\t\t\t\t\tAlready Booked:%d\n\n",i);
            printf("\t\t\t\t\t\t\t\tCapacity to book:%d\n\n",200-i);
         }

void ticket_no()
       {
           char t[100],flag=0;
           

            printf("\t\t\t\t\t\tEnter ticket number:");
            scanf("%s",t);
           

            for(int j=0;j<i;j++)
                    {
                            if(!strcmp(t,pgr[j].tct))
                                    {
                                        

                                            printf("\nThe passenger details are as follows\n\n");
 printf("\t\t\t\t");                          printf("Ticket number:\n");
 printf("\t\t\t\t");                          printf("%s\n\n",pgr[j].tct);
 printf("\t\t\t\t");                          printf("First name of passenger:");
printf("\t\t\t\t");                            printf("\t\tLast name of passenger:\n");
printf("\t\t\t\t");                            printf("%s",pgr[j].pfname);
printf("\t\t\t\t");                            printf("\t\t\t\t\t\t\t%s\n\n",pgr[j].plname);
printf("\t\t\t\t");                            printf("Aadhar number:\n");
printf("\t\t\t\t");                            printf("%s\n",pgr[j].aadhar);
                                               printf("\n\t\t\t\tDeparture location:");
                                               printf("\t\t\\t\t\tDestination location:\n");
printf("\t\t\t\t");                            printf("%s",pgr[j].dep);
printf("\t\t\t\t");                            printf("\t\t\t\t\t\t%s\n\n",pgr[j].des);
printf("\t\t\t\t");                            printf("Choice of meal:");
printf("\t\t\t\t");                            printf("\t\t\tCovid-19   status:\n");
printf("\t\t\t\t");                             printf("%s",pgr[j].meal);
                                              

printf("\t\t\t\t");                             printf("\t\t\t\t\t%s\n\n",pgr[j].cov);
printf("\t\t\t\t");                              printf("Contact details:\n");
printf("\t\t\t\t");                              printf("%lld\n\n",pgr[j].cont);
                                              flag++;
                                        if(pgr[j].covchoice==3||pgr[j].covchoice==4)
                                        {
printf("\t\t\t\t");                                           printf("\n\t\tWarning:You need to generate a mandatory covid report on arrival\n\n");
                                        }
                                        

                                        if(pgr[j].covchoice==1)
                                        {
                                         printf("\n\t\tWarning:You won't be allowed to travel\n\n");
                                        }
                                              break;
                                    }
                 }
           

           if(flag==0)
                {
printf("\t\t\t\t");                    printf("Ticket number not found");
                }
           

}





void name()
{
     char name[20],flag=0;
      printf("\t\t\t\t\t\t\tEnter the first name:");
      scanf("%s",name);
      for(int j=0;j<i;j++)
                {
                        if(!strcmp(name,pgr[j].pfname))
                            {
                                printf("\nThe passenger details are as follows\n\n");
printf("\t\t\t\t");                          printf("Ticket number:\n");
printf("\t\t\t\t");                          printf("%s\n\n",pgr[j].tct);
printf("\t\t\t\t");                          printf("First name of passenger:");
printf("\t\t\t\t");                            printf("\t\tLast name of passenger:\n");
printf("\t\t\t\t");                            printf("%s",pgr[j].pfname);
printf("\t\t\t\t");                            printf("\t\t\t\t\t\t\t%s\n\n",pgr[j].plname);
printf("\t\t\t\t");                            printf("Aadhar number:\n");
printf("\t\t\t\t");                            printf("%s\n",pgr[j].aadhar);
                                   printf("\n\t\t\t\tDeparture location:");
                                   printf("\t\t\t\t\tDestination location:\n");
printf("\t\t\t\t");                            printf("%s",pgr[j].dep);
printf("\t\t\t\t");                            printf("\t\t\t\t\t\t%s\n\n",pgr[j].des);
printf("\t\t\t\t");                            printf("Choice of meal:");
printf("\t\t\t\t");                            printf("\t\t\tCovid-19   status:\n");
printf("\t\t\t\t");                             printf("%s",pgr[j].meal);
                                  

printf("\t\t\t\t");                             printf("\t\t\t\t\t%s\n\n",pgr[j].cov);
printf("\t\t\t\t");                              printf("Contact details:\n");
printf("\t\t\t\t");                              printf("%lld\n\n",pgr[j].cont);
                                  flag++;
                            if(pgr[j].covchoice==3||pgr[j].covchoice==4)
                            {
printf("\t\t\t\t");                                           printf("\n\t\tWarning:You need to generate a mandatory covid report on arrival\n\n");
                            }
                            

                            if(pgr[j].covchoice==1)
                            {
                             printf("\n\t\tWarning:You won't be allowed to travel\n\n");
                            }
                                

                            }
                            

                    }
                            if(flag==1)
                            printf("\t\t\t\tThere  is %d Person with entered name\n\n",flag);
                            else if(flag!=1)
                            printf("\t\t\t\tThere  are %d People with entered name\n\n",flag);
    

        

        if(flag==0)
                    {
                        printf("\\t\t\t\tnPassenger details not found\n\n");
                    }
        

}



        

void surname()
{
    char surname[20],flag=0;
    

    printf("\t\t\t\t\t\t\tEnter the surname:");
    scanf("%s",surname);
    

    for(int j=0;j<i;j++)
                {
                     if(!strcmp(surname,pgr[j].plname))
                                {
                                    printf("\nThe passenger details are as follows\n\n");
    printf("\t\t\t\t");                          printf("Ticket number:\n");
    printf("\t\t\t\t");                          printf("%s\n\n",pgr[j].tct);
    printf("\t\t\t\t");                          printf("First name of passenger:");
    printf("\t\t\t\t");                            printf("\t\tLast name of passenger:\n");
    printf("\t\t\t\t");                            printf("%s",pgr[j].pfname);
    printf("\t\t\t\t");                            printf("\t\t\t\t\t\t\t%s\n\n",pgr[j].plname);
    printf("\t\t\t\t");                            printf("Aadhar number:\n");
    printf("\t\t\t\t");                            printf("%s\n",pgr[j].aadhar);
                                       printf("\n\t\t\t\tDeparture location:");
                                       printf("\t\t\t\t\tDestination location:\n");
    printf("\t\t\t\t");                            printf("%s",pgr[j].dep);
    printf("\t\t\t\t");                            printf("\t\t\t\t\t\t%s\n\n",pgr[j].des);
    printf("\t\t\t\t");                            printf("Choice of meal:");
    printf("\t\t\t\t");                            printf("\t\t\tCovid-19   status:\n");
    printf("\t\t\t\t");                             printf("%s",pgr[j].meal);
                                      

    printf("\t\t\t\t");                             printf("\t\t\t\t\t%s\n\n",pgr[j].cov);
    printf("\t\t\t\t");                              printf("Contact details:\n");
    printf("\t\t\t\t");                              printf("%lld\n\n",pgr[j].cont);
                                      flag++;
                                if(pgr[j].covchoice==3||pgr[j].covchoice==4)
                                {
    printf("\t\t\t\t");                                           printf("\n\t\tWarning:You need to generate a mandatory covid report on arrival\n\n");
                                }
                                

                                if(pgr[j].covchoice==1)
                                {
                                 printf("\n\t\tWarning:You won't be allowed to travel\n\n");
                                }
                                    

                                }
                                

                        }
                                if(flag==1)
                                printf("\t\t\t\tThere  is %d Person with entered surname\n\n",flag);
                                else if(flag!=1)
                                printf("\t\t\t\tThere  are %d People with entered surname\n\n",flag);
        

            

            if(flag==0)
                        {
                            printf("\\t\t\t\tnPassenger details not found\n\n");
                        }
            

    }


 




void meal()
{
    int x,flag=0,flag1=0;
    

    printf("\t\t\t\t\t\t\t\t\tSort the passenger details by meal\n");
do{
    printf("\t\t\t\t\t\t\t\t\t\t1)Vegetarian\n\t\t\t\t\t\t\t\t\t\t2)Non vegetarian\n\t\t\t\t\t\t\t\t\t\t3)Jain\n");
    scanf("%d",&x);
    

    switch(x)
    {
     

        case 1:flag1=0;
        case 2:flag1=0;
        case 3:flag1=0;
    

    for(int j=0;j<i;j++)
            {
                    if(pgr[j].mchoice==x)
                        {
                            printf("\nThe passenger details are as follows\n\n");
printf("\t\t\t\t");                          printf("Ticket number:\n");
printf("\t\t\t\t");                          printf("%s\n\n",pgr[j].tct);
printf("\t\t\t\t");                          printf("First name of passenger:");
printf("\t\t\t\t");                            printf("\t\tLast name of passenger:\n");
printf("\t\t\t\t");                            printf("%s",pgr[j].pfname);
printf("\t\t\t\t");                            printf("\t\t\t\t\t\t\t%s\n\n",pgr[j].plname);
printf("\t\t\t\t");                            printf("Aadhar number:\n");
printf("\t\t\t\t");                            printf("%s\n",pgr[j].aadhar);
                               printf("\n\t\t\t\tDeparture location:");
                               printf("\t\t\t\t\tDestination location:\n");
printf("\t\t\t\t");                            printf("%s",pgr[j].dep);
printf("\t\t\t\t");                            printf("\t\t\t\t\t\t%s\n\n",pgr[j].des);
printf("\t\t\t\t");                            printf("Choice of meal:");
printf("\t\t\t\t");                            printf("\t\t\tCovid-19   status:\n");
printf("\t\t\t\t");                             printf("%s",pgr[j].meal);
                              

printf("\t\t\t\t");                             printf("\t\t\t\t\t%s\n\n",pgr[j].cov);
printf("\t\t\t\t");                              printf("Contact details:\n");
printf("\t\t\t\t");                              printf("%lld\n\n",pgr[j].cont);
                              flag++;
                        if(pgr[j].covchoice==3||pgr[j].covchoice==4)
                        {
printf("\t\t\t\t");                                           printf("\n\t\tWarning:You need to generate a mandatory covid report on arrival\n\n");
                        }
                        

                        if(pgr[j].covchoice==1)
                        {
                         printf("\n\t\tWarning:You won't be allowed to travel\n\n");
                        }
                        }
            } break;
    

        default:printf("\t\t\t\t\t\t\tEnter a valid choice:\n");
                flag1=1;
                break;
    

        

    }
}while(flag1!=0);
    

    if(flag==1)
    printf("\t\t\t\tThere  is %d Person with entered meal choice\n\n",flag);
    else if(flag!=1)
    printf("\t\t\t\tThere  are %d People with entered meal choice\n\n",flag);


if(flag==0)
{
printf("\\t\t\t\tnNo passenger has opted for entered meal option\n\n");
}


}




void covid()
{
    int x,flag=0,flag1=0;
    

    

    printf("\t\t\t\t\t\t\tSort passengers according to their covid reports\n");
    

    do{
        

    printf("\t\t\t\t\t\t\t\t1)Covid positive\n\t\t\t\t\t\t\t\t2)Covid negative\n\t\t\t\t\t\t\t\t3)At moderate risk\n\t\t\t\t\t\t\t\t4)At low risk\n");
    scanf("%d",&x);
     switch(x)
     {
         

         case 1:flag1=0;
         case 2:flag1=0;
         case 3:flag1=0;
    

    for(int j=0;j<i;j++)
                {
                        if(pgr[j].covchoice==x)
                                {
                                    

                                    printf("\nThe passenger details are as follows\n\n");
        printf("\t\t\t\t");                          printf("Ticket number:\n");
        printf("\t\t\t\t");                          printf("%s\n\n",pgr[j].tct);
        printf("\t\t\t\t");                          printf("First name of passenger:");
        printf("\t\t\t\t");                            printf("\t\tLast name of passenger:\n");
        printf("\t\t\t\t");                            printf("%s",pgr[j].pfname);
        printf("\t\t\t\t");                            printf("\t\t\t\t\t\t\t%s\n\n",pgr[j].plname);
        printf("\t\t\t\t");                            printf("Aadhar number:\n");
        printf("\t\t\t\t");                            printf("%s\n",pgr[j].aadhar);
                                       printf("\n\t\t\t\tDeparture location:");
                                       printf("\t\t\t\t\tDestination location:\n");
        printf("\t\t\t\t");                            printf("%s",pgr[j].dep);
        printf("\t\t\t\t");                            printf("\t\t\t\t\t\t%s\n\n",pgr[j].des);
        printf("\t\t\t\t");                            printf("Choice of meal:");
        printf("\t\t\t\t");                            printf("\t\t\tCovid-19   status:\n");
        printf("\t\t\t\t");                             printf("%s",pgr[j].meal);
                                      

        printf("\t\t\t\t");                             printf("\t\t\t\t\t%s\n\n",pgr[j].cov);
        printf("\t\t\t\t");                              printf("Contact details:\n");
        printf("\t\t\t\t");                              printf("%lld\n\n",pgr[j].cont);
                                      flag++;
                                if(pgr[j].covchoice==3||pgr[j].covchoice==4)
                                {
        printf("\t\t\t\t");                                           printf("\n\t\tWarning:You need to generate a mandatory covid report on arrival\n\n");
                                }
                                

                                if(pgr[j].covchoice==1)
                                {
                                 printf("\n\t\tWarning:You won't be allowed to travel\n\n");
                                }
        

                                }
                }break;
         default:printf("Please enter a valid choice:\n");
                flag1=1;
     }
    }while(flag1!=0);

    if(flag==1)
        printf("\t\t\t\t\t\t\tThere  is %d Person with entered covid status\n\n",flag);
    else if(flag!=1)
        printf("\t\t\t\t\t\t\tThere  are %d People with entered covid status\n\n",flag);

    if(flag==0)
    {
        printf("\n\t\t\t\t\t\tNo Passenger details with entered covid status found\n\n\n");
    }
    

}


void modify()
    {
    

        char choice[100];
        int n,flag=0,flag1=0;
        long long int x;
        char veg[20]="Vegetarian",nonveg[20]="Non-Vegetarian",jain[20]="Jain",
            pos[20]="Covid-positive",neg[20]="Covid-negative",risk[20]="At mild risk",report[20]="At high risk";
        

        printf("\t\t\t\t\t\tEnter the ticket number:");
        scanf("%s",choice);
        for(int j=0;j<i;j++)
        {
            if(!strcmp(pgr[j].tct,choice))
               {
                printf("\t\t\t\t\t\tEnter the details you would like to modify\n");
                   printf("\t\t\t\t\t\t\t1)First name\n\t\t\t\t\t\t\t2)Last name\n\t\t\t\t\t\t\t3)Meal choice\n\t\t\t\t\t\t\t4)Aadhar number\n\t\t\t\t\t\t\t5)Departure location\n\t\t\t\t\t\t\t6)Destination location\n\t\t\t\t\t\t\t7)Covid status\n\t\t\t\t\t\t\t8)Contact number\n");
                   scanf("%d",&n);
                 

                   switch(n)
                   {
                       case 1:printf("\t\t\t\t\t\tEnter the updated first name:");
                           scanf("%s",choice);
                           flag1++;
                           strcpy(pgr[j].pfname,choice);
                           break;
                           

                       case 2:printf("\t\t\t\t\t\tEnter the updated last name:");
                           scanf("%s",choice);
                           flag1++;
                           strcpy(pgr[j].plname,choice);
                           break;
                           

                       case 3:
                          

                           printf("\t\t\t\t\t\tEnter the UPDATED choice of meal:");
                           printf("\n\t\t\t\t\t\t\t1.Vegetarian\n\t\t\t\t\t\t\t2)Non vegetarian\n\t\t\t\t\t\t\t3)Jain\n");
                            scanf("%d",&pgr[j].mchoice);
                                  switch(pgr[j].mchoice)
                                          {
                                              case 1: strcpy(pgr[j].meal,veg);
                                                          break;
                                              case 2:strcpy(pgr[j].meal,nonveg);
                                                          break;
                                              case 3:strcpy(pgr[j].meal,jain);
                                                          break;
                                          }
                           flag1++;
                           break;
                           

                       case 4:printf("\t\t\t\t\t\tEnter the updated aadhar number:");
                           scanf("%s",choice);
                           strcpy(pgr[j].aadhar,choice);
                           flag++;
                           break;
                         

                       case 5:printf("\t\t\t\t\t\tEnter the updated departure location:");
                           scanf("%s",choice);
                           flag++;
                           strcpy(pgr[j].dep,choice);
                           

                           break;
                           

                    case 6:printf("\t\t\t\t\t\tEnter the updated destination location:");
                           scanf("%s",choice);
                           flag++;
                           strcpy(pgr[j].des,choice);
                           break;
                           

                    case 7:printf("\t\t\t\t\t\tEnter the updated covid status:");
                             

    

                         do{
                            printf("\n\t\t\t\t\t\t\t1)Covid positive\n\t\t\t\t\t\t\t2)Covid negative\n\t\t\t\t\t\t\t3)In contact with a covid positive person for past 15 days\n\t\t\t\t\t\t\t4)Any symptoms of covid-19 in past week\n\t\t\t\t\t\t\t5)Choose this option for more covid related guidelines\n");
                           scanf("%d",&pgr[j].covchoice);

                                           switch(pgr[j].covchoice)
                                                   {
                                                       case 1: strcpy(pgr[j].cov,pos);
                                                               break;
                                                       case 2:strcpy(pgr[j].cov,neg);
                                                               break;
                                                       case 3:strcpy(pgr[j].cov,risk);
                                                               break;
                                                       case 4:strcpy(pgr[j].cov,report);
                                                               break;
                                                       

                                                       case 5:
                                                           if (flag==0)
                                                           cov();
                                                       

                                                           else
                                                             printf("\t\t\t\t\t\tEnter a valid choice among 1/2/3/4.");
                                                           

                                                              flag++;
                                                            break;
                                                   }
                                     }while(pgr[j].covchoice==5);
                                      

                              flag1++;
                              break;
                       

                    case 8:printf("\t\t\t\t\t\t\tEnter the updated contact details\n");
                                 scanf("%lld",&x);
                                 flag1++;
                                 pgr[j].cont=x;
                                 break;
                           

                   default:printf("\t\t\t\t\t\t\tInvalid choice entered");
                           break;
                          

                      }
                   if(flag!=0)
                   {
                       printf("\t\t\t\t\t\t\tThe updated ticket number is %s%s%s\n",pgr[j].dep,pgr[j].des,pgr[j].aadhar);
                                

                                strcpy(pgr[j].tct,pgr[j].dep);
                            // strcat(pgr[j].tct,pgr[j].dep);
                                 strcat(pgr[j].tct,pgr[j].des);
                                 strcat(pgr[j].tct,pgr[j].aadhar);
                }
                   

            }
        }
        if (flag1!=0||flag!=0)
        {
            

            printf("\n\t\t\t\t\t\t\tThe details have been successfully modified\n\n");
        }
        else
        {
            printf("\n\t\t\t\t\t\t\tTicket number not found\n\n");
        }
  }
    

void delete()
    {
        int flag=0;
        char choice[50];
        printf("\t\t\t\t\t\t\tEnter the ticket number:");
        scanf("%s",choice);
        

      for(int j=0;j<i;j++)
         {
                 if(!strcmp(pgr[j].tct,choice))
                 {
                     

                             pgr[j]=pgr[j+1];
                             flag++;
                 }
         }
        if(flag!=0)
        printf("\t\t\t\t\t\t\tThe details have been successfully deleted\n\n");
        else
        printf("\t\t\t\t\t\t\tNo Passenger with entered ticket number found\n\n");

    }
    




void covdel()
   {
       int flag=0;
       

       

     for(int j=0;j<i;j++)
        {
                if(pgr[j].covchoice==1)
                {
                    

                            pgr[j]=pgr[j+1];
                            flag++;
                }
        }
       if(flag!=0)
       printf("\t\t\t\t\t\t\tThe details have been successfully deleted\n\n");
       else
           printf("\t\t\t\t\t\t\tNo Covid +ve passenger found\n\n");

}


void waitconf()
      {
          int j;
        for(int k=0;k<i;k++)
          {
          if(i<=170)
          {
              printf("\n\t\t\t\t\t\t\tThe passengers with confirmed booking are:\n\n");
              for(j=0;j<i;j++)
                          {
                                                 printf("\t\t\t\t\t\t\t\tTicket number:   ");
                                                 printf("\t\t\tFirst name of passenger:\n");
                                                 printf("\t\t\t\t\t\t\t\t%s",pgr[j].tct);
                                                 

                                                 printf("\t\t\t%s\n\n",pgr[j].pfname);
                        }
              printf("\t\t\t\t\t\t\t\tThere are %d confirmed tickets so far\n",j);
          }
          else if(i>170&&i<=200)
          {
              printf("\t\t\t\t\t\t\t\tThe passengers in waiting:\n");
              for(j=170;j<i;j++)
                          {
                                                 printf("\t\t\t\t\t\t\t\tTicket number:   ");
                                                 printf("\t\t\t\t\t\t\t\tFirst name of passenger:\n");
                                                 printf("\t\t\t\t\tf\t\t\t%s",pgr[j].tct);
                                                 

                                                 printf("\t\t\t%s\n\n",pgr[j].pfname);
                                           

                  

                                          }
              printf("\t\t\t\t\t\t\tThere are %d waiting tickets so far:\n",j-170);
                          }
          }
             

              

}

void locations()
{
    char departure[50],destination[50],flag=0;
    


    printf("\t\t\t\t\t\t\t\tEnter the departure:");
    scanf("%s",departure);
    printf("\t\t\t\t\t\t\t\tEnter the destination:");
    scanf("%s",destination);
    


    for(int j=0;j<i;j++)
                {
                     if(!strcmp(departure,pgr[j].dep) && !strcmp(destination,pgr[j].des))
                                {
                                    

                                    printf("\nThe passenger details are as follows\n\n");
    printf("\t\t\t\t");                          printf("Ticket number:\n");
    printf("\t\t\t\t");                          printf("%s\n\n",pgr[j].tct);
    printf("\t\t\t\t");                          printf("First name of passenger:");
    printf("\t\t\t\t");                            printf("\t\tLast name of passenger:\n");
    printf("\t\t\t\t");                            printf("%s",pgr[j].pfname);
    printf("\t\t\t\t");                            printf("\t\t\t\t\t\t\t%s\n\n",pgr[j].plname);
    printf("\t\t\t\t");                            printf("Aadhar number:\n");
    printf("\t\t\t\t");                            printf("%s\n",pgr[j].aadhar);
                                       printf("\n\t\t\t\tDeparture location:");
                                       printf("\t\t\t\t\tDestination location:\n");
    printf("\t\t\t\t");                            printf("%s",pgr[j].dep);
    printf("\t\t\t\t");                            printf("\t\t\t\t\t\t%s\n\n",pgr[j].des);
    printf("\t\t\t\t");                            printf("Choice of meal:");
    printf("\t\t\t\t");                            printf("\t\t\tCovid-19   status:\n");
    printf("\t\t\t\t");                             printf("%s",pgr[j].meal);
                                      

    printf("\t\t\t\t");                             printf("\t\t\t\t\t%s\n\n",pgr[j].cov);
    printf("\t\t\t\t");                              printf("Contact details:\n");
    printf("\t\t\t\t");                              printf("%lld\n\n",pgr[j].cont);
                                      flag++;
                                if(pgr[j].covchoice==3||pgr[j].covchoice==4)
                                {
    printf("\t\t\t\t");                                           printf("\n\t\tWarning:You need to generate a mandatory covid report on arrival\n\n");
                                }
                                

                                if(pgr[j].covchoice==1)
                                {
                                 printf("\n\t\tWarning:You won't be allowed to travel\n\n");
                                }
                                   

        


                                }
                }
        


        if(flag==0)
                    {
                        printf("\t\t\t\t\t\t\tNo Passengers found travelling from the location entered\n\n\n\n");
                    }
        


}
    

void enc()
{
    FILE *ptr,*temp;
    char c;
    ptr=fopen("Rimstest.c","r");
    temp=fopen("Rimsenc.c","w");
    c=fgetc(ptr);
    while(c!=EOF)
    {
        c=c+70;
        fputc(c,temp);
        c=fgetc(ptr);
    }
    fclose(temp);
    fclose(ptr);
    

    ptr=fopen("Rimstest.c","w");
    temp=fopen("Rimsenc.c","r");
    c=fgetc(temp);
    while(c!=EOF)
    {
        

        fputc(c,ptr);
        c=fgetc(temp);
    }
    fclose(temp);
    fclose(ptr);
    

    printf("\t\t\t\t\t\tSet a password to access decrypted file:");
    scanf("%s",pswd);
    

    printf("\t\t\t\t\t\tYour File has been successfully encrypted\n\n\n");
}

  void dec()
{
    FILE *ptr,*temp;
    char ver[50];
    char c;
    printf("\t\t\t\t\t\tEnter the password to decrypt the File:");
    scanf("%s",ver);
    if(strcmp(ver,pswd)==0)
        printf("\t\t\t\t\t\tEntered password is correct\n");
    else{
        printf("\t\t\t\t\t\tIncorrect password\n\nDecryption attempt unsuccessful\n");
        return;
    }
    ptr=fopen("Rimstest.c","w");
    temp=fopen("Rimsenc.c","r");
    c=fgetc(temp);
    while(c!=EOF)
    {
        c=c-70;
        fputc(c,ptr);
        c=fgetc(temp);
    }
    fclose(temp);
    fclose(ptr);
    

    printf("\t\t\t\tYour file has been successfully decrypted\n");
    

}


int main()
{
    int choice,flag=1,look = 1;
    

    

  

    do
    {
        if(i!=0)
        {
            printf("\t\t\t\t\t\t\t\t\t\t\t1)See the menu\n\t\t\t\t\t\t\t\t\t\t\t2)Exit");
            scanf("%d",&look);
            

        }
        if(look==1)
        {
        

        printf("\t\t\t\t\t\t\t*******Please select an option from menu below******\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t1.Enter Details\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t*Finding options\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t2.Details using ticket no.\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t3.Details using First name\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t4.Details using last name\n");
        

        

        printf("\n\t\t\t\t\t\t\t\t\t\t*Sorting options\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t5.Sort by meal\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t6.Sort by locations\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t7.Sort by covid-19 result\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t8.Sort by confirmed/waiting status.\n");

        

        printf("\n\t\t\t\t\t\t\t\t\t\t*Modification options\n");
    

        printf("\t\t\t\t\t\t\t\t\t\t\t9. Modify or delete\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t10. Encrypt the file data\n");
    

        

        printf("\n\t\t\t\t\t\t\t\t\t\t*Extra Functionalities\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t11.Decrypt the file data\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t12.More tickets to book.\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t13. To Exit\n\n\n\t\t\t\t\t\t\t\t\t\t");
        


        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            addetails();
            break;
        case 2:
            ticket_no();
            break;
        case 3:
            name();
            break;
        case 4:
            surname();
            break;
        case 5:
            meal();
            break;
        case 6:
                locations();
            break;
            case 7:
                covid();
                break;

            case 8:
                waitconf();
                break;
       

        

        case 9:
                printf("\n\n\t\t\t\t\t\t\tEnter the choice:");
                printf("\n\t\t\t\t\t\t\t\t1)Modify the details of a passenger\n");
                printf("\t\t\t\t\t\t\t\t2)Delete the details of a passenger\n");
                printf("\t\t\t\t\t\t\t\t3)Delete the details of covid positive or high risk patients\n");
                scanf("%d",&choice);
                    switch(choice)
                    {
                        case 1:modify();
                            break;
                        case 2:delete();
                            break;
                        case 3:covdel();
                            break;
                        default:printf("Invalid choice entered");
    

                    }break;

                

            case 10:
            enc();
            break;
                

       

                

        case 11:
            dec();
            break;
                

                

        case 12:
            moretct();
            break;
                

        case 13:
            flag=0;
            break;
        }
            

        }
        

        else{
            exit(0);
        }
  }while(flag==1);
    

    return 0;
}
