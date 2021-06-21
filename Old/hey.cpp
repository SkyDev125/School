#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <sstream> 
#include <fstream>

using namespace std;

void tokenize(std::string const &str, const char delim,std::vector<std::string> &out)
{
    size_t start;
    size_t end = 0;

    while ((start = str.find_first_not_of(delim, end)) != std::string::npos)
    {
        end = str.find(delim, start);
        out.push_back(str.substr(start, end - start));
    }
}

void myfunction() {
    
    bool var1;
    bool var2;
    
    var1 = true;
    var2 = false;
    
    cout << "var1 = " << var1 << endl;
    cout << "var2 = " << var2 << endl;
};

void myfunction1() {
    
    bool x;
    
    cout << x << endl;
    cout << (2 < 3) << endl;
    cout << (4 > 5) << endl;
    cout << (1 <= 7) << endl;
    cout << (2 >= 2) << endl;
    cout << (4 == 4) << endl;
    cout << (4 != 4) << endl;

};

void myfunction2() {
    bool x;
    x = ((2 > 7) && (6 > 3));
    cout << x << endl;
    x = ((true) || (false));
    cout << x << endl;
    cout << ((2 < 7) && (6 > 3)) << endl;
    cout << ((2 < 7) || (6 > 3)) << endl;
    cout << ((7 < 2) || (6 > 3)) << endl;
    x = !x;
    cout << x << endl;
    cout << !(2 < 3) << endl;
};

void myfunction3() {
    double largura;
    cout  << "Digite a largura do quadrado: ";
    cin >> largura;
    if (largura >= 0) {
        cout << "A área do quadrado é: ";
        cout << largura*largura << endl;
    }
};

void myfunction4() {
    int numero;
    cout  << "Digite um numero: ";
    cin >> numero;
    if (numero % 2 == 0) {
        cout << "O numero é par" << endl;
    } else {
        cout << "O numero é impar" << endl;
    };
};

void myfunction5() {
    int nota;
    cout << "Digite a nota do aluno:";
    cin >> nota;
    
    if (nota >= 90){
        cout << "O conceito do aluno é A" << endl;
    } else if(nota >= 80) {
        cout << "O conceito do aluno é B" << endl;
    } else if(nota >= 70) {
        cout << "O conceito do aluno é C" << endl;
    } else if(nota >= 60) {
        cout << "O conceito do aluno é D" << endl;
    } else {
        cout << "O conceito do aluno é E" << endl; 
    }
};

void myfunction6() {
    int i; //contador
    for(i = 0; i < 10; i++){
        cout << "ola Mundo!" << endl;
    }
};

void myfunction7() {
    int i; //contador
    int n;
    cout << "Escolha quantas vezes quer a mensagem? ";
    cin >> n;
    for(i = 0; i < n; i++){
        cout << "ola Mundo!" << endl;
    }
};

void myfunction8() {
    int i; //contador
    int n;
    cout << "Escolha o numero final: ";
    cin >> n;
    for(i = 0; i <= n; i++){
        cout << "ola Mundo!" << endl;
    }; 
};

void myfunction9() {
    int i;
    int n;
    int soma;
    cout << "digite o numero final: ";
    cin >> n;
    soma = 0;
    for (i = 1; i <= n; i++){
        soma += 1;
    };
    cout << "Somatório = " << soma << endl;
};

void myfunction10() {
    int i;
    int n;
    int soma;
    cout << "Digite o numero final: ";
    cin >> n;
    soma = 0;
    for (i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            soma += 1;
        };
    };
    cout << "Somatório = " << soma << endl;
};

void myfunction11() {
    int i;
    int j;
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            cout << i;
        };
        cout << endl;
    };
};

void myfunction12() {
    int x = 5;
    int y = 7;
    int opcao;
    do {
        cout << "[1] somar" << endl;
        cout << "[2] Multiplicar" << endl;
        cout << "[0] Sair do programa" << endl;
        cout << "Digite uma opção: ";
        cin >> opcao;
        if (opcao == 1) {
            cout << x + y << endl;
        } else if (opcao == 2) {
            cout << x*y << endl;
        }
    } while (opcao != 0);
};

void myfunction13() {
    int i;
    int times;
    times = 5;
    for (i = 0; i < times; i++) {
        cout << "*****" << endl;
    }
}

void myfunction14() {
    int i;
    int j;
    int l;
    int rows;
    int spacesL;
    int spacesR;
    
    cout << "insira o numero de rows da arvore: ";
    cin >> rows;
    spacesL = rows;
    spacesR = rows;
    l = 0;
    
    for (i = 0; i < rows; i++) {
        
        for (j = 0; j < spacesL; j++) {
            cout << " ";
        };
        
        
        for (j = 0 ; j <= l; j++) {
            cout << "*";
        };
        
        for (j = 0; j < spacesR; j++) {
            cout << " ";
        };
        
        spacesL = spacesL - 1;
        spacesR = spacesR - 1;
        l = l + 2;
        
        cout << endl;
        
    }
}

