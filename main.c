#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

struct student{
    char board_roll[30];
    char name[20];
    char add[50];
    char fname[20];
    char course[10];
    char stream[20];
    int age;
    long unsigned int phone_no;
};
struct student stu;
void add_student_btech(){
    int ch;
    FILE *fp;
    fp = fopen("btech.txt","a+");
    if(fp == NULL){
        MessageBox(0,"Error in Opening file\nMake sure your file is not write protected","Warning",0);

    }else{
        fflush(stdin);
        printf("Enter Board Roll No: ");gets(stu.board_roll);
        printf("Enter Name: ");gets(stu.name);
        printf("Enter Address: ");gets(stu.add);
        printf("Enter Father's name: ");gets(stu.fname);
        printf("Enter course name: ");gets(stu.course);
        printf("Enter Stream: ");gets(stu.stream);
        printf("Enter age(in number): ");scanf("%d",&stu.age);
        printf("Phone Number(in number): ");scanf("%ld",&stu.phone_no);
        fwrite(&stu, sizeof(stu), 1, fp);
        printf("****************************************************\n");
        printf("The record is successfully added");
    }

    fclose(fp);
    printf("\n");
    printf("Press any number for continue\n");
    scanf("%d",&ch);
    menu();
    return;
}
void add_student_bba(){
    int ch;
    FILE *fp;
    fp = fopen("bba.txt","a+");
    if(fp == NULL){
        MessageBox(0,"Error in Opening file\nMake sure your file is not write protected","Warning",0);

    }else{
        fflush(stdin);
        printf("Enter Board Roll No: ");gets(stu.board_roll);
        printf("Enter Name: ");gets(stu.name);
        printf("Enter Address: ");gets(stu.add);
        printf("Enter Father's name: ");gets(stu.fname);
        printf("Enter course name: ");gets(stu.course);
        printf("Enter Stream: ");gets(stu.stream);
        printf("Enter age(in number): ");scanf("%d",&stu.age);
        printf("Phone Number(in number): ");scanf("%ld",&stu.phone_no);
        fwrite(&stu, sizeof(stu), 1, fp);
        printf("****************************************************\n");
        printf("The record is sucessfully added");
    }

    fclose(fp);
    printf("\n");
    printf("Press any number for continue\n");
    scanf("%d",&ch);
    menu();
    return;
}
void add_student_bca(){
    int ch;
    FILE *fp;
    fp = fopen("bca.txt","a+");
    if(fp == NULL){
        MessageBox(0,"Error in Opening file\nMake sure your file is not write protected","Warning",0);

    }else{
        fflush(stdin);
        printf("Enter Board Roll No: ");gets(stu.board_roll);
        printf("Enter Name: ");gets(stu.name);
        printf("Enter Address: ");gets(stu.add);
        printf("Enter Father's name: ");gets(stu.fname);
        printf("Enter course name: ");gets(stu.course);
        printf("Enter Stream: ");gets(stu.stream);
        printf("Enter age(in number): ");scanf("%d",&stu.age);
        printf("Phone Number(in number): ");scanf("%ld",&stu.phone_no);
        fwrite(&stu, sizeof(stu), 1, fp);
        printf("****************************************************\n");
        printf("The record is sucessfully added");
    }

    fclose(fp);
    printf("\n");
    printf("Press any number for continue\n");
    scanf("%d",&ch);
    menu();
    return;
}
void main_menu()
{
    printf("\n\n\n");
    printf("              -------------------------------------------\n");
    printf("              |                                         |\n");
    printf("              |        ___ _____  _____  ____ _____     |\n");
    printf("              |       |     |   |   |   |       |       |\n");
    printf("              |       |__   |   |   |   |___    |       |\n");
    printf("              |          |  |   |   |   |       |       |\n");
    printf("              |       ___| _|___/ __|__ |____   |       |\n");
    printf("              |                                         |\n");
    printf("              |                                         |\n");
    printf("              -------------------------------------------\n");
    printf("\n");
    printf("    {Satyug Darshan Institute Of Engineering and Technology,Faridabad}\n");
    printf("\n");
    printf("Enter 'SDIET' for further process: \n");
}
void menu()
{
    int choice;
    system("cls");
    printf("\n\n\n");
    printf("              *********************************************\n");
    printf("              ||||****************MENU*****************||||\n");
    printf("                    --------------------------------- \n");
    printf("                    --------------------------------- \n");
    printf("                  ||    1. | About SDIET           ||\n");
    printf("                  ||    2. | Courses Offered       ||\n");
    printf("                  ||    3. | Scholarships Program  ||\n");
    printf("                  ||    4. | Admission Session     ||\n");
    printf("                  ||    5. | Fee Structure         ||\n");
    printf("                  ||    6. | Contact Details       ||\n");
    printf("                  ||    7. | Student Information   ||\n");
    printf("                  ||    8. | Exit                  ||\n");
    printf("                    ----------------------------------\n");
    printf("                    --------------------------------- \n");
    printf("              *********************************************\n");
    printf("         \n Enter your Choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        about();
        break;
    case 2:
        courses();
        break;
    case 3:
        scholarship();
        break;
    case 4:
        admission();
        break;
    case 5:
        fee();
        break;
    case 6:
        contact();
        break;
    case 7:
        system("cls");
        Faculty();
        break;
    case 8:
        drop();
        break;
    default:
        system("cls");
        printf("******Please Choose right option from the given Menu******\n");
        menu();
    }

}
void about()
{
int ch;
system("cls");
printf("\n");
printf("_____________________________________________________KEY POINTS OF SDIET______________________________________________________________\n");
printf("______________________________________________________________________________________________________________________________________\n");
printf("* Established in 2012 and located in Faridabad, Haryana.\n");
printf("* Premier college for highest academic standards, different engineering educational programs, grand faculty.\n");
printf("* Affiliated by J C Bose University of Science and Technology.\n");
printf("* Sustained the highest global standards and best practices in higher education.\n");
printf("* Great transport facilities\n");
printf("* Central Library is well equipped with modern facilities and resources\n");
printf("* Spread across 17 acres within 37 acres complex of Satyug Darshan Vasundhara.\n");
printf("* Campus master plan is designed for a peaceful & pollution; free nature. \n");
printf("* Our aim is to provide learning through hands-on practice in labs, workshops, and live projects along with regular classroom teaching.\n");
printf("* SDIET is committed to transform its students into industry ready and value based professionals \n");
printf("* SDIET offers state of the art facilities for overall development of students\n");
printf("_______________________________________________________________________________________________________________________________________\n");
printf("\n");
    printf("Press any number for menu\n");
    scanf("%d",&ch);
    menu();
}
void courses()
{
    int ch;
    system("cls");
    printf("\n\n\n");
    printf("                             COURSES OFFERED ARE                            \n");
    printf("        ********************************************************************\n");
    printf("        --------------------------------------------------------------------\n");
    printf("        |  1. BE/B.Tech(Bachelor of Engineering or Technology):            |\n");
    printf("        |          -> CSE-Computer Science Engineering                     |\n");
    printf("        |          -> CE-Civil Engineering                                 |\n");
    printf("        |          -> ECE-Electronics and Tele-Communication Engineering   |\n");
    printf("        |          -> ME-Mechanical Engineering                            |\n");
    printf("        |          -> EE-Electrical Engineering                            |\n");
    printf("        -------------------------------------------------------------------|\n");
    printf("        |  2. BBA(Bachelors of Business Administration):                   |\n");
    printf("        |          -> BBA (GENERAL)                                        |\n");
    printf("        |          -> BBA (INDUSTRY INTEGRATED)                            |\n");
    printf("        |          -> BBA (DIGITAL MARKETING                               |\n");
    printf("        -------------------------------------------------------------------|\n");
    printf("        |  3. BCA(Bachelor Of Computer Applications):                      |\n");
    printf("        |          ->BCA-Data Science                                      |\n");
    printf("        --------------------------------------------------------------------\n");
    printf("        ********************************************************************\n");
    printf("\n");
    printf("        Press any number for menu\n");
    scanf("%d",&ch);
    menu();

}
void scholarship()
{
int choice;
int ch;
system("cls");
printf("\n\n");
printf("    **********Choose your Course for Scholarship**********\n");
printf("            1. B.Tech\n");
printf("            2. BBA\n");
printf("            3. BCA\n");
printf("            4. Back\n");
printf("            5. Other Scholarships\n");
printf("\n");
printf("      Enter your choice(1/2/3/4/5):\n");
scanf("%d",&choice);
switch(choice)
{
case 1:

    system("cls");
    printf("\n\n");
    printf("______________________________B.Tech__________________________________________\n");
    printf("------------------------------------------------------------------------------\n");
    printf("Percentage in 12th Class | JEE Main All India Rank | Total Percent Scholarship\n");
    printf("______________________________________________________________________________\n");
    printf("  *90 & above            |      upto 75000         |       100                \n");
    printf("  *85-89.9               |     75001-150000        |       70                 \n");
    printf("  *80-84.9               |    150001-200000        |       40                 \n");
    printf("  *75-79.9               |    200001-250000        |       10                 \n");
    printf("______________________________________________________________________________\n");
    printf("******************************************************************************\n");
    printf("\n");
    printf("Press any number for menu\n");
    scanf("%d",&ch);
    menu();
    break;

case 2:
    system("cls");
    printf("\n\n");
    printf("_______________________ BBA ________________________\n");
    printf("----------------------------------------------------\n");
    printf("Percentage in 12th Class | Total Percent Scholarship\n");
    printf("____________________________________________________\n");
    printf("  *90 & above            |       100                \n");
    printf("  *85-89.9               |       70                 \n");
    printf("  *80-84.9               |       40                 \n");
    printf("  *75-79.9               |       10                 \n");
    printf("____________________________________________________\n");
    printf("****************************************************\n");
    printf("\n");
    printf("Press any number for menu\n");
    scanf("%d",&ch);
    menu();
    break;



case 3:
    system("cls");
    printf("\n\n");
    printf("_______________________ BCA ________________________\n");
    printf("----------------------------------------------------\n");
    printf("Percentage in 12th Class | Total Percent Scholarship\n");
    printf("____________________________________________________\n");
    printf("  *90 & above            |       100                \n");
    printf("  *85-89.9               |       70                 \n");
    printf("  *80-84.9               |       40                 \n");
    printf("  *75-79.9               |       10                 \n");
    printf("____________________________________________________\n");
    printf("****************************************************\n");
    printf("\n");
    printf("Press any number for menu.\n");
    scanf("%d",&ch);
    menu();
    break;
case 4:
    menu();
    break;
case 5:
    system("cls");
    printf("\n\n");
    printf("-------------------------------------------------------------------------------------\n");
    printf("* Special one-time scholarship for girls (B.Tech - 15,000/BBA - 10,000/BCA - 10,000) \n");
    printf("* Concession for sibilings in tution fee\n");
    printf("* Scholarship under sports quota for national/state player\n");
    printf("-------------------------------------------------------------------------------------\n");
    printf("\n");
    printf("Press any number for menu.\n");
    scanf("%d",&ch);
    menu();
    break;
}
}

