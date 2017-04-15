#include <iostream>
#include "assignment.h"

using namespace std;
int main()
{
    Assignment *assignment = new Assignment();
    assignment->input();
    assignment->first();
    assignment->second();
    assignment->third();
    assignment->fourth();
    return 0;
}

