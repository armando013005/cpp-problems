#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
  std::string userQuestion;
void ball(int answer){
    std::cout << "Enter your question so I can give you the answer\n>>";
    std::cin >> userQuestion;
    switch(answer){
    case 0:
        std::cout << "It is certain\n";return;
        case 1:
            std::cout << "It is decidedly so.\n";return;
        case 2:
            std::cout << "Without a doubt.\n" ;return;
        case 3:
            std::cout << "Without a doubt.\n" ;return;
        case 4:
            std::cout << "Yes - definitely.\n";return;
        case 5:
            std::cout << "You may rely on it.\n";return;
        case 6:
            std::cout << "As I see it, yes.\n";return;
        case 7:
            std::cout << "Most likely.\n";return;
        case 8:
            std::cout << "Outlook good.\n";return;
        case 9:
            std::cout << "Yes.\n";return;
        case 10:
            std::cout << "Signs point to yes.\n";return;
        case 11:
            std::cout << "Reply hazy, try again.\n";return;
        case 12:
            std::cout << "Ask again later.\n";return;
        case 13:
            std::cout << "Better not tell you now.\n";return;
        case 14:
             std::cout << "Cannot predict now.\n";return;
        case 15:
            std::cout << "Concentrate and ask again.\n";return;
        case 16:
            std::cout << "Don't count on it.\n";return;
        case 17:
            std::cout << "My reply is no.\n";return;
        case 18:
            std::cout << "My sources say no.\n";return;
        case 19:
            std::cout << "Outlook not so good.\n";return;
        case 20:
            std::cout << "Very doubtful.\n"; return;
    }
    std::cout << "Your question has no answer :'(\n"; return;

}
int main()
{
  srand(time(NULL)); //Generate a random number each time the program runs
  int answer = std::rand() % 20; //It allows us to generate a random number between 0 to 20.
  std::cout << "MAGIC 8-BALL\n";
    char si = 'y';
    while(si == 'y'){
        ball(answer);
        std::cout<<"Wanna play again? (y/n)\n";
        std::cin >> si;
        if(si == 'y'){
            answer = std::rand() % 20;
            continue;
        }else{
            return 0;
        }
    }

  return 0;
}
