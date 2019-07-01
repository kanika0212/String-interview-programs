# String-interview-programs
solutions for geeksForGeeeks string interview questions
#include <iostream>
#include <string.h>


class LongestCommonSubstring{
    private:
	std::string s1;
	public:

	LongestCommonSubstring(std::string str){
		s1 = str;
	}
	int FindLongestCommonSubstringLength(std::string f1){
		int DynProg[s1.length()][f1.length()] = {0}, max=0,end;
		for (int i=0;i<s1.length();i++){
			for (int j=0;j<f1.length();j++){
				if (s1[i]==f1[j]){
					DynProg[i][j] =  DynProg[i-1][j-1] +1;
					if (max < DynProg[i][j])
										end = i;
					max = std::max(max,DynProg[i][j]);


				}

			}
		}
		std::string X;
		X = s1.substr(end - max +1 , max);
		std::cout<<" substr = "<<X<<std::endl;
		return max;
	}
};

