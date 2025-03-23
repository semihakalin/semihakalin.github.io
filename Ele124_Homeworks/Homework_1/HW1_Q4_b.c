#include <stdio.h>
#include <math.h>

void computeHomeValue();//Prototype of the function

int main(){
    computeHomeValue();//Calling the function
    system("pause");
    return 0;
}

void computeHomeValue(){
    
    int home_value,size,popularity;// variable declarations
    
    printf("Enter popularity value:\n");
    scanf("%d", &popularity);//Input from user for popularity value
    
    printf("Enter size value:\n");
    scanf("%d", &size);//Input from user for size value
    
    home_value = (pow(popularity,3) + pow(size,2)) * 10000;//Computing home value according to the given equation
    
    printf("Home Value: %d\n", home_value);//Printing the home value
    return;
}
