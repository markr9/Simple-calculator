//Header- declarations

class Calculator
{
  public:
    Calculator(); //set inital status
    void launch(); //instructions display
    void readInput(); //get expression
    void writeOutput(); //display results
    bool run(); //get current status

  private:
    double num1, num2; //store number input
    char oper; //store operator input
    bool status; //store status
};