void myfunction15() {
    int x;
    int i;
    x = 5;
    cout << "x externo = " << x << endl;
    for (int i=0; i < 1; i++) {
        int y;
        y = 7;
        cout << "y interno = " << y << endl;
        cout << "i interno = " << i << endl;
    }
    cout << "x externo = " << x << endl;
    cout << "i externo = " << i << endl;
};

void myfunction16() {
    int x;
    int i;
    cout << "x externo = " << x << endl;
    cout << "i externo = " << i << endl;
    cout << "x externo = " << &x << endl;
    cout << "i externo = " << &i << endl;
}

void myfunction17() {
    int num;
    cout <<  "digite um numero" << endl;
    cin >> num;
    cout << "o numero e " << num << endl;
    cout << "o endreco e " << &num << endl;
}

void myfunction18() {
    int a[] = {5,7,2,1,3,5};
    int soma;
    soma = a[0] + a[2] + a[4];
    cout << "a[0] + a[2] + a[4] -> " << soma << endl;
    cout << "Endereco do arranjo -> " << a << endl;
}

void myfunction19() {
    char nome[10];
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Terceira letra de seu nome e" << endl;
    cout << nome[12] << endl;
}

void myfunction20() {
    string nome;
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Terceira letra de seu nome e" << endl;
    cout << nome[0] << endl;
}

void myfunction21() {
    double x[3][2];
    double resultado;
    cout << "Digite a nota do aluno 0 na prova 0: ";
    cin >> x[0][0];
    cout << "Digite a nota do aluno 0 na prova 1: ";
    cin >> x[0][1];
    cout << "Digite a nota do aluno 1 na prova 0: ";
    cin >> x[1][0];
    cout << "Digite a nota do aluno 1 na prova 1: ";
    cin >> x[1][1];
    cout << "Digite a nota do aluno 2 na prova 0: ";
    cin >> x[2][0];
    cout << "Digite a nota do aluno 2 na prova 1: ";
    cin >> x[2][1];
    resultado = ((x[0][0] + x[1][0] + x[2][0])/3);
    cout << "Nota media na prova 0 = " << resultado << endl;
    resultado = ((x[1][0] + x[1][1])/2);
    cout << "Nota final do aluno 1 = " << resultado << endl;
}

void myfunction22() {
    double a[5];
    double b[5];
    for (int i = 0; i < 5; i++) {
        cout << "Digite o " << i << " numero de a: ";
        cin >> a[i]; 
    }
    for (int i = 0; i < 5; i++) {
        cout << "Digite o " << i << " numero de b: ";
        cin >> b[i]; 
    }
    for (int i = 0; i < 5; i++) {
        cout << "A multiplicacao do" << i << " numero de pelo " <<  i << " numero de b e: " << a[i]*b[i] << endl;
    }
}

