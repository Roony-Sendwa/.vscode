// Roony Sendwa
// Find total effective resistance of 10 parallel resistors


int main(void)
{

    //Declare variables
    int R1=0, R2=0, R3=0, R4=0, R5=0, R6=0, R7=0, R8=0, R9=0, R10=0;
    double RT=0
    //Set values
    R1=10 //ohms
    R2=10 //ohms
    R3=10 //ohms
    R4=10 //ohms
    R5=10 //ohms
    R6=10 //ohms
    R7=10 //ohms
    R8=10 //ohms
    R9=10 //ohms
    R10=10 //ohms

    //Calculate value
    RT= 1/((1/R1)+(1/R2)+(1/R3)+(1/R4)+(1/R5)+(1/R6)+(1/R7)+(1/R8)+(1/R9)+(1/R10))

    return 0;

}
