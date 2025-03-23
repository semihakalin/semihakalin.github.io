#include <stdio.h>
#include <math.h>

int computeHomeValue(int popularity, int size);//prototype of the function

int main(){
    int size,popularity;// variable declarations
    
    printf("Enter popularity value:\n");
    scanf("%d", &popularity);//Input from user for popularity value
    
    printf("Enter size value:\n");
    scanf("%d", &size);//Input from user for size value
    
    printf("Home Value: %d\n", computeHomeValue(popularity,size));//Printing the home value by calling the funciton inside printf
    system("pause");
    return 0;
}

int computeHomeValue(int popularity, int size){
    return (pow(popularity,3) + pow(size,2)) * 10000;//Computing home value according to the given equation
}
