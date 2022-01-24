

{
    std::string input;
    

    while (getline(std::cin,input))
    {
        if(input == "ADD")
        {
            std::cout << "ADD" << std::endl;
        }
        else if (input == "SEARCH")
        {
            std::cout << "SEARCH" << std::endl;
        }
        else if (input == "EXIT")
        {
            std::cout << "EXIT" << std::endl;
        }
        else
        {
            std::cout << "다시 쓰세요!" << std::endl;
        }
}