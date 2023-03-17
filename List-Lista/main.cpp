#include <cstdlib>
#include <iostream>

using namespace std;

class Lista
{
      private:
             int *VET;
             int ProximaPosicaoLivre;
             int MAX;
      public:
             Lista(int qtde)
             {
                 MAX = qtde;
                 VET = new int[MAX];
                 ProximaPosicaoLivre = 0;
             }
             
             void Mostra()
             {
                  for(int i = 0; i<ProximaPosicaoLivre; i++)
                  {
                          cout <<VET[i] <<"\n";
                  }
             }
             
             
             void EntrarPelaFrente(int n)
             {
                   for(int i = ProximaPosicaoLivre; i > -1; i--){ //Laço com teste para percorrer os itens na fila
                         
                             VET[i] = VET[i-1]; //A primeira posicao recebe a segunda e assim a fila vai andando......
                         
                     }
                     
                             ProximaPosicaoLivre++;
                             VET[0] = n;
                     
             }
             
             
             void EntrarPorTras(int n)
             {
                  if(ProximaPosicaoLivre < MAX) 
			        VET[ProximaPosicaoLivre++] = n;
             }
            
            
             int SairPelaFrente() //Metodo que retira o elemento da primeira posicao da fila
             {
                 if(ProximaPosicaoLivre > 0){
                     int Aux = VET[0]; //Variavel auxiliar para guardar o valor que vamos exibir do último que saiu.
                     
                     for(int i=0; i<ProximaPosicaoLivre; i++){ //Laço com teste para percorrer os itens na fila
                         VET[i] = VET[i+1]; //A primeira posicao recebe a segunda e assim a fila vai andando......
                     }
                     
                     ProximaPosicaoLivre--; //Decrementa a proxima posição livre, visto que a fila andô!o/
                     
                     return Aux; //Retorna qual foi o transeunte que saiu da fila.
                 }
             }
             
             int SairPorTras() //Metodo que remove o ultimo elemento adicionado na pilha
             {
                  if(ProximaPosicaoLivre > 0) //Testa se existe algum item na pilha (Caso o indice=ProximaPosicaoLivre == 0, significa q esta vazio)
			        return VET[--ProximaPosicaoLivre]; //Retorna o item na posicao anterior da comparacao
             }
};

int main(int argc, char *argv[])
{
    Lista list(10);
    list.EntrarPorTras(3);
    list.EntrarPorTras(5);
    list.EntrarPorTras(7);
    list.EntrarPorTras(1);
    list.Mostra();
    cout << "\n " << endl;
    // <<"\nSai o " <<list.Sair() <<".\n\n";
    //list.Mostra();
    //cout <<"\nSai o " <<list.Sair() <<".\n\n";
    list.EntrarPelaFrente(9);
    list.Mostra();
    cout << "\n " << endl;
    list.SairPorTras();
    list.Mostra();
    cout << "\n " << endl;
    list.SairPelaFrente();
    list.Mostra();
    
    return 0;
}
