//formula to conert farherneit to celcuis
// ((f-32)*5)/9=C

#include<iostream>
using namespace std;

void f_to_c(float f)
{
    float n=((f-32)*5)/9;
    cout<<n<<" "<<"celsius";
}
int main()
{
    system("cls");
    float f;
    cin>>f;

    f_to_c(f);
}