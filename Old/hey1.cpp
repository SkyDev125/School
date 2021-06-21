#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <sstream> 
#include <fstream>

using namespace std;

void myfunction23() {
    //declaração das variaveis
    char nome;
    string disciplinas[25][101][21];
    string alunosEscolhidos[100];
    int disciplina;
    int opcao = -1;
    int disciplinaN = 0;
    int nomeN = 0;
    char enter;
    int escolhaDisciplina;
    string escolhaAluno;
    int escolhaAlunoInt;
    int counterClassificacoes;
    float media = 0;

    while (opcao != 0)
    {
        system ("CLS");
        //Menu
        cout << "[1] Adicionar disciplinas" << endl;
        cout << "[2] Adicionar alunos" << endl;
        cout << "[3] Ver disciplinas (apenas funciona apos ao menos 1 disciplina)" << endl;
        cout << "[4] Ver alunos (apenas funciona apps ao menos 1 aluno" << endl;
        cout << "[5] Inserir classificacoes dos alunos por disciplina" << endl;
        cout << "[6] Mostrar as classificacacoes de um aluno em uma disciplina" << endl;
        cout << "[7] Mostrar todas as classificacoes de um aluno" << endl;
        cout << "[8] Calcular media de 1 aluno por disciplina" << endl;
        cout << "[9] Calcular media do aluno final" << endl;
        cout << "[10] Calcular media da disciplina final" << endl;
        cout << "[11] Calcular media geral" << endl;
        cout << "[12] Determinar nota mais alta do aluno perante a disciplina (WIP)" << endl;
        cout << "[13] Determinar nota mais alta (aluno - disciplina) (WIP)" << endl;
        cout << "[14] Exportar tabela com disciplinas - alunos - classificacoes(WIP)" << endl;
        cout << "[0] Terminar programa" << endl;
        cout << " " << endl;
        
        //seleção do menu
        cout << "Selecione a opcao desejada: ";
        cin >> opcao;

        //Opçoes
        int n;
        system ("CLS");
        switch (opcao){
            
            //[1] adicionar disciplinas
            case 1: {

                //numero de disciplinas a adicionar
                cout << "================================================================" << endl;
                cout << "Quantas disciplinas pretende adicionar? ";
                cin >> n;

                //inserir disciplinas
                for (int i = 0; i < n; i++) {
                    cout << "insira o nome da " << disciplinaN+1 << " disciplina: ";
                    cin >> disciplinas[disciplinaN][0][0];
                    disciplinaN++;
                }

                //verificação
                cout << "================================================================" << endl;
                cout << "insira 0 para voltar ao menu" << endl;
                cin >> enter;
                system ("CLS");
                break;
            }

            //[2] Adicionar alunos
            case 2: {

                //numero de alunos a adicionar
                cout << "================================================================" << endl;
                cout << "quantos alunos pretende adicionar? ";
                cin >> n;
                
                //inserir alunos
                for (int i = 0; i < n; i++) {
                    cout << "insira o nome do " << nomeN+1 << " aluno: ";
                    cin >> disciplinas[0][nomeN+1][0];
                    nomeN++;
                }

                //verificação
                cout << "================================================================" << endl;
                cout << "insira 0 para voltar ao menu" << endl;
                cin >> enter;
                system ("CLS");
                break;
            }
            
            //[3] Ver disciplinas (apenas funciona apos ao menos 1 disciplina)
            case 3: {
                
                //Mostrar Disciplinas
                cout << "================================================================" << endl;
                for (int i = 0; i < (sizeof(disciplinas) / sizeof(disciplinas[0])); i++) {
                    if (disciplinas[i][0][0] != "") {
                        cout << "[" << i+1 << "]" << disciplinas[i][0][0] << endl;
                    } 
                }

                //verificação
                cout << "================================================================" << endl;
                cout << "insira 0 para voltar ao menu" << endl;
                cin >> enter;
                system ("CLS");
                break;      
            }

            //[4] Ver alunos (apenas funciona apps ao menos 1 aluno
            case 4: {

                //Mostrar alunos
                cout << "================================================================" << endl;
                for (int i = 0; i < (sizeof(disciplinas[0][0]) / sizeof(disciplinas[0][0][0])); i++) {
                    if (disciplinas[0][i+1][0] != "") {
                        cout << "[" << i+1 << "]" << disciplinas[0][i+1][0] << endl;
                    } 
                }

                //verificação
                cout << "================================================================" << endl;
                cout << "insira 0 para voltar ao menu" << endl;
                cin >> enter;
                system ("CLS");
                break;
            }

            //[5] Inserir classificacoes dos alunos por disciplina
            case 5: {

                //Mostrar disciplinas
                cout << "================================================================" << endl;
                for (int i = 0; i < (sizeof(disciplinas) / sizeof(disciplinas[0])); i++) {
                    if (disciplinas[i][0][0] != "") {
                        cout << "[" << i+1 << "]" << disciplinas[i][0][0] << endl;
                    } 
                }
                cout << "================================================================" << endl;

                //Escolher a disciplina
                cout << "Selecione a disciplina (numero): ";
                cin >> escolhaDisciplina;
                system ("CLS");

                //Mostrar alunos
                cout << "================================================================" << endl;
                for (int i = 0; i < (sizeof(disciplinas[0][0]) / sizeof(disciplinas[0][0][0])); i++) {
                    if (disciplinas[0][i+1][0] != "") {
                        cout << "[" << i+1 << "]" << disciplinas[0][i+1][0] << endl;
                    } 
                }
                cout << "================================================================" << endl;

                //Escolher os alunos/ o aluno para mudar/dar a nota.
                cout << "digite o/s numero/s do/s aluno/s escolhido/s (separe por virgulas): ";
                cin >> escolhaAluno;
                system ("CLS");

                //dividir por virgulas a opção acima, para colocar dentro de um array
                for (int i = 0; i < (sizeof(alunosEscolhidos) / sizeof(alunosEscolhidos[0])); i++) {
                    alunosEscolhidos[i] = escolhaAluno.substr(0,escolhaAluno.find(","));
                    escolhaAluno = escolhaAluno.substr(escolhaAluno.find(",") + 1);
                    if (alunosEscolhidos[i-1] == alunosEscolhidos[i]) {
                        alunosEscolhidos[i] = "";
                        i = 100;
                    }
                }

                //colocar classificações
                int counter1 = 0;
                for (int i = 0; i < (sizeof(alunosEscolhidos) / sizeof(alunosEscolhidos[0])); i++) {
                    if (alunosEscolhidos[i] != "") {
                        counter1++;
                    }
                }

                //exibir disciplina
                cout << "================================================================" << endl;
                cout << "disciplina: " << disciplinas[escolhaDisciplina-1][0][0] << endl;
                for (int i = 0; i < counter1; i++) {
                    int j;
                    int a = atoi(alunosEscolhidos[i].c_str());
                    int classificacoesExistentes = 0;
                    
                    //Exibir nome 
                    cout << "aluno: " <<disciplinas[0][a][0] << endl;
                    cout << "================================================================" << endl;

                    //selecionar o nº de classificações
                    cout << "quantas classificacoes pretende adicionar? ";
                    cin >> j;
                    
                    //Calcular classificacoes existentes
                    for (int i = 1; i < (sizeof(disciplinas[0][0]) / sizeof(disciplinas[0][0][0])); i++) {
                        if (disciplinas[escolhaDisciplina-1][a][i] != "") {
                            classificacoesExistentes++;
                        }
                    } 

                    //input das novas avaliaçoes
                    for (int i = 0; i < j; i++) {
                        cout << "insira a classificacao da " << classificacoesExistentes+1 << " avaliacao: ";
                        cin >> disciplinas[escolhaDisciplina-1][a][classificacoesExistentes+1];
                        classificacoesExistentes++;   
                    }
                    cout << " " << endl;
                }
                counter1 = 0;

                //verificação
                cout << "================================================================" << endl;
                cout << "insira 0 para voltar ao menu" << endl;
                cin >> enter;
                system ("CLS");
                break;
            }

            //[6] Mostrar as classificacacoes de um aluno em uma disciplina
            case 6: {
                
                //Mostrar disciplinas
                cout << "================================================================" << endl;
                for (int i = 0; i < (sizeof(disciplinas) / sizeof(disciplinas[0])); i++) {
                    if (disciplinas[i][0][0] != "") {
                        cout << "[" << i+1 << "]" << disciplinas[i][0][0] << endl;
                    } 
                }
                cout << "================================================================" << endl;

                //Escolher a disciplina
                cout << "Selecione a disciplina (numero): ";
                cin >> escolhaDisciplina;
                system ("CLS");

                //Mostrar alunos
                cout << "================================================================" << endl;
                for (int i = 0; i < (sizeof(disciplinas[0][0]) / sizeof(disciplinas[0][0][0])); i++) {
                    if (disciplinas[0][i+1][0] != "") {
                        cout << "[" << i+1 << "]" << disciplinas[0][i+1][0] << endl;
                    } 
                }
                cout << "================================================================" << endl;

                //Escolher o aluno para mostrar as classificacoes.
                cout << "digite o numero do aluno escolhido: ";
                cin >> escolhaAlunoInt;
                system ("CLS");

                //Mostrar todas as classificações do aluno na disciplina
                cout << "disciplina: " << disciplinas[escolhaDisciplina-1][0][0] << endl;
                cout << "aluno: " << disciplinas[0][escolhaAlunoInt][0] << endl;
                cout << "================================================================" << endl;
                for (int i = 0; i < (sizeof(disciplinas[0][0]) / sizeof(disciplinas[0][0][0]))-1; i++) {
                    if (disciplinas[escolhaDisciplina-1][escolhaAlunoInt][i+1] != "") {
                        cout << "[" << i+1 << "]" << disciplinas[escolhaDisciplina-1][escolhaAlunoInt][i+1] << endl;
                    } 
                }
                
                //verificação
                cout << "================================================================" << endl;
                cout << "insira 0 para voltar ao menu" << endl;
                cin >> enter;
                system ("CLS");
                break;
            }

            //[7] Mostrar todas as classificacoes de um aluno
            case 7: {

                //Mostrar alunos
                cout << "================================================================" << endl;
                for (int i = 0; i < (sizeof(disciplinas[0][0]) / sizeof(disciplinas[0][0][0])); i++) {
                    if (disciplinas[0][i+1][0] != "") {
                        cout << "[" << i+1 << "]" << disciplinas[0][i+1][0] << endl;
                    } 
                }
                cout << "================================================================" << endl;

                //Escolher o aluno para mostrar as classificacoes.
                cout << "digite o numero do aluno escolhido: ";
                cin >> escolhaAlunoInt;
                system ("CLS");

                //Mostrar todas as classificações do aluno na disciplina
                cout << "================================================================" << endl;
                cout << "aluno: " << disciplinas[0][escolhaAlunoInt][0] << endl;
                for (int i = 0; i < (sizeof(disciplinas) / sizeof(disciplinas[0])); i++) {
                    if (disciplinas[i][0][0] != "") {
                        cout << "================================================================" << endl;
                        cout << "disciplina: " << disciplinas[i][0][0] << endl;
                        cout << "================================================================" << endl;
                        for (int o = 0; o < (sizeof(disciplinas[0][0]) / sizeof(disciplinas[0][0][0]))-1; o++) {
                            if (disciplinas[i][escolhaAlunoInt][o+1] != "") {
                                cout << "[" << o+1 << "]" << disciplinas[i][escolhaAlunoInt][o+1] << endl;
                            } 
                        }
                    }
                }
                
                //verificação
                cout << "================================================================" << endl;
                cout << "insira 0 para voltar ao menu" << endl;
                cin >> enter;
                system ("CLS");
                break;
            }        
        
            //[8] Calcular media de 1 aluno por disciplina
            case 8: {
                
                //Mostrar disciplinas
                cout << "================================================================" << endl;
                for (int i = 0; i < (sizeof(disciplinas) / sizeof(disciplinas[0])); i++) {
                    if (disciplinas[i][0][0] != "") {
                        cout << "[" << i+1 << "]" << disciplinas[i][0][0] << endl;
                    } 
                }
                cout << "================================================================" << endl;

                //Escolher a disciplina
                cout << "Selecione a disciplina (numero): ";
                cin >> escolhaDisciplina;
                system ("CLS");

                //Mostrar alunos
                cout << "================================================================" << endl;
                for (int i = 0; i < (sizeof(disciplinas[0][0]) / sizeof(disciplinas[0][0][0])); i++) {
                    if (disciplinas[0][i+1][0] != "") {
                        cout << "[" << i+1 << "]" << disciplinas[0][i+1][0] << endl;
                    } 
                }
                cout << "================================================================" << endl;

                //Escolher o aluno para mostrar as classificacoes.
                cout << "digite o numero do aluno escolhido: ";
                cin >> escolhaAlunoInt;
                system ("CLS");

                //Calcular a media do aluno em uma disciplina
                cout << "disciplina: " << disciplinas[escolhaDisciplina-1][0][0] << endl;
                cout << "aluno: " << disciplinas[0][escolhaAlunoInt][0] << endl;
                cout << "================================================================" << endl;
                int counter2 = 0;
                for (int i = 0; i < (sizeof(disciplinas[0][0]) / sizeof(disciplinas[0][0][0]))-1; i++) {
                    if (disciplinas[escolhaDisciplina-1][escolhaAlunoInt][i+1] != "") {
                        media = media + atoi(disciplinas[escolhaDisciplina-1][escolhaAlunoInt][i+1].c_str());
                        counter2++;
                    } 
                }
                cout << "Media: " << media/counter2 << endl;
                media = 0;

                //verificação
                cout << "================================================================" << endl;
                cout << "insira 0 para voltar ao menu" << endl;
                cin >> enter;
                system ("CLS");
                break;
            }        
        
            //[9] Calcular media do aluno final
            case 9: {

                //Mostrar alunos
                cout << "================================================================" << endl;
                for (int i = 0; i < (sizeof(disciplinas[0][0]) / sizeof(disciplinas[0][0][0])); i++) {
                    if (disciplinas[0][i+1][0] != "") {
                        cout << "[" << i+1 << "]" << disciplinas[0][i+1][0] << endl;
                    } 
                }
                cout << "================================================================" << endl;

                //Escolher o aluno para mostrar as classificacoes.
                cout << "digite o numero do aluno escolhido: ";
                cin >> escolhaAlunoInt;
                system ("CLS");

                //Calcular a media do aluno
                cout << "================================================================" << endl;
                cout << "aluno: " << disciplinas[0][escolhaAlunoInt][0] << endl;
                cout << "================================================================" << endl;
                int counter2 = 0;
                for (int i = 0; i < (sizeof(disciplinas) / sizeof(disciplinas[0])); i++) {
                    if (disciplinas[i][0][0] != "") {
                        for (int o = 0; o < (sizeof(disciplinas[0][0]) / sizeof(disciplinas[0][0][0]))-1; o++) {
                            if (disciplinas[i][escolhaAlunoInt][o+1] != "") {
                                media = media + atoi(disciplinas[i][escolhaAlunoInt][o+1].c_str());
                                counter2++;
                            } 
                        }
                    }
                }
                cout << "Media em todas as disciplinas: " << media/counter2 << endl;
                media = 0;

                //verificação
                cout << "================================================================" << endl;
                cout << "insira 0 para voltar ao menu" << endl;
                cin >> enter;
                system ("CLS");
                break;
            }        
            
            //[10] Calcular media da disciplina final
            case 10: {

                //Mostrar disciplinas
                cout << "================================================================" << endl;
                for (int i = 0; i < (sizeof(disciplinas) / sizeof(disciplinas[0])); i++) {
                    if (disciplinas[i][0][0] != "") {
                        cout << "[" << i+1 << "]" << disciplinas[i][0][0] << endl;
                    } 
                }
                cout << "================================================================" << endl;

                //Escolher a disciplina
                cout << "Selecione a disciplina (numero): ";
                cin >> escolhaDisciplina;
                system ("CLS");

                //calcular todas as classificações de todos os alunos em uma disciplina
                cout << "================================================================" << endl;
                cout << "disciplina: " << disciplinas[escolhaDisciplina-1][0][0] << endl;
                cout << "================================================================" << endl;
                int counter3 = 0;
                for (int o = 0; o < (sizeof(disciplinas[0]) / sizeof(disciplinas[0][0]))-1; o++) {
                    for (int i = 0; i < (sizeof(disciplinas[0][0]) / sizeof(disciplinas[0][0][0]))-1; i++) {
                        if (disciplinas[escolhaDisciplina-1][o+1][i+1] != "") {
                            media = media + atoi(disciplinas[escolhaDisciplina-1][o+1][i+1].c_str());
                            counter3++;
                        } 
                    }
                }
                cout << "Media da disciplina: " << media/counter3 << endl;
                media = 0;
                
                //verificação
                cout << "================================================================" << endl;
                cout << "insira 0 para voltar ao menu" << endl;
                cin >> enter;
                system ("CLS");
                break;
            }

            //[11] Calcular media geral
            case 11: {

                int counter4 = 0;
                
                for (int a = 0; a < (sizeof(disciplinas) / sizeof(disciplinas[0])); a++) {
                    if (disciplinas[a][0][0] != "") {
                        for (int o = 0; o < (sizeof(disciplinas[0]) / sizeof(disciplinas[0][0]))-1; o++) {
                            for (int i = 0; i < (sizeof(disciplinas[0][0]) / sizeof(disciplinas[0][0][0]))-1; i++) {
                                if (disciplinas[a][o+1][i+1] != "") {
                                    media = media + atoi(disciplinas[a][o+1][i+1].c_str());
                                    counter4++;
                                } 
                            }
                        }
                    }
                }
                cout << "================================================================" << endl;
                cout << "Media de todas as disciplinas: " << media/counter4 << endl;
                media = 0;

                //verificação
                cout << "================================================================" << endl;
                cout << "insira 0 para voltar ao menu" << endl;
                cin >> enter;
                system ("CLS");
                break;
            }

        }
    }
}

int main() {
    myfunction23();
}