#include <bits/stdc++.h>

using namespace std;

int main() {
  float compras, atraso, ticket, pontosv, pontosi, pontosfp, pagamento, scorev,scorei, scorefp, classfinal, D, B, C;
  scorev = 0;
  scorei = 0;
  scorefp = 0;
  pontosi = 0;
  pontosfp = 0;
  compras = 0;
  atraso = 0;
  ticket= 0;
  pagamento = 0;
 cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
 cout << "----------------------------" << endl;
 cout << "INFORME OS DADOS DO ÚLTIMO ANO" << endl;
 cout << " " << endl;
 cout << "Quantas compras o cliente fez no último ano? ";
 cin >> compras;
 cout << "Qual o ticket médio? ";
 cin >> ticket;
  if(compras == 0){
   pontosv = 0;
   }
   if((compras == 2) && (ticket <= 3000)){
     pontosv = 20;
   }
   if((compras >= 2) && (ticket <= 3000)){
     pontosv = 40;
   }
   if(ticket > 3000){
     pontosv = 60;
   }
 cout << "Quantas vezes o cliente atrasou o pagamento? ";
 cin >> atraso;
 if((atraso > 1) || (pontosv == 0)){
   pontosi = 0;
 }
 if(atraso == 1){
   pontosi = 15;
 }
 if(atraso == 0){
   pontosi = 30;
 }
 cout << "A maioria das compras foi em dinheiro, cartão ou boleto (D/B/C)? ";
 cin >> pagamento;
 if(pagamento == D){
   pontosfp = 5;
 }
 if((pagamento == B) || (pagamento == C)){
   pontosfp = 10;
 }
 cout << "  " << endl;
 cout << "Score do volume de compras = " << pontosv <<endl;
 cout << " " << endl;
 cout << "Score de inadiplência = " << pontosi << endl;
 cout << "Score de forma de pagamento = " << pontosfp << endl;
 cout << " " << endl;
 cout << "Classificação final = " << classfinal << endl;

}