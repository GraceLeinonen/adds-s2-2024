#include <iostream>
#include <vector>
#include <limits>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

vector<int> split_to_ints(string input,string valid) {
	size_t startPos = 0;
	size_t endPos;
	size_t subStringLength;
	vector <int> result;

	do {
		endPos = input.find_first_not_of(valid, startPos);
		// if not found in string...
		if (endPos == string::npos) {	
			subStringLength = input.length();
		}
		// otherwise,
		else {
			subStringLength = endPos - startPos;
		}

		result.push_back(stoi(input.substr(startPos, subStringLength)));
		startPos = input.find_first_of(valid, endPos);
	}

	while (endPos != string::npos);
		return result;
}


int main(void) {
	// take-in inputs -- note this code assumes for a valid input format!
	string user_input;
	getline(cin, user_input);

	// cut out the numbers from user_input & place into vector of ints
	string numeric_characters = "-0123456789";
	vector<int> numeric_inputs = split_to_ints(user_input, numeric_characters);

	// copy all (but last 2) digits from vector into a c-array (to be passed into LinkedList constructor)
	int array_size = numeric_inputs.size()-2;
	int * input_array = new int[array_size];
	for(unsigned int i = 0; i < (numeric_inputs.size()-2); i++) {
		input_array[i] = numeric_inputs[i];
	}

	// then, copy the last 2 digits from user_input (ie the parameters) into a parameter array
	int param_array[2] = { 
		numeric_inputs.at(numeric_inputs.size()-2), 
		numeric_inputs.at(numeric_inputs.size()-1)
	};

	// finally, copy the letter code into a new variable
	string commandCode;
	for(unsigned int i = 0; i < user_input.length(); i++) {
		if(isalpha(user_input[i])) {
			commandCode.push_back(user_input[i]);
		}
	}

    // create list based on input data & array size
    LinkedList submissionList(input_array, array_size);

    // run function on the list depending on letter code, using the parameters
    if (commandCode=="I") {
        submissionList.insertPosition(param_array[0], param_array[1]);
    }
    else if (commandCode=="D") {
        if (!submissionList.deletePosition(param_array[0])) {
            cout << "ERROR ";
        }
    }
    else if (commandCode=="S") {
		int got = submissionList.search(param_array[0]);
        if (got == -1) {
            cout << "ERROR ";
        }
        else {
			std::cout << got << " ";
		}
    }
    else if (commandCode=="G") {
		int got = submissionList.get(param_array[0]);
        if (got == numeric_limits<int>::max()) {
            cout << "ERROR ";
        }
        else {
			std::cout << got << " ";
		}
    }
    else {
        cout << "invalid command" << endl;
        return 0;
    }

    submissionList.printList();

	return 0;
}

/*
#include <iostream>
#include <vector>
#include <limits>
#include "Node.h"
#include "LinkedListTest.h"

int main() {

    LinkedListTest ll;
    ll.insertPosition(-1,5);
    ll.printList();
    ll.insertPosition(1,1);
    ll.printList();
    ll.insertPosition(-100,3);
    ll.printList();
    ll.insertPosition(2,9);
    ll.printList();
    ll.insertPosition(5,10);
    ll.printList();
    int index = ll.search(1);
    int num = ll.get(3);
    std::cout << "The number is at position: " << index << std::endl;
    std::cout << "The number at position is: " << num << std::endl;
    bool didDelete = ll.deletePosition(3);
    std::cout << didDelete << std::endl;
    ll.printList();
    didDelete = ll.deletePosition(-1);
    std::cout << didDelete << std::endl;
    didDelete = ll.deletePosition(100);
    std::cout << didDelete << std::endl;
    ll.~LinkedListTest();
    ll.printList();
    ll.insertPosition(1,1);
    ll.printList();
    int array[] = {1,2,3};
    LinkedListTest ll2(array, 3);
    ll2.printList();
    ll2.insertPosition(10,1);
    ll2.printList();
    

    return 0;
}
*/

/*
#include <iostream>
#include <list>
#include <string>
#include "BigNumCalc.h"

int main() {


    BigNumCalc calc;

    std::string num1String = "9876543210";
    std::string num2String = "1234567890";

    std::list<int> num1 = calc.buildBigNum(num1String);
    std::list<int> num2 = calc.buildBigNum(num2String);

    std::list<int> product = calc.sub(num1, num2);

    for (std::list<int>::iterator it = product.begin(); it != product.end(); ++it) {
        std::cout << *it << " ";  
    }

    std::cout << std::endl;

    return 0;
}
*/