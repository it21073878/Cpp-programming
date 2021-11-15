#include<iostream>
#include<iomanip>

void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2);
struct student {
	int mark1;
	int mark2;
	float t_CA1, t_CA2;
};

using namespace std;
int main()
{
	struct student  student[5];
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 1; j <= 2; j++)
		{
			if (j == 1)
			{
				cout << "Enter student " << i+1 << " Mark " << j;
				cin >> student[i].mark1;
			}
			else 
			{
				cout << "Enter student " << i+1 << "Mark" << j;
				cin >> student[i].mark2;
			}
		}
	}
	cout
		<< setw(10) << "student"
		<< setw(10) << "Mark1"
		<< setw(10) << "Mark2"
		<< setw(10) << "CA_1"
		<< setw(10) << "CA_2"
		<< endl;



	for (i = 0; i < 5; i++)
	{
		findMarks(student[i].mark1, student[i].mark2, student[i].t_CA1, student[i].t_CA2);

		cout
			<< setw(10) << i+1
			<< setw(10) << student[i].mark1
			<< setw(10) << student[i].mark2
			<< setw(10) << student[i].t_CA1
			<< setw(10) << student[i].t_CA2
			<< endl;
	}

	return 0;
}

void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2)
{
	t_CA1 = (t_marks1 * 20) / 100;
	t_CA2 = (t_marks1 * 30) / 100;
}