#include <iostream>
#include <vector>

// vector operations
// int main(){
//     std::vector<int> v; 
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     std::cout << v[0]*(v[1]+v[2]) << std::endl;
// }

// vectors and loops & occurrences and indices
int main(){
    int n, s;
    std::cout<<"key in the vector size:\n";
    std::cin>>n;
    std::vector<int> cnt(n);
    std::vector<int> v(n);
    for(int i=0;i<n;i++){
        std::cout<<"please enter a number:\n";
        std::cin>>v[i];
    }
    std::cout<<"please enter s\n";
    std::cin>>s;
    for(int i=0; i<n; i++){
        if(v[i]==s){
            cnt[0]++;
            cnt[cnt[0]]=i;
        }
    }
    if(cnt[0]==0){
        std::cout<<"there are no occurences of s\n";
    }else{
        std::cout<<"there are "<<cnt[0]<<" occurences of s at indices:\n";
        for(int i=1; i<=v.size(); i++){
            std::cout<<cnt[i]<<std::endl;
        }
    }
}