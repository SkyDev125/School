//Divisão do array para informação novamente para as outras variaveis (permitir a edição da ementa)
    s = ementas[1];
    delimiter = "\n";
    string testArray[100];

    pos = 0;
    while ((pos = s.find(delimiter)) != std::string::npos) {
    
        token = s.substr(0, pos);
        testArray[counter1] = token;
        testArray[counter1].erase(std::remove_if(testArray[counter1].begin(), testArray[counter1].end(), [](unsigned char x) { return std::isspace(x); }), testArray[counter1].end());
        s.erase(0, pos + delimiter.length());
        counter1++;
    
    }

    counter1 = 0;
    std::cout << s << std::endl;
