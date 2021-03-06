#include<iostream>

using namespace std;

class LowerTri{
    private:
        int n;
        int *A;
    public:
        LowerTri(){
            n = 2;
            A = new int[n*(n+1)/2];
        }
        LowerTri(int n){
            this->n = n;
            A = new int[n*(n+1)/2];
        }
        ~LowerTri(){
            delete []A;
        }
        void Set(int i,int j,int x);
        int Get(int i,int j);
        void Display();

};

void LowerTri::Set(int i,int j, int x){
    if(i>=j){
        A[n*(j-1)- (j-1)*(j-2)/2+i-j] = x;
    }
}
int LowerTri::Get(int i,int j){
    if(i>=j){
       return A[n*(j-1)- (j-1)*(j-2)/2+i-j];
    }
}

void LowerTri::Display(){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i>=j)
            cout<<A[n*(j-1)- (j-1)*(j-2)/2+i-j]<<" ";
            else 
            cout<<"0";
        }
        cout<<endl;
    }
}


int main(){
    int x,j,d;
    cout<<"Enter Dim\n";
    cin>>d;
    LowerTri m(d);
    

    cout<<"Enter Elts\n";
    for(int i=1;i<=d;i++){
        for(j=1;j<=d;j++){
        cin>>x;
        m.Set(i,j,x);
    }
    }
    m.Display();
 

}