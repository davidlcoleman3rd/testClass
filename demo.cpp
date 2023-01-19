
//***********************************************
//                                              *
//  DEMONSTRATION OF THE TEST CLASS             *
//      This is a primitive demo of the Test    *
//      class included, to demonstrate modular  *
//      functionality.                          *
//                                              *
//***********************************************

#include "test.h"

//************************************************

int main() {

    Test myObj1;                                 //Test object

    for (int iter = 0; iter < 50; iter++) {
        myObj1.InputPrint(iter);                //Should loop 50 times and print 50 tests
    }

    Test myObj2 = myObj1;                       //Will set the new test object equal to obj1

    myObj2.Input(51);

    myObj2.InputPrint(myObj1 - myObj2);         //Will take the difference between both objs,
                                                //...store them in obj 2, and print

    myObj1.InputPrint(myObj2 + myObj1);         //Will take the sum between both objs, store
                                                //...them in obj, and print

    return 0;                                   //End of demo - success termination
}
