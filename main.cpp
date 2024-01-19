#include <bits/stdc++.h>
std::ifstream in("input.txt");
std::ofstream out("output.txt");
#define e 2.7821
float time_step=0.01, time_simulation, maximum_time, decay_constant;
double initial_nucleai;
int main()
{
    in>>maximum_time>>decay_constant>>initial_nucleai;
    while(time_simulation<maximum_time)
        out<<time_simulation<<" "<<initial_nucleai*pow(e,-decay_constant*time_simulation)<<" "<<initial_nucleai-initial_nucleai*pow(e,-decay_constant*time_simulation)<<'\n',time_simulation+=time_step;
    return 0;
}
