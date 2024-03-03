#include "question3.h"
using std::cout;
using std::string;

int main()
{
string DNA1 = "GAGCCTACTAACGGGAT";
string DNA2 = "CATCGTAATGACGGCCT";
int distance = 0;

cout<<"The p-distance between "<<" "<<DNA1<<" "<<"and"<<" "<<DNA2<<" "<<"is"<<"\n";
distance = get_dna_p_distance(DNA1, DNA2);

cout<<distance;

    return 0;
}