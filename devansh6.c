#include<stdio.h>
#include<math.h>

//int main(){
    /*for ( int i=1; i<=10; i++)
    {
        printf("%d\n",i);
    }
    */

/*int sum=0;

for ( int i=1; i<=10; i++)
    {
        sum=sum+i;
       
    }
    printf("sum is: %d\n",sum);
*/
/*int number;
printf("enter number");
scanf("%d\n",&number);
int sum=0;
for (int i=1; i<=number; i++)
{
    sum=sum+i;
}
printf("sum is :%d",sum);*/
/*float n;
printf("enter number :");
scanf("%f\n",&n);
float sum =0;
for (int i=1; i<=n; i++)
{
    sum=sum+i;
}
printf("sum is :%f\n",sum);
for (int i=1; i<=n; i++)
{
    printf("%f\n",i);
}
float average;
average =sum/10;
printf("average is:%f\n",sum/10);*/
/*int n;
printf("enter number");
scanf("%d\n",&n);
int cube=0;
for ( int i=1; i<=n ; i++)
{
    cube=i*i*i;
}
printf("%d\n",cube);*/
/*int n;
printf("enter number:");
scanf("%d\n",&n);

for (int i=1; i<=10; i++)
{    
printf("%d\n",n*i);
}*/
/*int n;
printf("enter number:");
scanf("%d\n",&n);

for (int i=1; i<=10; i++)
{    
    int n;
    printf("enter number:");
    scanf("%d\n",&n);
    
    for (int i=1; i<=10; i++)
    {    
    printf("%d\n",n*i);int n;*/
   
   //return 0;}
    // Include the standard input/output header file.

int main() {
    int j, i, n;  // Declare variables 'j' and 'i' for loop counters, and 'n' for user input.

    printf("Input upto the table number starting from 1 : ");  // Print a message to prompt user input.
    scanf("%d", &n);  // Read the value of 'n' from the user.
    printf("Multiplication table from 1 to %d \n", n);  // Print a message showing the range of the table.

    for (i = 1; i <= 10; i++) {  // Start an outer loop for the numbers 1 to 10.
        for (j = 1; j <= n; j++) {  // Start an inner loop for the table range.
            printf("%dx%d = %d, ", j, i, i * j);  // Print the multiplication expression and result.
        }
        printf("\n");  // Print a newline to move to the next row of the table.
    }

    return 0; }