#include <iostream>
#include "Person.h"
#include <string>

using namespace std;

int main() {

	Person person("Georgia");

	cout << "location of object" << &person << endl;

	cout << person.toString() << endl;

	cout << "Name of person with get method: " << person.getName() << endl;

	return 0;
}