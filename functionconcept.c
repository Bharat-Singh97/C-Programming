/*Function:-block of code that performs particular task
take argument->do work->return result
it can be used multiple times
increases code reusability ex tv remote each buttons perform task */
// syntax 1  function prototype means function declaration its inform to c compiler
void printHello(); // void showws this fun not return any value , whole function declaration

// function definition means how function work
void printHello() { // function as function work like print
    printf("Hello"); // void is return type
}
 // function call for fun use
 int main () {
    printHello(); //calling statement under the main fun
    return 0;
 }

 /* properties of function 
    1. Execution always start from main
    2. A function gets called directly or indirectly from main
    3. There can be multiple functions in a program
    
    Function types 
    1. Library function
     Special functions inbuilt in C
     ex. scanf(), printf()
    2. User defoned 
       declared & defined by programmer or user
       
    Passing Arguments 
    functions can tale value(called parameter) & give some value(Clled return value)
       */