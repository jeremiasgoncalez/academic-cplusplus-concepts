#include <cstdlib>
#include <iostream>

using namespace std;

class FilaDeArray
{
      private:
             int *VET;
             int ProximaPosicaoLivre;
             int MAX;
             int Aux = 0;
      public:
             FilaDeArray(int qtde)
             {
                 MAX = qtde;
                 VET = new int[MAX];
                 ProximaPosicaoLivre = 0;
             }
             void Entrar(int n)
             {
                  if(ProximaPosicaoLivre < MAX) 
			VET[ProximaPosicaoLivre++] = n;
             }
             void Mostra()
             {
                  for(int i = 0; i<ProximaPosicaoLivre; i++)
                  {
                          cout <<VET[i] <<"\n";
                  }
             }
             
             /*****MODIFICACOES SIGNIFICATIVAS NO METODO COMPARADO AO PILHA / NA FILA EH SEMPRE O PRIMEIRO QUE SAI / UEUS****/
             
             int Sair() //Metodo que retira o elemento da primeira posicao da fila
             {
                 
                 Aux = VET[0]; //Variavel auxiliar para guardar o valor que vamos exibir do último que saiu.
                 
                 for(int i=0; i<ProximaPosicaoLivre; i++){ //Laço com teste para percorrer os itens na fila
                     VET[i] = VET[i+1]; //A primeira posicao recebe a segunda e assim a fila vai andando......
                 }
                 
                 ProximaPosicaoLivre--; //Decrementa a proxima posição livre, visto que a fila andô!o/
                 
                 return Aux; //Retorna qual foi o transeunte que saiu da fila.
             }
};

int main(int argc, char *argv[])
{
    FilaDeArray fila(50);
    fila.Entrar(3);
    fila.Entrar(5);
    fila.Entrar(7);
    fila.Entrar(1);
    fila.Mostra();
    cout <<"\nSai o " <<fila.Sair() <<".\n\n";
    fila.Mostra();
    cout <<"\nSai o " <<fila.Sair() <<".\n\n";
    fila.Mostra();
    
    return 0;
}
