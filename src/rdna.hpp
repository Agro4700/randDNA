#include <iostream>
#include <random>
#include <string>
using namespace std;

string randDNA (seed,bases,n)
	{
		std::mt19337 eng (seed);
		std::uniform_string_distribution <>unifrm(bases);
		string DNA ="";
		
		for(int c=0 ; c <= n ; c++)
		{
			DNA(c) = unifrm(eng) ;
		}
		
		return DNA;
		
		
