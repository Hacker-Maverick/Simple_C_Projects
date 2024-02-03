# include<stdio.h> // Main library 
# include<string.h> // library of string functions
void fn1(); // Function prototype - used to tell compiler about the function made in the program
int fn2(int a,int b); // Function prototype - used to tell compiler about the function made in the program
int recfn(int a); // recursive function
void pntr(); // pointers function
void cllbyreff(); // call by reference example
void swap(); // fn for value swap
void arr1(); // fn for array
void arr2(); // fn for array
void arr3(); // fn for array
void string(); // fn for string

int main(){
// Boiler Plate
/*
int main(){

    return 0;
}
*/
  
// Variables
int num1;
float num2 = 3.4;
double num3 = 9.8; 
char char_1 = 'a';

// Some keywords
/*
     auto break case char const continue default do double long return register Short signed Sizeof Static 
     int else enum extern float for goto if  struct Switch typedef union unsigned void volatile while
*/

/*
%d for integers
%f for float
%lf for double
%c for character
%u for pointers [will study below]
%s for strings [will study below]
*/

// Printing functions 
printf("Enter a number\n");  // \n for new line

// Scanner functions
scanf ("%d", &num1);

// Arithmetic operators
/*
+ add
- subtract
* multiply
/ divide
% modulus (returns sign of numerator always)
*/

// Arithmetic Operator precedence
/*
1st / * %
2nd + -
3rd =

(In case of same precedence it goes line by line)

*/

// logical Operators
/*
&& and
|| or
! not
^ xor
*/

// Operator Precedence
/*
1st !
2nd * / %
3rd + -
4th < > <= >= 
5th == !=
6th &&
7th ||
8th =
*/

// if else
if((num1 >= 0) && (num1 <= 9))
    {
        printf("One digit number \n");
    }
else
    {
        printf("I don't know see yourself %d \n",num1);
    }

// Conditional Operators
// (condition)? true expression : false expression
(num1 == 0)? printf("num1 is 0 \n") : printf("num1 isn't 0 \n");

// Switch case
switch(num1)
{

        case 10:
        printf("ohho its 10 \n");
        break;

        default:
        printf("Nhi pata yaar dekh le na khud \n");
        break;
}

// Loops

// While Loops
/*
while (condition){
    Statement
}
*/
while(num1<10){
      printf("num1 is less than 10 still \n");
      num1++;
}

// Do while loops 
/*
do{
    Statement
}while(condition);
*/
do{
    printf("num1 is more than 10 now \n");
    num1++;
}while(num1<=20);

// For loops
/*
for( initialization ; condition ; increment){
    Statement;
}
*/
for (num1;num1<30;num1++)
{
    printf("num1 is increasing to 30\n");
}

// Break and Continue statements
/*
Break comes out of loop 
Continue just skips that round of loop from further execution of statements i n loop
*/

//FUNCTIONS
fn1(); //calling a function
num1 = fn2(num1 , 5); //calling a function
printf("The value of num1 is 35 now see %d\n",num1);
num1 = recfn(5); //calling the recursive function
printf("the factorial of 35-30 is %d\n",num1);

//Calling functions of other topics
pntr(); // calling function for pointers
cllbyreff(); // calling function by reference
arr1();
string();

return 0;
}

// Functions    [void for no value intake or return and int for value processing]
/*
            VOID FUNCTIONS
void function_name(); - function prototype 

function_name(); - calling a function (U can call funtions from any other function)

void function_name(){
    statements;
}

            INT FUNCTIONS
int function_name( parameter1 , parameter2 , etc); - function prototype

var_to_store_functions_return_value = function_name( value1 , value2 , etc); - calling a function

int function_name( parameter1 , parameter2 , etc){
    statements;
}

*/
void fn1(){
    printf("This is a void fn which doesnt return any value\n");
}

int fn2(int a, int b){
    int sum = a+b;
    return sum;
}

//Recursive functions - example of a factorial generating function

int recfn(int a){
    if (a==1 || a==0)
    {
        return 1;
    }
    else {
        return a * recfn(a-1);
    }
}

//Pointers - a variable used to store memory address of other variables
/*
int *variable_name = &variable_name_whose_memory_add_is_to_be_stored - declaring and storing value in pointer
[ int is for int variables, use float double char keywords while defining pointer for respective datatypes]
[ *memory_address_variable gives the value ]
[ &variable gives the memory address ]
*/
void pntr()
{
    int a = 2; //taking variable for finding its memory address
    int *b = &a; //declaring and storing address of i
    printf("The value of a is %d\n", a );
    printf("The address of a is %u\n", b );
    printf("The value of a is %d\n", *b );
    printf("The address of a is %u\n", &a );
    printf("The value of b is %d\n", *(&b) );
    printf("The address of b is %u\n", &b );

    // Pointer to a pointer
    int **c = &b; // c is a pointer to a pointer b [we use multiple asterics to define pointer to pointer]
}

