class Solution {
public:
    signed int sum(signed int num1, int num2) {
       return (num1+num2);
    }
    void main(){
        signed int a,b;
        std::cin>>a>>b;
        std::cout<<sum(a,b);
    }
};