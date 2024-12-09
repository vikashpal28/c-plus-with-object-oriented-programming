#include <iostream>
using namespace std;
class Runs
{
private:
int a_runs;
public:
Runs(int runs)
{
a_runs = runs;
}
Runs operator+(int value);
int getRuns() 
{
    return a_runs;
}
};
Runs Runs::operator+(int value)
{
return Runs(a_runs+value);
}
int main()
{
Runs Runs1(8);

Runs Runs2 = Runs1+6;
Runs2 = Runs2 + 9;
std::cout << "You got " << Runs2.getRuns() << " runs." << endl;
return 0;
}
/*
output
You got 23 runs.
*/