///////////////////////////////////////
//             DESAFIO A             //
//        Corresponde ou nao         //
///////////////////////////////////////

#include <iostream>
 
using namespace std;
 
int main()
{
    int N, A, B, i=0;
  
 	//cout << "Insira a quantidade de casos: ";
	cin >> N; 
   
    	while(i<N)
		{
    	//cout << "Insira dois digitos para verificar se o segundo corresponde ao primeiro:" << endl;
		cin >> A >> B;
	
			while (B!=0 && A%10==B%10)
			{
				A=A/10;
				B=B/10;
			}
					if(B==0){
					cout << "Encaixa" << endl;
					i++;
					}
			
					else{
					cout << "Nao encaixa" << endl;
					i++;
					}
		}
return 0;	
 }
    

 
