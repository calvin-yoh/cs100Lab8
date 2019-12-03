#ifndef __BASE_HPP__
#define __BASE_HPP__

#include <string>
#include "iterator.hpp"

class Iterator;
class Base {
    public:
        /* Constructors */
        Base() 
	{
	};
	Base* left;
	Base* right; 
	Base* get_left()
	{
		return this->left;
	}
	Base* get_right() 
        {
                return this->right;
        } 	
        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
        virtual std::string stringify() = 0;
	virtual Iterator* create_iterator() = 0;
};

#endif //__BASE_HPP__
