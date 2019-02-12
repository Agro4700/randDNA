#include <iostream>
#include <random>
#include <string>
using namespace std;

string randDNA (int seed, string bases, int n)
	{
		mt19937 eng(seed);
		uniform_int_distribution<int> uni(0,bases.size()-1);
		string DNA;
				
		for(int c=0; c<n; c++)
		{
			DNA+= bases[uni(eng)];
		}
		return DNA;
		
	}
