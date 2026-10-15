#include <iostream>
#include <random>

int main(){
// min max so far
    int n, curmax, curmin;
    std::cout << "please enter number:" << std::endl;
    std::cin >> n;
    curmax = n;
    curmin = n;
    std::cout << "maximum so far: " << curmax << std::endl;
    std::cout << "minimum so far: " << curmin << std::endl;
    while(n != 0){
        std::cout << "please enter number:" << std::endl;
        std::cin >> n;
        if(n > curmax){
            curmax = n;
        }
        if(n < curmin){
            curmin = n;
        }
        std::cout << "maximum so far: " << curmax << std::endl;
        std::cout << "minimum so far: " << curmin << std::endl;
    }

//collatz conjecture
    int n, counter=0, max_num;
    std::cin>>n;
    max_num = n;
    while (n!=1){
        if (n%2 ==0){
            n = n/2;
        }else{
            n = 3*n + 1;
        }
        std::cout<<n<<std::endl;
        counter++;
        if(max_num<n){
            max_num = n;
        }
    }
    std::cout<<"done"<<std::endl;
    std::cout<<"this took "<<counter<<" steps"<<std::endl;
    std::cout<<"the max number is "<<max_num<<std::endl;

//number guesser
    int n, upper, lower;

    std::cout<<"What is the upper bound?\n";
    std::cin>>upper;

    std::cout<<"What is the lower bound?\n";
    std::cin>>lower;

    n = (upper - lower)/2;

    std::string user_input = "";
    std::string higher_lower = "";

    std::cout<<"Is your number "<<n<<"?\n";
        std::cin>>user_input;

    while (user_input == "no"){
        std::cout<<"Is your number higher or lower?\n";
        std::cin>>higher_lower;
        if (higher_lower=="higher"){
            lower = n;
            n = (upper - n)/2 + n;
        }else{
            upper = n;
            n = (lower - n)/2 + n;
        }
        std::cout<<"Is your number "<<n<<"?\n";
        std::cin>>user_input;
    }

//prime numbers
    int n;
    bool found_factor = false;
    
    std::cout << "please enter an integer greater than 1" << std::endl;
    
    std::cin >> n;

    if (n!=2 && n%2 ==0){
        found_factor = true;
    }

    for(int cf = 2; cf * cf <= n && !found_factor; cf+=2){
        if( (n % cf) == 0){ 
            found_factor = true;
        }
    }

    if(found_factor){
        std::cout << "the number is not prime" << std::endl;
    }else{
        std::cout << "the number is prime" << std::endl;
    }

//simple 10 word wordle
    std::random_device rd;
    std::mt19937 gen(rd());

    std::vector<std::string> words = {
        "eesoc", "level", "tough", "queen", "tower",
        "casio", "qstwo", "ethos", "sleep", "union"
    };

    int digit = std::uniform_int_distribution<int>(0, 9)(gen);
    std::string word = words[digit];

    int n[5];

    std::string guess = "";
    std::cout<<"enter in your guess for a 5 letter word related to imperial:\n";

    bool answer = false;

    while(answer == false){
        std::cin>>guess;

        for(int i=0; i<5; i++){
            if(guess[i] == word[i]){
                n[i] = 1;
            }else{
                n[i] = 0;
            }
            std::cout<<n[i]<<" ";
        }
        std::cout<<"\n";
        
        if(guess == word){
            answer = true;
        }else{
            std::cout<<"guess again\n";
        }
    }
}