#include <iostream>

void merge(int arr[], int start, int end){
	int mid = (start + end)/2;
	int temp[end - start + 1];
	int i = start, j = mid + 1, k = 0;
	
	while(i<=mid && j<=end){
		if(arr[i]<=arr[j]){
			temp[k]=arr[i];
			i++;
			k++;
		}else{
			temp[k]=arr[j];
			j++;
			k++;
		}
	}

	while(i<=mid){
		temp[k] = arr[i];
		i++;
		k++;
	}

	while(j<=end){
		temp[k] = arr[j];
		j++;
		k++;
	}

	for(i=start;i<=end;i++){
		arr[i] = temp[i-start];
	}
}

void mergeSort(int arr[],int start, int end){
	if(start<end){
		 int mid = (start+end)/2;
		 mergeSort(arr, start, mid);
		 mergeSort(arr, (mid + 1), end);
		 merge(arr, start, end);
	}
}

int main(){
	int n;
	std::cout << "Enter size of an array: ";
	std::cin >> n;
	int data[n];
	for(int m=0;m<n;m++){
		std::cout << "Enter element " << m+1 << " of the array: ";
		std::cin >> data[m];
	}
		
	int data_size = sizeof(data)/sizeof(data[0]);
	mergeSort(data,0,data_size-1);

	std::cout << "SORTED ARRAY:\n";
	for(auto l : data){
		std::cout << l << "\t";
	}
	std::cout << std::endl;

	return 0;
}
