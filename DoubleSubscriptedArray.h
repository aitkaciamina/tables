#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H
#include <iostream>
using namespace std;

class DoubleSubscriptedArray
{
    friend ostream&operator<<(ostream& output, DoubleSubscriptedArray& c );
    friend istream&operator>>(istream& input, DoubleSubscriptedArray& c);
    public:
        DoubleSubscriptedArray(int =10 , int =10);
        int operator()(int i , int j);
        int&operator--(int);
        const int &operator--( );
        bool operator==(const DoubleSubscriptedArray &a);
        bool operator!=(const DoubleSubscriptedArray &a);
        int get_n_rows();
        int get_n_columns();
        void set_table();
        const DoubleSubscriptedArray&operator=(const DoubleSubscriptedArray& c);
        ~DoubleSubscriptedArray()
        {
            delete table;
        }

    private:
        int columns;
        int rows;
        int * table ;

};

#endif // DOUBLESUBSCRIPTEDARRAY_H
