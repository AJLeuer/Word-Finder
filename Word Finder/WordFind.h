//
//  WordFind.h
//  Word Finder
//
//  Created by Adam James Leuer on 1/23/14.
//  Copyright (c) 2014 Adam James Leuer. All rights reserved.
//

#ifndef __Word_Finder__WordFind__
#define __Word_Finder__WordFind__

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std ;

class WordFind {
	
private:
	string partialWord ; //a string with space(s) instead of characters at one or more index
	ifstream wordList ;
	
	bool compNoSpcs(string) ; //checks if input string equals partialWord, ignoring blankspaces in partialWord
	
public:
	unsigned matchesFound = 0 ;
	WordFind(string) ;
	vector<string> search() ;
	
	
} ;

#endif /* defined(__Word_Finder__WordFind__) */
