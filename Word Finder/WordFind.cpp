//
//  WordFind.cpp
//  Word Finder
//
//  Created by Adam James Leuer on 1/23/14.
//  Copyright (c) 2014 Adam James Leuer. All rights reserved.
//

#include "WordFind.h"

WordFind::WordFind(string s) {
	this->partialWord = s ;
	wordList = ifstream() ;
	wordList.open("words.txt", ios::in) ;
}

vector<string> WordFind::search() {
	string tempStr = string() ;
	vector<string> solutions = vector<string>() ;
	 	
	/*
	for (unsigned i = 0 ; i < 100 ; i++) {
		wordList >> tempStr ;
		cout << tempStr << endl ;
		streampos pos = wordList.tellg() ;
		cout << (int)pos << endl ;
	}
	wordList.seekg(10, ios::beg) ;
	wordList >> tempStr ;
	cout << tempStr << endl ;
	 */
	
	while (!(wordList.eof())) {
		wordList >> tempStr ;
		if (compNoSpcs(tempStr)) {
			matchesFound++ ;
			solutions.push_back(tempStr) ;
		}
	}
	
	return solutions ;
}

bool WordFind::compNoSpcs(string inp) {
	if (inp.length() != partialWord.length()) {
		return false ;
	}
	
	for (string::size_type i = 0 ; i < inp.length() ; i++) {
		char a = partialWord.at(i) ;
		char b = inp.at(i) ;
		if ((a == b) || (a == ' ')) {
			continue ;
		}
		else {
			return false ;
		}
	}
	return true ;
}










