/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:41:17 by wperu             #+#    #+#             */
/*   Updated: 2021/10/02 20:53:46 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
class Array
{
    public:
        
        Array(void):n(0),array(NULL){};
        Array(unsigned int n):n(n),array( new T[this->n]) {};
         ~Array(void){ delete [] array;};
        Array( Array const & rhs)
        {
            *this = rhs;
        };

        class LimitsException: public std::exception 
		{
			virtual const char* what() const throw()
			{
				return ("Out of limits!");
			}
		};
        
        Array & operator=(  Array const & rhs )
        {
            if (this->n > 0)
				delete[] this->array;
			this->array = NULL;
			if (rhs.size() > 0)
			{
				this->array = new T[rhs.n]();
				for (unsigned int i = 0; i < rhs.n; i++)
				this->array[i] = rhs.array[i];
			}
			this->n = rhs.n;
			return (*this);
        }

        T & operator[](unsigned int n)
        {
            if(n >= this->n)
                throw Array::LimitsException();
            return(this->array[n]);
        };
        

        unsigned int size() const
        {
            return this->n;
        }
        
        T get_array(unsigned int i) const
        {
            return this->array[i];
        }
       
        
    private:
    unsigned int n;
    T *array;
    

    
};

template<typename T>
std::ostream & operator<<(std::ostream & o, Array<T> const & rhs)
{
    for (unsigned int i = 0; i < rhs.size(); i++)
        o<< "array[" << i << "] = " << rhs.get_array(i) << std::endl;
    return o;
}