#include <iostream>
#include <array>
#include <vector>

using namespace std;

template<typename T>
void sortVect(vector<T> &vect)
{
	for(size_t i=0;i<vect.size();i++)
	{
		for(size_t j=0;j<vect.size()-i-1;j++)
		{
			T temp;
			if(vect[j]>vect[j+1])
			{
				temp=vect[j];
				vect[j]=vect[j+1];
				vect[j+1]=temp;
			}
		}
	}
}

int main()
{
	int val;
	vector <int> vect;

	cout<<"enter the number to be sorted";
	while(1)
	{
		cin>>val;
		if(val<0)
			break;
		vect.push_back(val);

	}

	for(int i:vect)
		cout<<i<<"  ";

	sortVect<int>(vect);

	cout<<"\n\nafter sorting"<<endl;
	for(int i:vect)
		cout<<i<<"  ";

	vector <char> charVect;
	char c;
	while(1)
	{
		cin>>c;
		if(c=='0')
			break;
		charVect.push_back(c);

	}
	cout<<endl<<"This is for char";
	for(auto i:charVect)
		cout<<i<<"  ";
	sortVect<char>(charVect);

	cout<<"\n\nafter sorting"<<endl;
	for(auto i:charVect)
		cout<<i<<"  ";
	return 0;
}
