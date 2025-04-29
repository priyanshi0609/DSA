 double myPow(double x, int n) {
        long binform=n ;
        if (n <0){
            x=1/x;
            binform = -binform;

        }
        double ans=1;
        
        while(binform>0){
            if(binform %2==1){
            ans *= x;
         }
         x=x*x ;   //x^2
         binform /=2;
        }
        return ans;
        
    }