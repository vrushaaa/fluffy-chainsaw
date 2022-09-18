/*Student Management System*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[100];
    char branch[30];
    int rollno;
    char address[100];
}student;

int main()
{
    student s[100];
    int n,i,roll;
    printf("Student Management System");

    while(1)
    {
        int ch;
        printf("\nMENU");
        printf("\nPress 1: To enter details");
        printf("\nPress 2: To search details");
        printf("\nPress 3: To edit details");
        printf("\nPress 4: To display detsils");
        printf("\nPress 5: To exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: //To enter details
                    printf("\nEnter the number of students: ");
                    scanf("%d",&n);
                    printf("\nEnter the student details: ");
                    for(i=0;i<n;i++)
                    {
                        printf("\nEntry no %d",i+1);
                        printf("\nStudent name: ");
                        scanf("%s",s[i].name);
                        printf("\nStudent branch: ");
                        scanf("%s",s[i].branch);
                        printf("\nStudent roll no.: ");
                        scanf("%d",&s[i].rollno);
                        printf("\nStudent address: ");
                        scanf("%s",s[i].address);
                    }
                    break;

            case 2: //searching for details using rollno
                    printf("\nEnter the rollno to be searched: ");
                    scanf("%d",&roll);
                    for(i=0;i<n;i++)
                    {
                        if(s[i].rollno==roll)
                        {

                            printf("\nThe details of roll no %d are as follows: ",roll);
                            printf("\nStudent name: %s",s[i].name);
                            printf("\nStudent branch: %s",s[i].branch);
                            printf("\nStudent roll no.: %d",s[i].rollno);
                            printf("\nStudent address: %s",s[i].address);
                        }
                    }
                    break;

            case 3://To edit details
                    printf("\nEnter the rollno to edit details: ");
                    scanf("%d",&roll);
                    for(i=0;i<n;i++)
                    {
                        if(s[i].rollno==roll)
                        {
                            int ch1;
                            printf("\nMENU for Editing details");
                            printf("\nPress 1: To edit name");
                            printf("\nPress 2: To edit rollno");
                            printf("\nPress 3: To edit branch");
                            printf("\nPress 4: To edit address");
                            printf("\nEnter your choice: ");
                            scanf("%d",&ch1);

                            switch(ch1)
                            {
                                case 1: printf("\nStudent name: ");
                                        scanf("%s",s[i].name);
                                        break;

                                case 2: printf("\nStudent roll no.: ");
                                        scanf("%d",&s[i].rollno);
                                        break;

                                case 3: printf("\nStudent branch: ");
                                        scanf("%s",s[i].branch);
                                        break;

                                case 4: printf("\nStudent address: ");
                                        scanf("%s",s[i].address);
                                        break;

                                default: printf("Incorrect choice.");
                            }

                            printf("\nThe details of roll no %d after editing are: ",roll);
                            printf("\nStudent name: %s",s[i].name);
                            printf("\nStudent branch: %s",s[i].branch);
                            printf("\nStudent roll no.: %d",s[i].rollno);
                            printf("\nStudent address: %s",s[i].address);
                        }
                    }
                    break;

            case 4: //To display student details
                    printf("\nThe student details are as follows: ");
                    for(i=0;i<n;i++)
                    {
                        printf("\nEntry no %d",i+1);
                        printf("\nStudent name: %s",s[i].name);
                        printf("\nStudent branch: %s",s[i].branch);
                        printf("\nStudent roll no.: %d",s[i].rollno);
                        printf("\nStudent address: %s",s[i].address);
                    }
                    break;

            case 5: exit(0);

            default:printf("Incorrect choice.");
        }

    }
    return 0;
}