void admission()
{
    int ch;
    system("cls");
    printf("\n");
    printf("----------------------------\n");
    printf("Please choose your stream...\n");
    printf("      1. B.tech       \n");
    printf("      2.  BBA         \n");
    printf("      3.  BCA         \n");
    printf("----------------------------\n");
    printf("\n");
    printf("Choose your stream number\n");

    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        system("cls");
        add_student_btech();
        break;
    case 2:
        system("cls");
        add_student_bba();
        break;
    case 3:
        system("cls");
        add_student_bca();
        break;

    }


}
void fee()
{
    int ch;
    system("cls");
    printf("\n\n");
    printf("**************************************************************************\n");
    printf("|                Course                    |  Duration   |       Fees    |\n");
    printf("**************************************************************************\n");
    printf("| Bachelor of Technology [B.Tech]          |  4 years    |  	2,29,908 |\n");
    printf("|Bachelor of Business Administration [BBA] |  3 years    |      1,80,000 |\n");
    printf("|Bachelor of Computer Applications [BCA]   |  3 years    |      2,00,000 |\n");
    printf("**************************************************************************\n");
    printf("\n");
    printf("Press any number for menu.\n");
    scanf("%d",&ch);
    menu();
}
void contact()
{
    int ch;
    system("cls");
    printf("\n\n");
    printf("*************************************************************************\n");
    printf("Satyug Darshan Institute of Engineering and Technology (SDIET), Faridabad\n");
    printf("              Bhupani- Lalpur Raod Bhupani      \n");
    printf("              Faridabad, Haryana - 121002       \n");
    printf("                     7838800000                 \n");
    printf("                  info@satyug.edu.in            \n");
    printf("                http://www.satyug.edu.in/       \n");
    printf("--------------------------------------------------------------------------\n");
    printf("Facebook: https://www.facebook.com/satyugdarshantechnicalcampus/          \n");
    printf("Instagram: http://%20https//www.instagram.com/sdietfbd/                   \n");
    printf("linkedin: https://www.linkedin.com/in/sdiet/                              \n");
    printf("**************************************************************************\n");
    printf("\n");
    printf("Press any number for menu.\n");
    scanf("%d",&ch);
    menu();
}
void Faculty()
{
    char password[128], c;
    int index = 0;
    int ch;
    int value;
    char b[]={'A','M','A','N','D','E','E','P','\0'};
    printf("Enter Password : \n");
    /* 13 is ASCII value of Enter key */
    while((c = getch()) != 13){
        if(index < 0)
            index = 0;
        /* 8 is ASCII value of BACKSPACE character */
        if(c == 8){
            putch('\b');
            putch(NULL);
            putch('\b');
            index--;
        continue;
        }
        password[index++] = c;
        putch('*');
    }
    password[index] = '\0';
    printf("\nPassword String = %s", password);
    value=strcmp(password,b);
    if(value==0)
    {
        system("cls");//use to clear the screen like we use clrscr() command in turbo
        faculty_menu();
    }
    else{
        system("cls");
        printf("\n");
        printf("***Sorry ,but this menu option is only for College Department***\n");
        printf("    You can contact for edit in your informtion\n");
        printf("\n");
        printf("Press any number for menu.\n");
        scanf("%d",&ch);
        system("cls");
        menu();
    }


}
void faculty_menu()
{
    int ch;
    int choice;
    printf("\n\n");
    printf("_________________________________________________________\n");
    printf("College Department menu for Editing in Students records:\n");
    printf("   1. Add Record of the Student\n");
    printf("   2. Search Record of the student\n");
    printf("   3. Modify general records\n");
   // printf("   4. Delete student records\n");
    printf("   4. Menu\n");
    printf("   5. Show All records \n");
    printf("__________________________________________________________\n");
    printf("\n");
    printf("Enter your number-\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        admission();
        break;
    case 2:

        system("cls");
        printf("\n");
        printf("----------------------------\n");
        printf("Please choose your stream...\n");
        printf("      1. B.tech       \n");
        printf("      2.  BBA         \n");
        printf("      3.  BCA         \n");
        printf("----------------------------\n");
        printf("\n");
        printf("Choose your stream number to search the record\n");

        scanf("%d",&choice);
        if(choice==1)
        {
           system("cls");
           search_student_btech();
        }
        else if(choice==2)
        {
            system("cls");
            search_student_bba();
        }
        else if(choice==3)
        {
            system("cls");
            search_student_bca();
        }
        else
        {
            system("cls");
            printf("You have not choose correct option!Please try again\n");
            faculty_menu();
        }
        break;
    case 3:
        system("cls");
        printf("\n");
        printf("----------------------------\n");
        printf("Please choose your stream...\n");
        printf("      1. B.tech       \n");
        printf("      2.  BBA         \n");
        printf("      3.  BCA         \n");
        printf("----------------------------\n");
        printf("\n");
        printf("Choose your stream number to modify the record\n");

        scanf("%d",&choice);
        if(choice==1)
        {
           system("cls");
           mod_student_btech();
        }
        else if(choice==2)
        {
            system("cls");
            mod_student_bba();
        }
        else if(choice==3)
        {
            system("cls");
            mod_student_bca();
        }
        else
        {
            system("cls");
            printf("You have not choose correct option!Please try again\n");
            faculty_menu();
        }
        break;
    case 4:
        system("cls");
        menu();
        break;
    case 5:
        system("cls");
        printf("\n");
        printf("----------------------------\n");
        printf("Please choose your stream...\n");
        printf("      1. B.tech       \n");
        printf("      2.  BBA         \n");
        printf("      3.  BCA         \n");
        printf("----------------------------\n");
        printf("\n");
        printf("Choose your stream number to show all the record\n");

        scanf("%d",&choice);
        if(choice==1)
        {
           system("cls");
           show_all_btech();
        }
        else if(choice==2)
        {
            system("cls");
            show_all_bba();
        }
        else if(choice==3)
        {
            system("cls");
            show_all_bca();
        }
        else
        {
            system("cls");
            printf("You have not choose correct option!Please try again\n");
            faculty_menu();
        }
        break;
    default:
        system("cls");
        printf("You have not choose correct option!Please try again\n");
        faculty_menu();
        break;


    }

}
void search_student_btech(){
    char s_id[15];
    int isFound = 0;
    int ch;
    printf("Enter ID to Search: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("btech.txt","r");
    while(fread(&stu,sizeof(stu),1,fp) == 1){
        if(strcmp(s_id,stu.board_roll) == 0){
            isFound = 1;
            break;
        }
    }
    if(isFound == 1){
        printf("The record is Found\n");
        printf("\n");
        printf("Board Roll.no: %s\n",stu.board_roll);
        printf("-------------------------------------------\n");
        printf("Name: %s\n",stu.name);
        printf("-------------------------------------------\n");
        printf("Address: %s\n",stu.add);
        printf("-------------------------------------------\n");
        printf("Father's Name: %s\n",stu.fname);
        printf("-------------------------------------------\n");
        printf("Course: %s\n",stu.course);
        printf("-------------------------------------------\n");
        printf("Stream: %s\n",stu.stream);
        printf("-------------------------------------------\n");
        printf("Age: %d\n",stu.age);
        printf("-------------------------------------------\n");
        printf("Phone No: %ld\n",stu.phone_no);
    }else{
        system("cls");
        printf("Sory, No record found in the database,try again\n");
        search_student_btech();
    }
    fclose(fp);
    printf("\n");
    printf("Press any number for faculty menu.\n");
    scanf("%d",&ch);
    system("cls");
    faculty_menu();
    return;
}
void search_student_bba(){
    char s_id[15];
    int ch;
    int isFound = 0;
    printf("Enter ID to Search: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("bba.txt","r");
    while(fread(&stu,sizeof(stu),1,fp) == 1){
        if(strcmp(s_id,stu.board_roll) == 0){
            isFound = 1;
            break;
        }
    }
    if(isFound == 1){
        printf("The record is Found\n");
        printf("\n");
        printf("Board Roll.no: %s\n",stu.board_roll);
        printf("-------------------------------------------\n");
        printf("Name: %s\n",stu.name);
        printf("-------------------------------------------\n");
        printf("Address: %s\n",stu.add);
        printf("-------------------------------------------\n");
        printf("Father's Name: %s\n",stu.fname);
        printf("-------------------------------------------\n");
        printf("Course: %s\n",stu.course);
        printf("-------------------------------------------\n");
        printf("Stream: %s\n",stu.stream);
        printf("-------------------------------------------\n");
        printf("Age: %d\n",stu.age);
        printf("-------------------------------------------\n");
        printf("Phone No: %ld\n",stu.phone_no);
    }else{
        system("cls");
        printf("Sory, No record found in the database,try again\n");
        search_student_btech();
    }
    fclose(fp);
    printf("\n");
    printf("Press any number for faculty menu.\n");
    scanf("%d",&ch);
    system("cls");
    faculty_menu();
    return;
}
void search_student_bca(){
    char s_id[15];
    int ch;
    int isFound = 0;
    printf("Enter ID to Search: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("bca.txt","r");
    while(fread(&stu,sizeof(stu),1,fp) == 1){
        if(strcmp(s_id,stu.board_roll) == 0){
            isFound = 1;
            break;
        }
    }
    if(isFound == 1){
        printf("The record is Found\n");
        printf("\n");
        printf("Board Roll.no: %s\n",stu.board_roll);
        printf("-------------------------------------------\n");
        printf("Name: %s\n",stu.name);
        printf("-------------------------------------------\n");
        printf("Address: %s\n",stu.add);
        printf("-------------------------------------------\n");
        printf("Father's Name: %s\n",stu.fname);
        printf("-------------------------------------------\n");
        printf("Course: %s\n",stu.course);
        printf("-------------------------------------------\n");
        printf("Stream: %s\n",stu.stream);
        printf("-------------------------------------------\n");
        printf("Age: %d\n",stu.age);
        printf("-------------------------------------------\n");
        printf("Phone No: %ld\n",stu.phone_no);
    }else{
        system("cls");
        printf("Sory, No record found in the database,try again\n");
        search_student_btech();
    }
    fclose(fp);
    printf("\n");
    printf("Press any number for faculty menu.\n");
    scanf("%d",&ch);
    system("cls");
    faculty_menu();
    return;
}
void mod_student_btech(){
    char s_id[15];
    int ch;
    int isFound = 0;
    printf("Enter ID to Modify: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("btech.txt","r+");
    while(fread(&stu, sizeof(stu),1,fp) == 1){
        if(strcmp(s_id, stu.board_roll) == 0){
            fflush(stdin);
            printf("\n");
            printf("---------------------------------------------------\n");
            printf("Enter Board Roll No: \n");gets(stu.board_roll);
            printf("Enter Name: \n");gets(stu.name);
            printf("Enter Address: \n");gets(stu.add);
            printf("Enter Father's name: \n");gets(stu.fname);
            printf("Enter course name: \n");gets(stu.course);
            printf("Enter Stream: \n");gets(stu.stream);
            printf("Enter age: \n");scanf("%d",&stu.age);
            printf("Phone Number: \n");scanf("%ld",&stu.phone_no);
            printf("----------------------------------------------------\n");
            printf("Record Modified");
            fseek(fp,-sizeof(stu), SEEK_CUR);
            fwrite(&stu,sizeof(stu), 1, fp);
            isFound = 1;
            break;
        }
    }
    if(!isFound){
        printf("No Record Found");
    }
    fclose(fp);
    printf("\n");
    printf("Press any number for faculty menu.\n");
    scanf("%d",&ch);
    system("cls");
    faculty_menu();
    return;
}
void mod_student_bba(){
    char s_id[15];
    int ch;
    int isFound = 0;
    printf("Enter ID to Modify: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("bba.txt","r+");
    while(fread(&stu, sizeof(stu),1,fp) == 1){
        if(strcmp(s_id, stu.board_roll) == 0){
            fflush(stdin);
            printf("\n");
            printf("---------------------------------------------------\n");
            printf("Enter Board Roll No: \n");gets(stu.board_roll);
            printf("Enter Name: \n");gets(stu.name);
            printf("Enter Address: \n");gets(stu.add);
            printf("Enter Father's name: \n");gets(stu.fname);
            printf("Enter course name: \n");gets(stu.course);
            printf("Enter Stream: \n");gets(stu.stream);
            printf("Enter age: \n");scanf("%d",&stu.age);
            printf("Phone Number: \n");scanf("%ld",&stu.phone_no);
            printf("----------------------------------------------------\n");
            printf("Record Modified");
            fseek(fp,-sizeof(stu), SEEK_CUR);
            fwrite(&stu,sizeof(stu), 1, fp);
            isFound = 1;
            break;
        }
    }
    if(!isFound){
        printf("No Record Found");
    }
    fclose(fp);
    printf("\n");
    printf("Press any number for faculty menu.\n");
    scanf("%d",&ch);
    system("cls");
    faculty_menu();
    return;
}
void mod_student_bca(){
    char s_id[15];
    int ch;
    int isFound = 0;
    printf("Enter ID to Modify: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("bca.txt","r+");
    while(fread(&stu, sizeof(stu),1,fp) == 1){
        if(strcmp(s_id, stu.board_roll) == 0){
            fflush(stdin);
            printf("\n");
            printf("---------------------------------------------------\n");
            printf("Enter Board Roll No: \n");gets(stu.board_roll);
            printf("Enter Name: \n");gets(stu.name);
            printf("Enter Address: \n");gets(stu.add);
            printf("Enter Father's name: \n");gets(stu.fname);
            printf("Enter course name: \n");gets(stu.course);
            printf("Enter Stream: \n");gets(stu.stream);
            printf("Enter age: \n");scanf("%d",&stu.age);
            printf("Phone Number: \n");scanf("%ld",&stu.phone_no);
            printf("----------------------------------------------------\n");
            printf("Record Modified");
            fseek(fp,-sizeof(stu), SEEK_CUR);
            fwrite(&stu,sizeof(stu), 1, fp);
            isFound = 1;
            break;
        }
    }
    if(!isFound){
        printf("No Record Found");
    }
    fclose(fp);
    printf("\n");
    printf("Press any number for menu.\n");
    scanf("%d",&ch);
    system("cls");
    faculty_menu();
}

void show_all_btech()
{
    int ch;
    FILE *fp;
    printf("\n\n------------------DISPLAY ALL RECORD-----------------!!!\n");
    fp = fopen("btech.txt", "rb");
    while ((fread(&stu, sizeof(stu), 1, fp)) > 0)
    {
        printf("Board Roll.no: %s\n",stu.board_roll);
        printf("Name: %s\n",stu.name);
        printf("Address: %s\n",stu.add);
        printf("Father's Name: %s\n",stu.fname);
        printf("Course: %s\n",stu.course);
        printf("Stream: %s\n",stu.stream);
        printf("Age: %d\n",stu.age);
        printf("Phone No: %ld\n",stu.phone_no);
        printf("\n=======================================================\n");
    }
    fclose(fp);
    printf("\n");
    printf("Press any number for menu.\n");
    scanf("%d",&ch);
    system("cls");
    faculty_menu();
    return;

}
void show_all_bba()
{
    int ch;
    FILE *fp;
    printf("\n\n------------------DISPLAY ALL RECORD-----------------!!!\n");
    fp = fopen("bba.txt", "rb");
    while ((fread(&stu, sizeof(stu), 1, fp)) > 0)
    {
        printf("Board Roll.no: %s\n",stu.board_roll);
        printf("Name: %s\n",stu.name);
        printf("Address: %s\n",stu.add);
        printf("Father's Name: %s\n",stu.fname);
        printf("Course: %s\n",stu.course);
        printf("Stream: %s\n",stu.stream);
        printf("Age: %d\n",stu.age);
        printf("Phone No: %ld\n",stu.phone_no);
        printf("\n=======================================================\n");
    }
    fclose(fp);
    printf("\n");
    printf("Press any number for menu.\n");
    scanf("%d",&ch);
    system("cls");
    faculty_menu();
    return;

}
void show_all_bca()
{
    int ch;
    FILE *fp;
    printf("\n\n------------------DISPLAY ALL RECORD-----------------!!!\n");
    fp = fopen("bca.txt", "rb");
    while ((fread(&stu, sizeof(stu), 1, fp)) > 0)
    {
        printf("Board Roll.no: %s\n",stu.board_roll);
        printf("Name: %s\n",stu.name);
        printf("Address: %s\n",stu.add);
        printf("Father's Name: %s\n",stu.fname);
        printf("Course: %s\n",stu.course);
        printf("Stream: %s\n",stu.stream);
        printf("Age: %d\n",stu.age);
        printf("Phone No: %ld\n",stu.phone_no);
        printf("\n=======================================================\n");
    }
    fclose(fp);
    printf("\n");
    printf("Press any number for menu.\n");
    scanf("%d",&ch);
    system("cls");
    faculty_menu();
    return;

}

void drop()
{
    exit;
}

int main()
{
    char a[5];
    int value;
    char b[]={'S','D','I','E','T','\0'};
    main_menu();
    scanf("%s",a);
    value=strcmp(a,b);
    if(value==0)
    {
        system("cls");//use to clear the screen like we use clrscr() command in turbo
        menu();
    }
    else{
        printf("Error! Please Enter correct........\n");
        system("cls");
        main();
    }
    return 0;
}
