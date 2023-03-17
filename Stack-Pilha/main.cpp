#include <cstdlib>
#include <iostream>

using namespace std;

class PilhaDeArray //Cria-se a classe PilhaDeArray
{
      private:
             int *VET; //Instancia o ponteiro *VET
             int ProximaPosicaoLivre; //variavel auxiliar
             int MAX; //Variavel que vai determinar tamanho maximo do vetor(quantidade)
      public:
             PilhaDeArray(int qtde) //Construtor da classe PilhaDeArray
             {
                 MAX = qtde; //Atribui o MAX com o parametro vindo da criacao da pilha(obj)
                 VET = new int[MAX]; //Instancia um array de VET com o tamanho MAX
                 ProximaPosicaoLivre = 0; //Atribui valor inicial à Variavel ProximaPosicaoLivre
             }
             void Empilha(int n) //Metodo para inserir itens no final da pilha
             {
                  if(ProximaPosicaoLivre < MAX) //Testa se existe proxima posicao livre no vetor
			VET[ProximaPosicaoLivre++] = n; //Caso tenha a posicao no teste o metodo adiciona na ProximaPosicaoLivre o valor que veio no Empilha
             }
             void Mostra() //Metodo void que imprime o VET e exibe os dados da pilha
             {
                  for(int i = 0; i<ProximaPosicaoLivre; i++) //Teste / Laço
                  {
                          cout <<VET[i] <<"\n"; //Imprime no console o valor dentro da posicao de VET
                  }
             }
             int Desempilha() //Metodo que remove o ultimo elemento adicionado na pilha
             {
                  if(ProximaPosicaoLivre > 0) //Testa se existe algum item na pilha (Caso o indice=ProximaPosicaoLivre == 0, significa q esta vazio)
			return VET[--ProximaPosicaoLivre]; //Retorna o item na posicao anterior da comparacao
             }
}; //CHAVE COM PONTO E VIRGULA QUE PHOD3 A NOSSA VIDA!!!##@@!Q!

int main(int argc, char *argv[]) //Declaracao default da classe Main
{
    PilhaDeArray pilha(50);//Instancia um obj do tipo PILHA parametrizado com um inteiro 50.
    pilha.Empilha(3); //Insere o valor 3 na primeira posicao da pilha por meio do metodo Empilha!
    pilha.Empilha(5); //Insere o valor 5 na segunda posicao da pilha por meio do metodo Empilha!
    pilha.Empilha(7); //Insere o valor 7 na terceira posicao da pilha por meio do metodo Empilha!
    pilha.Empilha(1); //Insere o valor 1 na quarta posicao da pilha por meio do metodo Empilha!
    pilha.Mostra(); //Invoca o metodo MOSTRA do Obj pilha
    cout <<"\nDesempilha " <<pilha.Desempilha() <<".\n\n"; //Remove o ITEM 1 da pilha (Atual Ultimo elemento)
    cout <<"\nDesempilha " <<pilha.Desempilha() <<".\n\n"; //Remove o ITEM 7 da pilha (Atual Ultimo elemento)
    pilha.Mostra(); //Invoca o metodo MOSTRA do obj pilha atualizado;
   
   return 0; //SAÍDA -> ENCERRA O programa!!@!!!
}