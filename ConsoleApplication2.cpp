#include <iostream> 
using namespace std;


void task1()
{
	int a; 
	cout << "Enter some number:" << endl;
	cin >> a;
	for (int i = 0; i <= a; i++)
	{
		for (int k = 0; k <= i; k++)
		{
			cout << k;
		}
		cout << endl;
	}
}


void task3()
{
int al;
int fo = 0, git = 0;
cout << "Srednee, 0 - end" << endl;;
while (true)
{
    cin >> al;

    if (al == 0)
    {
        double sred = double(fo) / git;
        cout << sred << endl;
        break;
    }
    else
    {
        fo += al;
        git += 1;
    }

}
}

int main()
{
    int number = 0;

    while (true)
    {
        cout << "Make your choice:" << endl << "1. Task 1" << endl << "2. Task 3" << endl << "3. Exit" << endl;
        cin >> number;
        switch (number)
        {
        case 1:
            task1();
            break;
        case 2:
            task3();
            break;
        default:
            return 0;
        }
    }
}