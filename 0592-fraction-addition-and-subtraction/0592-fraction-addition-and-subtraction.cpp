class Solution {
public:
    string fractionAddition(string expression) {
        istringstream in(expression);
        int A = 0;
        int B = 1;
        int a;
        int b;
        char _;
        int g;
        while(in >> a >> _ >> b){
            A = A * b + B * a;
            B *= b;
            g = abs(__gcd(A,B));
            A /= g;
            B /= g;
        }
        return to_string(A) + '/' + to_string(B);
    }
};