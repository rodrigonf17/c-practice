///////////////////////////////////////
//             DESAFIO B             //
//        Ajudando o professor       //
///////////////////////////////////////

#include <iostream>
#include <stdio.h>
#include <string.h>
 #include <cstring> 

using namespace std;
 
int main()
{
   int N, M, i=0, j=0, aux;
   string aluno[50];
   string presente[50];
   
   cin >> N;
   //if(N==0){return 0;}
   
   while(i<=N){
   		getline(cin, aluno[i]);
   		cout << endl;
   		i++;
		   //strcmp(aluno, assinatura);
   }
   
	cin >> M;
   while(j<=M){
   	getline(cin, presente[j]);
   	cout << endl;
   	j++;
   }
   
   i=0;
   j=0;
   for (i; i<=N; i++){
   	for (j; j<=M; j++){
   		if (strcmp(aluno[i],presente[j])!=0){
   			aux++;
		   }
	   }
   }
    cout << aux;  
 return 0;	
 }
    

 
