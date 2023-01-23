#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    string Name;
    float Salary;

    Employee(string name, float salary)
    {
        this->Name = name;
        this->Salary = salary;
    }

    void printSalary()
    {
        cout << "Name : " << this->Name << "Salary : " << this->Salary << endl;
    }
};
void swap(Employee arr[], int i, int j)
{

    Employee temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void sortEmp(Employee arr[],int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j].Salary > arr[j + 1].Salary)
                swap(arr, j+1, j);
}
int main()
{
    Employee E1("Raj", 40000);
    Employee E2("Vikram", 45000);
    Employee E3("Prabhat", 100000);
    Employee E4("vicky", 30000);
    Employee E5("vitu", 25000);
    Employee arr[5] = {E1, E2, E3, E4, E5};
    sortEmp(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i].Name<<" "<<arr[i].Salary<<"\n";
    }
}