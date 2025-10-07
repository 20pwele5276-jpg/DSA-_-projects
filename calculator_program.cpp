#include <iostream>
using namespace std;
int main(){

    double  num1, num2;
    char  op;
    double result;


    cout << "Enter first number:" << endl;
    cin >> num1;

    cout << "Enter second number:" << endl;
    cin >> num2; 

    cout << "select operator: \n + \n - \n * \n / \n % " << endl;
    cin >> op; 


switch(op){
    case '+':
    result = num1 + num2;
    cout <<  "Result = " << result << endl;
        break;
    
        case '-':
        result = num1-num2;
        cout << "Result = " << result <<endl;
        break;

        case '*':
        result = num1*num2;
        cout << "Result = " << result <<endl;
        break;

        case '/':
            if( num2==0) {
                cout << "Error: division by zero is not allowed." <<endl;
            }else{
                result = num1/num2;
                cout << "Result = " << result <<endl;
            }
        break;

        case '%':
        if ((int) num2==0){
            cout << "Modulus by zero not allowed."<<endl;
        }else{
            result = (int)num1 % (int)num2;
            cout << "Result = " << result <<endl;
        }
        break;

        default:
        cout << "Invalid operator" << endl;
    }
return 0;
    
}