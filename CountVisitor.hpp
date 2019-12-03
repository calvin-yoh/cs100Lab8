#ifndef COUNTVISITOR_HPP
#define COUNTVISITOR_HPP

#include <iostream>

#include "base.hpp"
#include <vector>
#include "Mult.hpp"
#include "Sub.hpp"
#include "Div.hpp"
#include "Add.hpp"

using namespace std;

class CountVisitor
{
        private:
                int checkOp(char operation);

        public:
                void parseAndPrint(vector<char> vect);
};

#endif

