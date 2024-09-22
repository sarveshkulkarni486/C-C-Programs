#include <iostream>



using namespace std;

/*Assignment 1 Maximum element in array



int maximum(int arr[]);

int main()

{   

	int arr[5];

	

	cout<<"enter the arry elements : ";

	

	for(int i=0;i<5;i++)

	{

		cin>>arr[i];

	}

	int max= maximum( arr);

	cout << "The maximum value in the array is: " << max << endl;

    

}



int maximum(int arr []){

	

	

	int max= arr[0];

	

	for(int i=1;i<5;i++)

	{

		if(arr[i]>max){

			max=arr[i];

		}

	}

	return max;

}*/



//Find the average of array using pointer



/*

int avg(int*);

int main()

{

	

	int array[5];

	cout<<"enter the values : "<<endl;

	

	for(int i=0; i<5;i++)

	{

		cin>>array[i];

	}

	

	 int aver = avg(array);

	cout<<"the average is : "<<aver;

}



int avg(int* array){

	

	int sum=0;

	

	for(int i=0;i<5;i++){

		

		sum += *(array + i);

		

	}

	int average=sum/5;

	return average;

} */



/*Copy Elements of array 1 into array 2



void arr(int array1[], int* array2[]);



int main(){

	

	int array1[5];

	int* array2[5];

	

	cout<<"enter the values : "<<endl;



	for(int i=0;i<5;i++){

		cin>>array1[i];

		}

		

	 arr( array1, array2);	

	

}



void arr(int array1[], int* array2[]){

	

	

		

		for(int m=0;m<5;m++){

			array2[m]= &array1[m];

		}

	

	

	for(int i=0;i<5;i++){

		cout<<*array2[i];

	}

} */





/* addition of two matrix 

int main()

{

	int arr[3][3];

	int arr1[3][3];

	int arr2[3][3];

	

	cout<<"enter the elements of the matrix "<<endl;

	

	for(int i=0;i<3;i++){

		for (int j=0;j<3;j++){

			cin>>arr[i][j];

		}

	}

	cout<<endl;

	

	for(int i=0;i<3;i++){

		for (int j=0;j<3;j++){

			cin>>arr1[i][j];

		}

	}

	cout<<endl;

	

	for(int i=0;i<3;i++){

		for (int j=0;j<3;j++){

		arr2[i][j]=arr[i][j] + arr1[i][j];

		}

	}

	cout<<endl;

	

	for(int i=0;i<3;i++){

		for (int j=0;j<3;j++){

			cout<<arr2[i][j]<<"/t";

			

		}

		cout<<"\n";

	}

	

	

}*/

/*int main()

{

	int arr[3][3];

	int arr1[3][3];

	

	

	cout<<"enter the elements of the matrix "<<endl;

	

	for(int i=0;i<3;i++){

		for (int j=0;j<3;j++){

			cin>>arr[i][j];

		}

	}

	cout<<endl;

	



	

	



	

	for(int i=0;i<3;i++){

		for (int j=0;j<3;j++){

			

				arr1[i][j]=arr[j][i];

			

		}

	}

	

	

	for(int i=0;i<3;i++){

		for (int j=0;j<3;j++){

			cout<<arr1[i][j]<<"/n";

		}

	}

	

}*/







int main()

{

    int arr[3][3];



    cout << "Enter the elements of the matrix: " << endl;



    for(int i = 0; i < 3; i++){

        for (int j = 0; j < 3; j++){

            cin >> arr[i][j];

        }

    }

    cout << endl;



    

    for(int i = 0; i < 3; i++){

        for (int j = 0; j < 3; j++){

            arr[i][j] = arr[i][j] * arr[i][j];

        }

    }



    cout << "The matrix with squared elements is: " << endl;



    for(int i = 0; i < 3; i++){

        for (int j = 0; j < 3; j++){

            cout << arr[i][j] << " ";

        }

        cout << endl;

    }



    return 0;

}
