#ifndef STACKS_DATA_H
#define STACKS_DATA_H
#include <string>
using std::string;
/*
* Simple data structure to simulate the idea of an ADT which
contains
* an identifier and some kind of data. It's not important how
complex
* or simple this structure is, we only want to simulate the
idea of
* a single simple structure that contains both an identifier
and data.
*/
struct Data
{
int id;
string information;
Data(int id, string information)
{
this->id = id;
this->information = information;
}
};
#endif /* STACKS_DATA_H */