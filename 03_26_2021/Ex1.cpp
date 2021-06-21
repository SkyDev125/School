#include <iostream> //importing the library IOSTREAM into the code to be used
using namespace std; //making all code run with the std:: behind it
int nums[10]; // Creating the array that will be used throughout the program with a max size of 10
int num; // Creating a num variable

void ordenar(){ //ordenar void function
    cout << "================================================================" << endl; //posting this message in the command prompt
    int temp; // Creating a temp variable
    for (int a=0; a<num; a++) { // starting a for function that will run the number of times the variable num has
        for (int b=0; b<num; b++) { // starting a for function that will run the number of times the variable num has
            if (nums[a] < nums[b]) { // starting an if function that analyses the past position with the current position to order the numbers
                temp = nums[a]; // saving the value of the array's position in temp
                nums[a] = nums[b]; // changing the value of the array's position as a, to move the value from position b to array
                nums[b] = temp; // changing the value of the array's position b, to move the value from temp to b, finishing the order of the numbers.
            }
        }
    }
    for (int i=0; i<num; i++) { // starting a for function that will run the number of times the variable num has
        cout << nums[i] << endl; //posting this message in the command prompt
    }
    cout << "================================================================" << endl; //posting this message in the command prompt
}

void guarda_valores() { //Guarda_valores void function
    int valor; //Creating Valor variable
    num = 0; // Changing the value of num variable to start the matrix at 0
    for(int i=0; i<10; i++) { //starting a for function that will run for 10 times
        nums[i] = 0; // setting all array positions with 0
    }
    for(int i=0; i<10; i++) { // starting a for function that will run 10 times
        cout << "Introduza um valor: "; //posting this message in the command prompt
        cin >> valor; // changing the valor variable with the input from the user
        if (valor > 0){ //if function that will run if the value of valor is bigger than 0 (if any value has been inserted)
            nums[i] = valor; //setting the value to the position in the array
            num++; //adding 1 to variable num
        } else { //executing an else function after an if function to break and stop the loop.
            break; //Jumping off this function
        }
    }
}

void somasequencia() { //somasequencia void function
    int soma = 0; // Creating soma variable
    for(int i=0; i<10; i++) { // starting a for function that will run for 10 times
        soma = soma + nums[i]; //adding all the numbers in the array
    }
    cout << "Soma: " << soma << endl; //posting this message in the command prompt
}

void RemoveNumber() { //RemoveNumber void function
    cout << "================================================================" << endl; //posting this message in the command prompt
    int posicao; //Creating variable for position
    cout << "Qual a posiçao em que quer remover?" << endl; //posting this message in the command prompt
    cin >> posicao; // changing the position variable with the input from the user

    nums[posicao-1] = 0; // changing the position selected to 0
}

void CleanArray() { //CleanArray void function
    for(int i = 0; i < 10; i++){ // starting a for function that will run 10 times
        nums[i] = 0; //making all spaces in the array become 0
    }
}

void menu() { //Menu Void function
    int opc; //Creating menu variable
    for (;;) { // Creating the menu
        cout << "Menu:" << endl; //posting this message in the command prompt
        cout << "1 - Introduzir numeros" << endl; //posting this message in the command prompt
        cout << "2 - Mostrar a soma dos numeros" << endl; //posting this message in the command prompt
        cout << "3 - Ordena a sequencia dos numeros" << endl; //posting this message in the command prompt
        cout << "4 - Remover um numero do array" << endl; //posting this message in the command prompt
        cout << "5 - Limpar o array" << endl; //posting this message in the command prompt
        cout << "0 - Sair" << endl; //posting this message in the command prompt
        cin >> opc; // Changing Menu Variable with the input from the user
        switch (opc) { //Starting switch case to use the Menu

            case 1: // Selecting case 1
            guarda_valores(); //executing void function
            break;  //Jumping off this case

            case 2: // Selecting case 2
            somasequencia(); //executing void function
            break; //Jumping off this case

            case 3: // Selecting case 3
            ordenar(); //executing void function
            break; //Jumping off this case

            case 4: // Selecting case 4
            RemoveNumber(); //executing void function
            break; //Jumping off this case

            case 5: // Selecting case 5
            CleanArray(); //executing void function
            break; //Jumping off this case

            case 0: // Selecting case 0
            exit(0); //Exiting the programm
            break; //Jumping off this case

            default: // Selecting case default (all others that arent in the case's list)
            cout << "opcao errada" << endl; //posting this message in the command prompt
            break; //Jumping off this case
        }
    }
}

int main() { // Main function that will execute the whole programm
    menu(); //executing void function
    system("pause"); //Sending a pause signal to  the command promt 
    return 0; // Exiting the program with 0
}