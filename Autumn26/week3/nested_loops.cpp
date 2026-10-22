#include <iostream>

int main(){
    int n;
    std::cin >> n;

    // n times we draw one row
    // note that we need a different variable
    // for the loop counter
    for(int c2 = 0; c2 < n; c2++){

        // the following loop draws one row
        for(int c = 0; c < n; c++){
            std::cout << "*"; 
            // there is no << std::endl
            // because we want them on the same row
        }

        std::cout << std::endl;
        // we go on a newline after each row

    }

// bidimensional figure with while loops
    int n1, n2=0, n3=0;
    std::cin>>n1;
    while(n2<n1){
        while(n3<n1){
            std::cout<<"*";
            n3++;
        }
        n3 = 0;
        std::cout<<"\n";
        n2++;
    }

// multiplication table
    int n;
    std::cin>>n;
    for (int k = 0; k<n; k++){
        for (int i = 0; i<n; i++){
            std::cout<<(k+1)*(i+1)<<" ";
        }
        std::cout<<"\n";
    }
}