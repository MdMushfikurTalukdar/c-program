#include<stdio.h>//this is a laibary function

struct S_info//this is a struct , you can put here any kind of combinication , you can put here char type , int type, double type any other type
{
    char Title[50];// here I declear a variable call Title and.. I give the maximum size is 50
    char Singer_Name[20];//this is also a string which have maximum size 20
    int month,day,year;//this is a integer type variable and I declire here three type variable  as month,day and year
    int Rating;//it is a integer type variable
};

void all_title(struct S_info song[], int size)//this is a function, this are given in the question here two para-mater
{
    int i,count1=0;//I declair here 2 variable

    for(i=0; i<size; i++)//here is a for loop this will help to print all the song's titel
    {
        count1++;//it will count the number of songs
        printf("\n%d. %s",count1,song[i].Title);//it will show the result on screen
    }

}

void new_song(struct S_info song[], int size)//this is a function to add new three song.....(as instracttion of the question)
{
    int i;//for running for loop one variable need

    for(i=size+1; i<size+4; i++)//this is a for loop , and this will run 3 times
    {
        getchar();//I use this to fix some bug ...
        printf("\nEnter title name of song : ");//this is a text and it will print directly
        gets(song[i].Title);//this will take new song's title
        printf("\nEnter Singer's name : ");//text
        gets(song[i].Singer_Name);//this will take new songs name as string
        printf("\nEnter Release date as month, day and year : ");//text
        scanf("%d%d%d",&song[i].month,&song[i].day,&song[i].year);//this will take integer type input .. randomly month day and year..
        printf("\nEnter Rating : ");//text
        scanf("%d",&song[i].Rating);//this will take the rating of the song integer type variable...
    }

}


void delet(struct S_info song[], int size)//this function will delete one song from the song list
{
    int i,j,count2=0;//I declare here some Integer type variable
    char str[100],de[10]="deleted";//I declare here some character type variable

    gets(str);//here it will take input string

    for(i=0; i<size; i++)//it is a for loop
    {
        if(str==song[i].Title)//it will help to find and match the song
        {
            for(j=0; de[j]!='\0'; j++)//here it will delete every thing and it will write here delete
            {
                song[i].Title[j]=de[j];//swaping string
            }
            for(j=0; de[j]!='\0'; j++)//here it will delete every thing and it will write here delete
            {
                song[i].Singer_Name[j]=de[j];
            }
            song[i].month=0;//here it will delete every thing and it will write here 0
            song[i].day=0;//here it will delete every thing and it will write here 0
            song[i].year=0;//here it will delete every thing and it will write here 0
            song[i].Rating=0;//here it will delete every thing and it will write here 0
            count2++;//here it will count
        }
    }
    if(count2==0)//if the title not found then it will work
    {
        printf("\nThe title of the song is not found.");//text
    }
    else//if the operation occers successfully then it will show this massage
    {
        printf("\nDeleted successfully.");//text it will show directley
    }

}

int main()//this is a main function
{
    int i,number;//I declare here some Integer type variable
    struct S_info song[1000];//here the structure verifing

    printf("Enter total Number of song you want to store : ");//text massage it will show directly
    scanf("%d",&number);//this will take input from user

    for(i=0; i<number; i++)//here is a for loop it will run up to the size which user are giving
    {
        getchar();//this will fix some bug
        printf("\nEnter title name of song : ");//text it will show directly in the screen
        gets(song[i].Title);//it will take input the songs titel from user and it will store under structured array
        printf("\nEnter Singer's name : ");//text it will show directly in the screen
        gets(song[i].Singer_Name);//this will take new songs name as string
        printf("\nEnter Release date as month, day and year : ");//text it will show directly in the screen
        scanf("%d%d%d",&song[i].month,&song[i].day,&song[i].year);//this will take integer type input .. randomly month day and year..
        printf("\nEnter Rating : ");//text it will show directly in the screen
        scanf("%d",&song[i].Rating);//this will take the rating of the song integer type variable...

    }

    printf("\nAll the songs title...");//text it will show directly in the screen
    all_title(song,number);//it will call the function and it will occers some operation and it will show all the title

    printf("\nTo enter \'3\' new song enter those information : ");//text it will show directly in the screen
    new_song(song,number);//it will call the function and it will occers some operation and it will add new song

    getchar();//this will fix some bug
    printf("\nEnter title Name to delete the song : ");//text it will show directly in the screen
    delet(song,number);//it will call the function and it will occers some operation and it will help to delete some song



    return 0;//it will give output 0, 0 mean there is no error or other wrong in the code, if there is any kinds of wrong then it will never return 0
    //then it will show output any other things any amount of value ,, positive or negative
}
