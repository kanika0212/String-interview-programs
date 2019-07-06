/*
 * Permutation.cpp
 *
 *  Created on: Jul 6, 2019
 *      Author: Manu
 */

#include "Permutation.h"

Permutation::Permutation(std::string s) {
	// TODO Auto-generated constructor stub
			str=s;
}

Permutation::~Permutation() {
	// TODO Auto-generated destructor stub
}

int Permutation::PrintWithRepetitionRec(int index,std::string s){
		if (index == str.length()){
			std::cout<<""<<s<<std::endl;
			return 0;
		}

		//std::cout<<"index ="<<index<<"string="<<s<<std::endl;
		for(int i=0;i<str.length();i++){
			s[index] = str[i] ;
			//std::cout<<""<<s<<std::endl;
			PrintWithRepetitionRec(++index,s);
			index--;
       //     std::cout<<"string "<<s;
		  }
		}
void Permutation::PrintWithRepetition(){
	    const int l=str.length();
		std::string s(l, ' ');
		PrintWithRepetitionRec(0,s);

	}
