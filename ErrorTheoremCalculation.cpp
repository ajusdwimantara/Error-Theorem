#include <iostream>
#include <cmath>

class Data
{
    public:
    int n;
    float data[100];

    float average()
    {
        float sum=0.0;
        for(int i=0;i<n;i++)
        {
            sum += data[i];
        }
        return sum/n;
    }

    float error()
    {
        float sum=0.0;
        for(int i=0;i<n;i++)
        {
            sum += pow((data[i]-average()), 2);
        }
        return sqrt(sum/(n-1));
    }
};

int main()
{
    Data practicum;
    float n = 0.0;
    std::cout<<"how many data?\n";
    std::cin>>practicum.n;
    std::cout<<"insert the data\n";
    for(int i=0;i<practicum.n;i++)
    {
        std::cin>>practicum.data[i];
    }
    std::cout<<"average: "<<practicum.average()<<'\n';
    std::cout<<"error: "<<practicum.error();
}