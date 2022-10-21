#include<stdio.h>//this is a laibary function

void shiftArr1Pos(int *arr1, int arrSize)//this function is given in the question
{
    int i;//for using for loop I use i

    for(i=0; i<arrSize; i++)//this is a for loop and here arrSize= main function shif because we have to start from 0 to shif, we want to print frist 4 or
    //other amount of array
    {
        printf("%d ",*(arr1+i));//here use print to print the left shift array and I use pointer arr1+i to find the adress of array and also printing array
    }
}

void arr1Rotated(int *arr1, int arrSize, int rotFrom)// this function and all the element are given on the question..
{
    int i;

    for(i=rotFrom; i<arrSize; i++)//rotFrom = shif from mainfunction, here we make i=shif because this array will start from the position we want to shift.
    // arrSize = number from main functon because this loop will end while total number of array will finish.
    {
        printf("%d ",*(arr1+i));//here the same case what I have already explaine .
    }

}

int main()//this is a main function .. we call all the things and we work all kinds of things under main function..
{
    int i,number,arr[100],*arr1,shif;// here ,, i for using loop, number for definding array size, here is a arr I use to take number as input and here I
    //given the 1d array size up to 100, we give here a  pointer thats call *arr1 and we given here shift to roted our array acculy I brake the array and
    //just print as usulal

    printf("Enter the number of array size : ");
    scanf("%d",&number);//here I use number to take input from user as array size

    printf("\nEnter the element randomly : ");
    for(i=0; i<number; i++)//a for loop to taking all the number or value of array from user.

    {
        scanf("%d",&arr[i]);//here the arr[i] use to take input from user , and i use to find the array position, such as .. arr[0] ,arr[1]... so one..
    }

    arr1 = arr;//here arr1 is a pointer and arr is a array which taken from user as input, then we store all the address from array to pointer..

    printf("\nEnter number to shift : ");
    scanf("%d",&shif);//here we use shif to take input from user and I will shift from this number ... it will help us to shift our array

    printf("\nThe given array is : ");
    for(i=0; i<number; i++)//here is a for loop to print all the element of the array which are taken from user ..
    {
        printf("%d ",*(arr1+i));//already I have explain about this in the top..
    }

    printf("\nFrom %dth position the values of the array are : ",shif);//here i use shif to showing the output which are given from user
    arr1Rotated(arr1,number,shif);//her we call a function .. to showing the array from last part . .. right shift

    printf("\nBefore %dth position the array is : ",shif);
    shiftArr1Pos(arr1,shif);//here we call a function to print first left shift number or value of the array .

    printf("\nAfter rotating from %dth position the array is : ",shif);
    arr1Rotated(arr1,number,shif);//we have to show as rotted from so ,, I call the function which are from the right shift ..
    shiftArr1Pos(arr1,shif);// then i called this function .  to print first shift array value and it will show togher after  showing other function


    return 0;//it will give output 0, 0 mean there is no error or other wrong in the code, if there is any kinds of wrong then it will never return 0
    //then it will show output any other things any amount of value ,, positive or negative
}
