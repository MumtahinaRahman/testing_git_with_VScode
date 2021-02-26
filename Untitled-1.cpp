//program 1 to create a string out of my ID:190042129
#include <bits/stdc++.h>
using namespace std;
int main()
{
     string stu_id;
     int i,j;
     string zero = "ZERO", one = "ONE", two = "TWO", three = "THREE", four = "FOUR", five = "FIVE", six = "SIX", seven = "SEVEN", eight = "EIGHT", nine = "NINE";
     string hoho[4];
     printf("input your 9 digit student ID: ");
     cin >> stu_id;
     cout << "your student ID is: " << stu_id << endl;
     cout << "the length of your ID is: " << stu_id.length() << endl;
     cout << "the last four digits are: " << stu_id[stu_id.length()-4] << stu_id[stu_id.length()-3] << stu_id[stu_id.length()-2] << stu_id[stu_id.length()-1] << endl;
     cout << "the last four digits in words: ";
     for(j=4,i=0; j>0,i<4; j--,i++){
            switch(stu_id[stu_id.length()-j]){
            case '0': cout << zero; hoho[i]= zero; break;
            case '1': cout << one; hoho[i]= one; break;
            case '2': cout << two; hoho[i]= two; break;
            case '3': cout << three; hoho[i]= three; break;
            case '4': cout << four; hoho[i]= four; break;
            case '5': cout << five; hoho[i]= five; break;
            case '6': cout << six; hoho[i]= six; break;
            case '7': cout << seven; hoho[i]= seven; break;
            case '8': cout << eight; hoho[i]= eight; break;
            case '9': cout << nine; hoho[i]= nine; break;
            }
     }
     printf("\n");

     string gene_str = "MYIDIS" + hoho[0] + hoho[1] + hoho[2] + hoho[3];
     cout << "so the generated string is: " << gene_str << endl;


     return 0;
}