// Function calls
/*
1. Call by value
    We have already seen functions which call by value. In this call the actual data isn't in control of the function.
    Only the copies of the data is passed in the arguments.
2. Call by reference
    In this we call the values of variables by memory addresses. It calls original value of data and can be hampered.
*/
void cllbyreff(){
    int a=3 , b=4;
    printf("the value before swap is %d and %d\n",a ,b);
    swap(&a , &b);
}
void swap(int *x , int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("the value after swap is %d and %d\n",*x ,*y);
}

// Arrays - used for storing multiple data in single variable
/*
datatype variable_name[length]; - making an array
datatype variable_name[length] = {value1, value2, value3, ...};
*/

// Pointer arithmetic operations
/*
Arithmetic operations can be performed on pointers
[When performing operations on pointers keep in mind every datatype for differnt systems hold different memory size in bits.
Doing a increment by increment operator increases the value by the respective memory size.]
[We can also take input or store or evaluate data using pointers
e.g. -  int a[4];
        int *ptr;
        ptr = &a[0];
        for(i=0,i<4,i++)
        {
        scanf("%d",ptr);
        ptr++;
        }
]
*/

// Passing arrays in function - Either we pass an array through memory address or directly array to array
// [Changes here in any function can change actual array]
void arr1()
{
    int arr[4] = {23,45,67,89};
    arr2(arr,4);
    arr3(arr,4);
}
void arr2(int *ptr,int n) // Array for passing value through pointer and memory allocation
{
    for(int i=0;i < n;i++){
        printf("The value of %d is %d\n", i+1,*(ptr+i));
    }
}
void arr3(int sample[],int n) // Array for passing value through array
{
    for(int i=0;i < n;i++){
        printf("The value of %d is %d\n", i+1, sample[i]);
    }
}

// Multidimentional array
/*
datatype variable_name[rows_length][col_length]={ {row1_col1 , row1_col2 , ...} {row2_col1 , row2_col2 , ...} ...}
[Memory allocation is done in sequence of row1_col1 , row1_col2 , ... then row2_col1 , row2_col2 , ... then so on to last row]
*/

// Strings

void string(){
    char str[]={'a', '1', '+', '\0'}; //string defining manually [\0 is for terminating memory allocation of string]
    char strg[]={"a1+"}; //automatic string defining , no \0 required
    char *ptr = strg; // pointer for the irst element of string [ Memory allocation of string increses value by one]
    while (*ptr != '\0'){
        printf("%c \n", *ptr); //seeing output of strg
        printf("%d \n", ptr); //seeing output of memory allocation
        ptr++;
    }

    // another way of string defing and printing
    char *stng="a1+"; //creating string in pointer way [NOTE: the var stng can be reinit but incase of array init same var cant be reinit]
    printf("%s\n",stng); //printing from %s 

    // taking string inputs
    char stg[100];
    printf("enter a string\n");
    scanf("%s", stg);
    printf("yr string is %s\n",stg);
    /* NOTES 
    1. The size of string must be bigger than input
    2. We can't take spaces with scanf %s
    */

    // gets and puts function
    /*
    fgets function allows us to input a multi word strings
        stntax:
                    fseek(stdin,0,SEEK_END); [usually fgets is skipped due to \n so the is to stop the action of the \n]
                    fget(string_name,string_size,stdin);
    puts function allows us to output a multi word strings
    */
    char st[100];
    printf("enter a multiword string\n");
    fseek(stdin,0,SEEK_END);
    gets(st);
    puts(st);
    
    /*
    
    */
}

// String functions - include string library - #include<string.h>
/*  function                 uses                                                  syntax

    strlen              counts length excluding null character                     int a = strlen();
    strcpy              copies a string to other say 1 copied to 2                 strcpy(string2,string1);
    strcat              adds the content of string1 and adds to given string2      strcat(string2,string1);
    strcmp              compares string character wise                             strcmp(string1,string2)
                            if string same answer is 0
                            else it compares the character codes 
                            when char matches it moves forword to next char
                            when mismatched it subtacts 2nd string char from first 
                            if thier alternate code difference is positive returns positve no. else negative 
*/