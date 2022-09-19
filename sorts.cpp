#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;


// O(N^2)
void insertion_sort(vector<int>& v){
	for(int i=1;i<v.size();i++){
		int temp = v.at(i);
		// shifting to make room for v[i]
		int j = 1;
		while(j>=1 && v.at(j-1)>temp){
			v.at(j) = v.at(j-1);
			j--;
		}
		v.at(j) = temp;
	}
}

// O(N*log(N))
void merge(vector<int>& v, int start, int end){
	int mid = (start + end)/2;
	vector<int> temp(end - start + 1);
	int i = start, j = mid + 1, k = 0;

	while(i<=mid && j<=end){
		if(v.at(i)<=v.at(j)){
			temp.at(k)=v.at(i);
			i++;
			k++;
		}else{
			temp.at(k)=v.at(j);
			j++;
			k++;
		}
	}

	while(i<=mid){
		temp.at(k) = v.at(i);
		i++;
		k++;
	}

	while(j<=end){
		temp.at(k) = v.at(j);
		j++;
		k++;
	}

	for(i=start;i<=end;i++){
		v.at(i) = temp.at(i-start);
	}
}

void merge_sort(vector<int>& v,int start, int end){
	if(start<end){
		 int mid = (start+end)/2;
		 merge_sort(v, start, mid);
		 merge_sort(v, (mid + 1), end);
		 merge(v, start, end);
	}
}

int main(int argc, char** argv){
	int n = 0, k = 0;
	vector<int> v;
	cout << "How many integer values do you want to enter?\n";
	cin >> n;
	cout << "Enter integer values:\n";
	for(int i=0;i<n;i++){
		cin >> k;
		v.push_back(k);
	}

	//cout << "Sorted vector using insertion sort:\n";
	//insertion_sort(v);
	cout << "Sorted vector using merge sort:\n";
	merge_sort(v,0, v.size()-1);

	for(int i=0;i<n;i++){
		if(i!=(n-1)){
			cout << v.at(i) << ", ";
		}else{
			cout << v.at(i) << "\n";
		}
	}

	return 0;
}
