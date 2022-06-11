#include "DoubleSubscriptedArray.h"
#include <iostream>
using namespace std;
DoubleSubscriptedArray::DoubleSubscriptedArray(int r , int c)
{
    rows=r;
    columns=c;
    for(int i =0 ; i<rows*columns; i++)
    {
         table = new int [rows*columns];
            table[i]=0;
    }
}
void DoubleSubscriptedArray::set_table()
{
    for (int i= 0 ; i<rows*columns ; i++)
        cin>>this->table[i];
}
int DoubleSubscriptedArray::get_n_rows()
{
    return rows;
}
int DoubleSubscriptedArray::get_n_columns()
{
    return columns;
}
int DoubleSubscriptedArray::operator()(int i , int j)
{
    return table[ i * j];
}
int& DoubleSubscriptedArray::operator--(int)//int i, int j)
{
    for(int i=0 ; i<rows*columns ; i++)
    {
             table[i]=table[i]--;
    }
    for(int i=0 ; i<rows*columns ; i++)
    {
            return *table;
    }
}


const int & DoubleSubscriptedArray::operator--()
{
    for(int i=0 ; i<rows*columns; i++)
    {
             --table[i];
             }
             return *table;

}
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &a)
{
    if((this->rows!=a.rows)||(this->columns!=a.columns))
      {
          cout<<"cannot compare ! "<<endl;
          return 0;
      }

    if((this->rows==a.rows)&&(this->columns==a.columns))
    {
        for(int i=0 ; i<rows ; i++)
        {
            for(int j=0 ; j<columns; j++)
            {
                if(this->table[i*j]==a.table[i*j])
                    return true;
                return false;
            }
        }
    }
}
bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &a)
{
    if((this->rows!=a.rows)||(this->columns!=a.columns))
      {
          cout<<"cannot compare ! "<<endl;
          return 0;
      }

    if((this->rows==a.rows)&&(this->columns==a.columns))
    {
        for(int i=0 ; i<rows ; i++)
        {
            for(int j=0 ; j<columns; j++)
            {
                if(this->table[i*j]!=a.table[i*j])
                    return true;
                return false;
            }
        }
    }
}
ostream&operator<<(ostream& output, DoubleSubscriptedArray& c )
{
    int count=0;
    for(int i=0 ; i<c.get_n_rows()*c.get_n_columns() ; i++)
    {
       output<<c.table[i]<<"\t";
                ++count;

            if(count%c.get_n_columns()==0)
                output<<endl;
    }
    return output;
}
istream&operator>>(istream& input, DoubleSubscriptedArray& c)
{
    for(int i=0 ; i<c.get_n_rows()*c.get_n_columns(); i++)
    {
            input>>c.table[i];
    }
    return input;
}
const DoubleSubscriptedArray& DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray& c)
{
    if(&c!=this)
    {
        if((this->rows)*(this->columns)==(c.columns*c.rows))
        {
            delete []table;
            rows=c.rows;
            columns=c.columns;
            table=new int [rows*columns];

        }
        for(int i=0 ; i<rows*columns ; i++)
            this->table[i] = c.table[i];
    }
        return *this;
}
