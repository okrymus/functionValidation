//function pototypes

// Pre condition:  NONE
// Post condition: Print a centered title for the program
void printTitle();         //   DONE

// Pre condition:  NONE
// Post condition: Return a valid positive double
//                 it crash for non-numeric input
//                 removes everything else from the cin
double getPos();        //   DONE

// Pre condition:  NONE
// Post condition: Return a valid positive double
//                 it does NOT crashes for non-numeric input
//                 removes everything else from the cin
double getPosNum();        //   DONE

// Pre condition:  y != 0
// Post condition: Return a valid intgeger that is a multiple of y 
//                 it does NOT crashes for non-numeric input and the number % y != 0
//                 removes everything else from the cin
int getMultOfNum(int y);       //   DONE

// Pre condition:  NONE
// Post condition: Return a letter character
//                 it takes only a letter from A to Z and a-z
//                 removes everything else from the cin
char getLetter();       //   DONE

// Pre condition:  endPoint > startPoint
// Post condition: Return a double number which is in the range
//                 it does NOT crashes for non-numeric input
//                 removes everything else from the cin
double getInRange(double startPoint, double endPoint);       //   DONE

// Pre condition:  NONE
// Post condition: Return a valid perfect square integer
//                 it does NOT crashes for non-numeric input
//                 removes everything else from the cin
int getPerfectSquare();       //   DONE

// Pre condition:  NONE
// Post condition: Return a integer value  
//                 it checks the number that a user is integer or not
//                 it does NOT crashes for non-numeric input
//                 removes everything else from the cin
int getInt();       //   DONE

// Pre condition:  NONE
// Post condition: Return a valid double number
//                 it crashes for non-numeric input
//                 removes everything else from the cin
double getNum();       //   DONE
