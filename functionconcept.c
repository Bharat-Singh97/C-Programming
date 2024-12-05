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
    printHello(); // calling statement under the main fun
    return 0;
 }