void GoodProgram() {
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

void myfunction24() {
    cout << "hello";
    cout << "world";
    cout << endl;
} 

void myfunction25() {
    int x;
    int a;
    x = 4;
    x = 1;
    cout << "x+a = " << x + a << endl;
}

double myfunction26() {
    return 3.14;
}

// 2/19/2021 ex1 aula
int cubo(int a){
    return a * a * a;
}

int eleva(int a, int n){
    int result = 1;
    for (int i = 0; i < n; i++) {
        result = result*a;
    }
    return result;
}

int fatorial(int a) {
    
    int b[100];
    int result = 1;
    
    for (int i = 0; i < a; i++) {
        b[i] = a-i;
    }

    for (int i = 0; i < a; i++) {
        result = result*b[i];
    }
    
    return result;
}

void ex1_29() {
    int x;
    cout << "Digite um numero: " << endl;
    cin >> x;

    cout << x << " elevado ao cubo e: " << cubo(x) << endl;

    int y;
    cout << "Digite um valor para o expoente: " << endl;
    cin >> y;

    cout << x << " elevado a " << y << " = ";
    cout << eleva(x,y) << endl;

    cout << x << "! = " << fatorial(x) << endl;
}

// 2/19/2021 desafio 1
double somar() {
    double x;
    double y;
    cout << "================================================================" << endl;
    cout << "escolha o 1 numero: ";
    cin >> x;
    
    cout << "escolha o 2 numero: ";
    cin >> y;
    cout << "================================================================" << endl;
    cout << x << " + " << y << " = " << x+y <<endl;
}

double subtrair() {
    double x;
    double y;
    cout << "================================================================" << endl;
    cout << "escolha o 1 numero: ";
    cin >> x;
    
    cout << "escolha o 2 numero: ";
    cin >> y;
    cout << "================================================================" << endl;
    cout << x << " - " << y << " = " << x-y <<endl;
}

double dividir() {
    double x;
    double y;
    cout << "================================================================" << endl;
    cout << "escolha o 1 numero: ";
    cin >> x;
    
    cout << "escolha o 2 numero: ";
    cin >> y;
    cout << "================================================================" << endl;
    cout << x << " / " << y << " = " << x/y <<endl;
}

double multiplicar() {
    double x;
    double y;
    cout << "================================================================" << endl;
    cout << "escolha o 1 numero: ";
    cin >> x;
    
    cout << "escolha o 2 numero: ";
    cin >> y;
    cout << "================================================================" << endl;
    cout << x << " * " << y << " = " << x*y <<endl;
}

void myfunction27(){
    int opcao;
    char enter;

    //menu
    while(opcao != 0){
        cout << "=================================================================" << endl;
        cout << "Calculadora virtual" << endl;
        cout << "=================================================================" << endl;
        cout << "[1] Somar 2 numeros" << endl;
        cout << "[2] Subtrair 2 numeros" << endl;
        cout << "[3] Dividir 2 numeros" << endl;
        cout << "[4] Multiplicar 2 numeros" << endl;
        cout << "[0] Sair do programa 2 numeros" << endl;
        cout << "=================================================================" << endl;
        cout << " " << endl;
        cout << "Selecione a opcao desejada: ";
        cin >> opcao;
        system ("CLS");
        switch (opcao) {

            //[1] Somar 2 numeros
            case 1:{
                somar();
            
                //verificação
                cout << "================================================================" << endl;
                cout << "insira 0 para voltar ao menu" << endl;
                cin >> enter;
                system ("CLS");
                break;
            }
            
            //[2] Subtrair 2 numeros
            case 2:{
                subtrair();
            
                //verificação
                cout << "================================================================" << endl;
                cout << "insira 0 para voltar ao menu" << endl;
                cin >> enter;
                system ("CLS");
                break;
            }
        
            //[3] Dividir 2 numeros
            case 3:{

                dividir();
                
                //verificação
                cout << "================================================================" << endl;
                cout << "insira 0 para voltar ao menu" << endl;
                cin >> enter;
                system ("CLS");
                break;
            }

            //[4] Multiplicar 2 numeros
            case 4:{

                multiplicar();

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

// 2/19/2021 desafio 2
float mediapond(float nota1, float nota2) {
    return (nota1*0.4) + (nota2*0.6);
}

char notaFinal(int mediapond) {
    char notaFinal;
    if (mediapond < 5) {
        notaFinal = 'D';
    } else if (mediapond < 10) {
        notaFinal = 'C';
    } else if (mediapond < 15) {
        notaFinal = 'B';
    } else {
        notaFinal = 'A';
    }
    return  notaFinal;
}

void myfunction28(){
    double alunos[10][2];
    int alunoEscolhido;
    float nota1,nota2;
    float mediapon;

    //alunos estáticos
    {
        //aluno 1
        alunos[0][1] = 10;
        alunos[0][2] = 20;
        //aluno 2
        alunos[1][1] = 17;
        alunos[1][2] = 18;
        //aluno 3
        alunos[2][1] = 19;
        alunos[2][2] = 20;
        //aluno 4
        alunos[3][1] = 16;
        alunos[3][2] = 17;
        //aluno 5
        alunos[4][1] = 15;
        alunos[4][2] = 14;
        //aluno 6
        alunos[5][1] = 13;
        alunos[5][2] = 15;
        //aluno 7
        alunos[6][1] = 16;
        alunos[6][2] = 14;
        //aluno 8
        alunos[7][1] = 11;
        alunos[7][2] = 10;
        //aluno 9
        alunos[8][1] = 15;
        alunos[8][2] = 16;
        //aluno 10
        alunos[9][1] = 19;
        alunos[9][2] = 20;
    }

    cout << "=================================================================" << endl;
    cout << "escolha o aluno: ";
    cin >> alunoEscolhido;
    cout << "=================================================================" << endl;

    
        nota1 = alunos[alunoEscolhido-1][1];
        nota2 = alunos[alunoEscolhido-1][2];

    mediapon = mediapond(nota1,nota2);
    
    cout << "O aluno teve uma media de " << mediapon << " e uma nota final " << notaFinal(mediapon);
}

int main(){
    myfunction28();
    return 0;
}