//
//  main.cpp
//  Word Finder
//
//  Created by Adam James Leuer on 1/23/14.
//  Copyright (c) 2014 Adam James Leuer. All rights reserved.
//

#include <iostream>

#include "WordFind.h"

int main(int argc, const char * argv[])
{

	// insert code here...
	
	string toSolve = "u ea " ;
	
	WordFind w = WordFind(toSolve) ;
	
	cout << "Your input is \"" << toSolve << '\"' << endl ;
	cout << "Looking for matches for \"" << toSolve << '\"' << "..." << endl ;
	
	vector<string> s = w.search() ;
	
	if (w.matchesFound == 0) {
		cout << "Sorry, no solutions found." << endl ;
	}
	else if (w.matchesFound == 1) {
		cout << "Found a match! The solution word is \"" << s.at(0) << '\"' << endl ;
	}
	else {
		string leadText = "Found multiple matches! The solution words are: " ;
		cout << leadText ;
		cout << '\"' << s.at(0) << '\"' << endl ;
		for (vector<string>::size_type i = 1 ; i < s.size() ; i++) {
			for (string::size_type spcs = 0 ; spcs < leadText.length() ; spcs++) {
				cout << ' ' ;
			}
			cout << '\"' << s.at(i) << '\"' << endl ;
		}
	}
	
    return 0;
}

