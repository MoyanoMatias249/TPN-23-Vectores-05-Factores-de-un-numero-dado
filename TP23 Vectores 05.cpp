#include <bits\stdc++.h>
using namespace std;

vector<int> GenerarVectorA(int N){
	vector<int> A;
	
	for(int i=1; i<=N; i++){
		if(N%i == 0){
			A.push_back(i);
		}
	}
	return A;
}

void MostrarVectorA(vector<int> A){
	for(int i=0; i<A.size(); i++){
		cout<<A[i]<<"/";
	}
}


int main(){
	
	int N;
	cout<<"Ingrese un numero : ";
	cin>>N;
	
	cout<<endl;
	vector<int> A = GenerarVectorA(N);
	cout<<"Vector A : ";
	MostrarVectorA(A);
	
	return 0;
}
