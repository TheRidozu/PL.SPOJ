#include <iostream>
#include <cmath>

unsigned lastDigit(unsigned& a, unsigned& b){
    switch(a % 10){
        case 0: {
            return 0;
            break;
        }
        case 1: {
            return 1;
            break;
        }
        case 2: {
            
            double t1 = b, t2 = t1 / 4;
            
            t2 = t2 - floor(t2);
            
            if( t2 == 0 )         { return 6; }
            else if( t2 == 0.25 ) { return 2; }
            else if( t2 == 0.5  ) { return 4; }
            else if( t2 == 0.75 ) { return 8; }
            break;
        }
        case 3: {
            double t1 = b, t2 = t1 / 4;
            
            t2 = t2 - floor(t2);
            
            if( t2 == 0 )         { return 1; }
            else if( t2 == 0.25 ) { return 3; }
            else if( t2 == 0.5  ) { return 9; }
            else if( t2 == 0.75 ) { return 7; }
            
            break;
        }
        case 4: {
            if( b % 2 == 0){ return 6; }
            else { return 4;}
            break;
        }
        case 5: {
            return 5;
            break;
        }
        case 6: {
            return 6;
            break;
        }
        
        case 7: {
            
            double t1 = b, t2 = t1 / 4;
            
            t2 = t2 - floor(t2);
            
            if( t2 == 0 )         { return 1; }
            else if( t2 == 0.25 ) { return 7; }
            else if( t2 == 0.5  ) { return 9; }
            else if( t2 == 0.75 ) { return 3; }
            
            break;
        }
        
        case 8: {
            
            double t1 = b, t2 = t1 / 4;
            t2 = t2 - floor(t2);
            
            if( t2 == 0 )         { return 6; }
            else if( t2 == 0.25 ) { return 8; }
            else if( t2 == 0.5  ) { return 4; }
            else if( t2 == 0.75 ) { return 2; }
            
            break;
        }
        
        case 9: {
            
            if( b % 2 == 0){ return 1; }
            else { return 9; }
            
            break;
        }
        
    }
    
    return 5;
}

int main(){
    
    unsigned a, b, D;
    
    std::cin >> D;
    
    for(unsigned i = 0; i < D; i++){
        std::cin >> a >> b;
        std::cout << lastDigit(a, b) << "\n";
    }
    
    return 0;
}
