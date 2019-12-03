#include "CountVisitor.hpp"
#include <vector>
int CountVisitor::checkOp(char operation)
{
	if(operation == '+')
	{
		return 1;
	}
	if(operation == '-')
        { 
                return 2;
        }
	if(operation == '*')
        { 
                return 3;
        }
	if(operation == '/')
        { 
                return 4;
        }
	if(operation == '1' || operation == '2' || operation == '3' || operation == '4' || operation == '5' || operation == '6' || operation == '7' || operation == '8' || operation == '9')
	{
		return 5;
	} 
	if(operation == '(')
        {
                return 6;
        }
	if(operation == 'c')
        {
                return 7;
        }
	if(operation == 'f')
        {
                return 8;
        }
	return 0;


        	
}

void CountVisitor::parseAndPrint(vector<char> input)
{
	int opCount = 0;
	int multCount = 0;
	int divCount = 0;
	int addCount = 0;
	int subCount = 0;
	int powCount = 0;
	int parenCount = 0;
	int ceilCount = 0;
        int floorCount = 0;
	int check;
	for(int i = 0; i <input.size(); i++)
	{	
		check = checkOp(input.at(i));
		switch(check)
		{
			case 1: 
				addCount++;
				break;
			case 2: 
                                subCount++;
                                break;
			case 3: 
                                multCount++;
                                break;
			case 4: 
                                divCount++;
                                break;
			case 5:
				opCount++;
				break;
			case 6: 
				parenCount++;
				break;
			case 7:
				ceilCount++;
				break;
			case 8:
				floorCount++;
				break;
		}	
	}
	cout << "Add Operator Count : " << addCount << endl;
	cout << "Div Operator Count : " << divCount << endl;
	cout << "Sub Operator Count : " << subCount << endl;
	cout << "Mult Operator Count : " << multCount << endl;
	cout << "Operand Count : " << opCount << endl;
	cout << "Ceil Count : " << ceilCount << endl;
	cout << "Floor Count : " << floorCount << endl;
	cout << "Paren  Count : " << parenCount << endl;


}
