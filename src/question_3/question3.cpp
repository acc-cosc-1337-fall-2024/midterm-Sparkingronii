#include "question3.h"
using std::string;

bool test_config()
{
    return true;
}

double get_dna_p_distance(string DNA1, string DNA2)
{
    //string DNA1 = "GAGCCTACTAACGGGAT";
    //string DNA2 = "CATCGTAATGACGGCCT";

    int length1 = DNA1.size();

    int countG1 = 0;
for (int i = 0; i < length1; i++)
    {
        if (DNA1[i] ==  'G')
        {
            ++ countG1;
        }
    } return countG1;
int countA1 = 0;
for (int i = 0; i < length1; i++)
    {
        if (DNA1[i] ==  'A')
        {
            ++ countA1;
        }
    } return countA1;
int countC1 = 0;
for (int i = 0; i < length1; i++)
    {
        if (DNA1[i] ==  'C')
        {
            ++ countC1;
        }
    } return countC1;
int countT1 = 0;
for (int i = 0; i < length1; i++)
    {
        if (DNA1[i] ==  'T')
        {
            ++ countT1;
        }
    } return countT1;



int length2 = DNA2.size();

    int countG2 = 0;
for (int i = 0; i < length2; i++)
    {
        if (DNA2[i] ==  'G')
        {
            ++ countG2;
        }
    } return countG2;
int countA2 = 0;
for (int i = 0; i < length2; i++)
    {
        if (DNA2[i] ==  'A')
        {
            ++ countA2;
        }
    } return countA2;
int countC2 = 0;
for (int i = 0; i < length2; i++)
    {
        if (DNA2[i] ==  'C')
        {
            ++ countC2;
        }
    } return countC2;
int countT2 = 0;
for (int i = 0; i < length2; i++)
    {
        if (DNA2[i] ==  'T')
        {
            ++ countT2;
        }
    } return countT2;

double p_distance = ((countA1 - countA2) + (countG1 - countG2) + (countC1 - countC2) + (countT1 - countT2)) / length1;
return p_distance;

}