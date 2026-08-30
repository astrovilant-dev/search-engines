#include <iostream>
#include <string>

int main() {
    std::cout << " search engine " << std::endl;

    std::string search;
    std::cout << "the account is not permanent because for privacy reason " << std::endl;
    std::getline(std::cin, search);

    std::cout << "hi " << search << " search" << std::endl;

   std::string ask;
    std::getline(std::cin, ask);

    // Search Queries
    if (ask == "what dose hi mean") {
        std::cout << "It means a friendly greeting!" << std::endl;
    }

    else if (ask == "what is a cat") {



        std::cout << "a small, furry, four-legged meat-eating animal often kept as a pet" << std::endl;
    }

    else if (ask == "what is a dog") {

        std::cout << "a domesticated mammal belonging to the family Canidae and order Carnivora" << std::endl;
    }
    else if (ask == "how do i say hi in chinese ") {


        std::cout << "Nǐ hǎo ";
    }
    else if (ask == " what dose Nǐ hǎo mean"){
         std::cout << " Nǐ hǎo mean hi in chinese";
    }

    else if (ask == "what is the date today") {
         std::cout << " i dont know ";
    }
     else if (ask == "what is the time "){
       std::cout << "i dont know ";

     }

    else if ( ask == "when did romen empire collapse"){
        std::cout << "The Western Roman Empire fell in 476 CE when the Germanic leader Odoacer deposed the last emperor, Romulus Augustulus.";

    }
    else if (ask == "what is the fastest car"){
       std::cout << " The ThrustSSC (SuperSonic Car) holds the ultimate title as the fastest jet car—and the fastest land vehicle—ever built, reaching a staggering top speed of 763.035 mph (1,227.985 km/h).Driven by Royal Air Force pilot Andy Green in the Nevada desert on October 15, 1997, it became the first and only land vehicle to officially break the sound barrier (Mach 1.02).";

    }

    else if (ask == "arch or windows 11"){
       std::cout << " be a fucking man and use arch linux ";
        }

    else  if (ask == " the gratest os ") {
          std::cout << "its arch linux ";
      }

    return 0;
}
