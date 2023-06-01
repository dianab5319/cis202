/*
FileName: main.cpp
description: using a tree structure the program will input the data and then output the size as well as the contents
             of the trees.
Date: 6/01/23
Author: Diana Barbosa
email: dianab5319@student.vvc.edu
*/
#include "tree.h"
#include <iostream>
#include <string>


int main()
{
   Tree t1("Anne");
   Tree t2("Peter");
   t1.add_subtree(t2);
   Tree t3("Zara");
   t1.add_subtree(t3);
   Tree t4("Savannah");
   t2.add_subtree(t4);
   std::cout << "Size: " << t1.size() << std::endl;

   t1.print();   // this will recursively print the tree.

   return 0;
}