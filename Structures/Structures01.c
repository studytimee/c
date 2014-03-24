/*
 * Structures01.c
 *
 *  Created on: 24 Mar 2014
 *      Author: ali
 */

/*
The struct database declares that it has three
variables in it, age, id_number, and salary. You
can use database like a variable type like int. You
can create an employee with the database type as I did
above. Then, to modify it you call everything with the
'employee.' in front of it. You can also return structures
from functions by defining their return type as a structure
type. For instance:
*/

struct database {
  int id_number;
  int age;
  float salary;
};

int main()
{

  struct database employee;  /* There is now an employee variable that has
                              modifiable variables inside it.*/
  employee.age = 22;
  employee.id_number = 1;
  employee.salary = 12000.21;

  printf(" %d\n", employee.age);

  int *p;
  p = &employee.age;
  printf(" %d\n", *p);

}


