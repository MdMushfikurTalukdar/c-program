#include<stdio.h>

int i,capital=0,small=0,specil=0,number=0;//here i diclire some varaible in global for this it become eiser to find out and calling from any scope

int min_add(int size, char ch[])//this is a function which are told on the question to use, I use here "size" to take the size of password from main function
//and I use here "ch" char type para-miter to take character input from main function ..
{
    for(i=0; i<size; i++)//I use here for loop to count and store all the things on global varible ...
    {
        if(ch[i]>='A' && ch[i]<='Z')//here this will count the capital later of string .. it will check all the word in the string and it will sore in the global varible
        {
            capital++;//it will count the number of capital number one by one , it will starts from zero,,
        }
        else if(ch[i]>='a' && ch[i]<='z')//this will count small letter .. it will check all the word from the string
        {
            small++;//will count and store the number or lower case word in the string . ..
        }
        else if(ch[i]>='0' && ch[i]<='9')// it will check digit ... from the string..
        {
            number++;// it will count digit number from the string and it will store in the global varible
        }
        else// if there is no condition are matchint then we will think that this is a special character .. and that will count as special cahracter
        {
            specil++;//it will count and store special character..
        }
    }

}

int main()//this is a main function ,,, all kinds of things we do here...
{
    int n;//here is a variable to take input ..and store under n..
    char c[50];// we declare here a variable as character and we give here size as 50 we can store 50 caharacter under this variable

    printf("\nPassword length : ");// this is a text to undrestand , that where should give input ..
    scanf("%d",&n);// it will take input and store under n variable
    getchar();//this is a paramiter which work as 1 digit integer or character ,, we keep it here because after taking input n .. we have to press enter
    // and this is a problem to solve the problem .. we put getchar() to fix that problem ..

    printf("\nPassword : ");//a text it will directly show in the scrin
    gets(c);//it will take input as string and it will store in c variable ..

    min_add(n,c);//it will call function and it has two para-miter n and c ..

    if(capital<1)// it will check variable that the variable value is more then one or not...
    {
        printf("\nYou have to input at least one capital letter.");//if the value is less then one then the program will print this..
    }
    if(small<2)//it will check that the value is less then two or not...
    {
        printf("\nYou have to input at least %d lowercase letter.",2-small);//if the value is less then two then it will print this with the number of this
    }
    if(number<1)//it will show the number is less then one or not
    {
        printf("\nYou have to input at least one number digit.");//if the number is less then one then it will print this
    }
    if(specil<1)//it will check that the value is less then one or not
    {
        printf("\nYou have to input at least one special character.");//so one
    }

    if(n<8)//if the input number is less then 8 then it will work
    {
        printf("\nAdd %d character to make your password length 8",8-n);//then it will print this with left number
        printf("\nMinimum character to add : %d",8-n);// so one
    }

    else//if every things become correct... that means if NO condition  work then .. it will work
    {
        printf("\nStrong password");//if it work then it will print this...
    }



    return 0;//for checking that every things are ok  or not... if it din't return 0 then ... we have to undrestand that it have some mistake...
}
