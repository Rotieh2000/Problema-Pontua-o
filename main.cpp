#include <bits/stdc++.h>

using namespace std;

int main() {
  float compras, atraso, ticket, pontos, pagamento, scorev,scorei, scorefp, classfinal;
  scorev = 0;
  scorei = 0;
  scorefp = 0;
  pontos = 0;
  compras = 0;
  atraso = 0;
  ticket= 0;
  pagamento = 0;
 cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
 cout << "----------------------------" << endl;
 cout << "INFORME OS DADOS DO �LTIMO ANO" << endl;
 cout << " " << endl;
 cout << "Quantas compras o cliente fez no �ltimo ano? ";
 cin >> compras;
 cout << "Qual o ticket m�dio? ";
 cin >> ticket;
 cout << "Quantas vezes o cliente atrasou o pagamento? "; 
 cout << "A maioria das compras foi em dinheiro, cart�o ou boleto (D/B/C)? ";
 cin >> pagamento;
 cout << "  " << endl;
 cout << "Score do volume de compras = " << scorev <<endl;
 cout << " " << endl;
 cout << "Score de inadipl�ncia = " << scorei << endl;
 cout << "Score de forma de pagamento = " << scorefp << endl;
 cout << " " << endl;
 cout << "Classifica��o final = " << classfinal << endl;

}