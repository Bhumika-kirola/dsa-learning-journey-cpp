#include <iostream>

using namespace std;

void patterns1(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}
void pattern2(int n){
    for (int i=1 ;i<=n;i++){
        for (int j=1; j<=i; j++){
            cout<<"*";
        }
        cout << "\n";
    }
}
void pattern3(int n){
    for(int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << j;
        }
        cout<< endl ;
    }
}
void pattern4(int n){
    for(int i=0 ; i<n;i++){
        for(int j=1; j<=i+1;j++){
            cout << i+1;
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for(int i=n; i>0; i--){
        for (int j=0; j<i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern6(int n){
    for(int i=n; i>0; i--){
        for (int j=1; j<=i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern1_7(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=n-i-1; j++){
            cout<<" ";
        }
        for(int k=0; k<2*i+1; k++){
            cout<<"*";            
        }
        for(int l=0; l<=n-i-1; l++){
            cout<<" ";
        }
        cout << endl;
    }
}
void pattern7(int n){
    for(int i=n; i>0; i--){
        //space
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int k=0; k< 2*i-1; k++){
            cout << "*";
        }
        for(int l=0; l<n-i; l++){
            cout<<" ";
        }
        cout << endl;
    }
}
void pattern8(int n){
    //upper
    for (int i=0; i<n; i++){
        //space
        for (int j=0; j<n-i-1; j++){
            cout<< " ";
        }
        //astrisk
        for(int k=0; k<2*i+1; k++){
            cout<<"*";
        }
        for (int l=0; l<n-i-1; l++){
            cout<< " ";
        }
        cout << endl;
    }
    //lower
    for(int m=n; m>0; m--){
        //space
        for(int o=0; o< n-m; o++){
            cout<<" ";
        }
        //astrisk
        for(int p=0; p<2*m-1;p++){
            cout<<"*";
        }
        for(int q=0; q< n-m;q++){
            cout<<" ";
        }
        cout<< endl;
    }
}
// optmize way of doing the reverse pattern prob
//  pattern5 --- patt5
 void patt5(int n){
    for (int i=0; i<n; i++){
        for(int j=0; j< n-i; j++){
            cout << "*";
        }
        cout << endl;
    }
 }
// pattern6 --- patt6
 void patt6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << j;
        }
        cout << endl;
    }
 }
// pattern8 --- patt8
void patt8(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0; j<i; j++){
            cout << " ";}   
        
        //stars
        for (int j=0; j< 2*n-(2*i +1); j++){
            cout << "*";
        }

        //space
        for(int j=0; j<i;j++){
            cout <<" ";
        }
        cout<< endl;
    }
}
// patten 9--diamond astisk pattern
void pattern9(int n){ 
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout<< " ";
        }
        //stars
        for(int k=0; k<2*i+1;k++){
            cout << "*";
        }

        //space
        for(int l=0; l<n-i-1; l++){
            cout<< " ";
 
        }
        cout << endl;
    }

    for(int i=0; i<n; i++){

            //space
        for (int j=0; j<i;j++){
            cout<< " ";
        }
            // stars
        for (int j=0; j<2*n-(2*i+1);j++){
            cout << "*";
        }
        for (int j=0; j<i;j++){
            cout<< " ";
        }
        cout << endl;
        }
       
    }
void pattern10(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<< "*";
        }
        cout << endl;
    }
    for(int j=0; j<n-1; j++){
        for (int k=0; k<n-1-j; k++){
            cout << "*";
        }
        cout<<endl;
    }

}
int pattern11(int n){
    for (int i=0;i<n;i++){
        int start;
        if (i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout << start;
            start=1-start;
        }
        cout << endl;
    }
}
void pattern12(int n){
    for (int i=0;i<n;i++){
        for (int j=0; j<=i; j++){
            cout << j+1;
        }
        for(int j=0; j< 2*n-(2*i+2);j++){
            cout << " ";
        }
        for (int j=i+1; j>=1; j--){
            cout << j;
        }
        cout<< endl;
    }
}
void pattern13(int n){
    int num=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << num;
            num=num+1;
        }
        cout << endl;
    }
}
void pattern14(int n){
    for(int i=0; i<n; i++){
        for(char j='A'; j<='A'+ i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern15(int n){
    for(int i=0;i<n;i++){
        for(char j='A'; j<'A'+(n-i); j++){
            cout << j<< " ";
        }
        cout<< endl;
    }
}
void pattern16(int n){
    char ch = 'A';
    for(int i=0;i<n;i++){
        for(char j= 0; j< n-i; j++){
            cout << ch << " ";
            ch=ch+1;
        }
        cout<< endl;
    }
}
void pattern17(int n){
    for(int i=0;i<n;i++){
        char ch ='A'+i;
        for(int j=0; j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern18(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << " ";
        }
        char ch ='A';
        int bp= (2*i+1) /2;
        for(int j=0; j<2*i+1;j++){
            cout<< ch;
            if(j< bp) ch++;
            else ch--;
        }
        for(int j=0; j<n-i; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern19(int n){

    for (int i=0; i<n; i++){
        char ch ='A'+ n-1-i;
        for (int j=0; j<=i; j++){
            cout<< ch;
            ch++;
        }
        cout<<endl;
    }
}
void pattern20(int n){
    //first loop
    for(int i=0; i<n; i++){
        //stars
        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        //space
        for (int j=0; j<2*i; j++){
            cout<< " ";
        }
        //stars
        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        cout << endl;
    }
    //second loop
    for(int i=0; i<n; i++){
        //stars
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        //space
        for (int j=0; j<2*(n-i-1); j++){
            cout<< " ";
        }
        //stars
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern21(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars =i;
        if (i>n) stars=2*n-i;
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        if(i<n){
            for(int j=0; j<2*(n-i); j++){
                cout << " ";
            }
        }
        else if(i>n){
            for(int j=0; j<2*(i-n); j++){
                cout << " ";
            }
        }
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        cout << endl;
    }

}
void pattern22(int n){
    for(int i=1; i<=n; i++){
        if(i==1 || i==n){
            for(int j=1; j<=n; j++){
                cout << "*";
            }
        }
        else if(i>1 && i<n){
            for(int j=0; j<n; j++){
                if(j==0 || j==n-1) cout<< "*";
                else cout<< " ";
            }
        }
        cout << endl;
    }
}
//shoter way for pattern 22
void patt22(int n){
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            if(i==0||i==n-1||j==0||j==n-1) cout<< "*";
            else cout<< " ";
        }
        cout << endl;
    }
}
void pattern23(int n){
    for(int i=0; i<2*n-1; i++){
        int num=n;
        for(int j=0; j< 2*n-1; j++){
            cout << num; 
           }
        cout<< endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern21(n);
    return 0;
}