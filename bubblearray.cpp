#include<iostream>
using namespace std;
void BUBBLE(int array[] ,int n){
	for (int i=0;i<n;i++){
		for (int j=0;j<n-i-1;j++){
			if(array[j]>array[j+1]){
				int temp= array[j+1];
				array[j+1]=array[j];
				array[j]=temp;
			}

		}
	}
}
int main(){
	int array[100], n;
	cout<<"enter the size of array:"<<endl;
	cin>>n;
	cout<<"enter the array:";
	for (int i=0;i <n;i++){
		cin>>array[i];
	}
	//sorting 
	// for (int i=0;i<n;i++){
	// 	for (int j=0;j<n-i-1;j++){
	// 		if(array[j]>array[j+1]){
	// 			int temp= array[j+1];
	// 			array[j+1]=array[j];
	// 			array[j]=temp;
	// 		}

	// 	}
	// }
	BUBBLE(array,n);

	//printing
	for (int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
	return 0;
}