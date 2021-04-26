#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int graphicsCard(int GPU)
{
	cout << "Enter the clock speed (in Megahertz) of graphics card (GPU): ";
	cin >> GPU;
	return GPU;
}

int processor(int CPU)
{
 cout << "Enter the clock speed (in Megahertz) of processor (CPU): ";
 cin >> CPU;
 return CPU;
}

int core(int Cores)
{
 cout << "Enter the number of cores in processor (CPU): ";
 cin >> Cores;
 return Cores;
}

int resolution(int choice)
{
	cout<< "Select the resolution of monitor" << std::endl; 
 std::cout << "1. 1280 x 720" << std::endl << "2. 1920 x 1080" << std::endl << "3. 2560 x 1440" << std::endl << "4. 3840 x 2160";
std::cin >> choice;
int Multiplier;
switch(choice)
{
	cin>>Multiplier;
	case 1:
		Multiplier = 1;
	case 2:
		Multiplier = .75;
	case 3:
		Multiplier = .55;
	case 4:
		Multiplier = .35;
}
return choice, Multiplier;
}

int calculation(int Score, int Performance, int GPU, int Cores, int CPU, int Multiplier)
{
Score = (5*GPU+Cores*CPU*Multiplier);
int Ultra;
int High;
int Medium;
int Low;
int Unable_to_Play;
if (Score>17000) Performance=Ultra;
if (17000>Score>15000) Performance=High;
if (15000>Score>13000) Performance=Medium;
if (13000>Score>11000) Performance=Low;
if (11000>Score) Performance=Unable_to_Play;
return Score; Performance;
}

int display(int GPU, int CPU, int Cores, int choice, int Score, int Performance)
{
	cout <<"the GPU clock speed: " <<GPU<<std::endl;
cout <<"The CPU clock speed: " <<CPU<<std::endl;
cout <<"The number of cores: " <<Cores<<std::endl;
cout <<"The monitor resolution: " <<choice<<std::endl;
cout <<"The performance score: " <<Score<<std::endl;
cout <<"The recommended graphics quality: " <<Performance<<std::endl;
}
int main(char GPU, char CPU, char Cores, char choice, char Score, char Performance, char Multiplier)
{
	int num_comp;
	cout <<"Computer Hardware Graphics Quality Recommendation Tool" << endl;
	cout <<"How many computers are being processed: ";
	while(!(cin >> num_comp) || (num_comp < 0))
	{
		cout <<"please enter in a number greater than 0: ";
	}
	for(int i = 0; i < num_comp; i++)
	{
	graphicsCard(GPU);
	processor(CPU);
	core(Cores);
	resolution(choice);
	calculation(Score, Performance, GPU, Cores, CPU, Multiplier);
	display(GPU, CPU, Cores, choice, Score, Performance);
	}
	return 0;
}
