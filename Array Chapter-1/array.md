#  What is meaning of an Array?
1. **An Array** is a **collection** of data of the same **data type**, stored at **contiguous memory locations**.
2. **Elements** of an array can be accessed using their **indices**.
3. Once an array is declared, its **size** remains **constant** throughout the program.
4. The **size** of the array in **bytes** can be determined by the `sizeof` operator, using which we can also find the **number of elements** in the array.

# Static Array

```cpp
int arr[5];
```
### Explanation:

1)**int**: Integer type data storage

2)**arr**: Array name

3)**5**: Number of blocks (elements)
The total space consumed is 5 * 4 = 20 bytes.

The above declaration of the array is known as ***Static Array*** Creation because the space is defined at compile time and cannot be changed at runtime.

# Sizeof Operator and Address Operator
1) `sizeof` operator 
```cpp
int a=5;
cout<<"The size of a is "<<sizeof(a)<<endl;
int arr[10];
cout<<"The size of arr is "<<sizeof(arr)<<endl;
```
2) `&` operator i.e Address Operator
```cpp
int arr[10];
cout<<"Address:"<<&arr<<endl;
cout<<"Address:"<<arr<<endl;
```
**Note**:
Both will give same output address because both considers base address itself

# Methods of array initilisation
### Case 1: 
```cpp
int arr[]={1,2,3,4};
```
### Case 2:
```cpp
int arr[6]={1,2,3,4,5,6};
```
### Case 3:
```cpp
int arr[4]={1,2};
```
**Note**: 
In Case 3 out of 4 blocks we have only used 2 of them and remaining two blocks will have zero's in them 

### Case 4:
```cpp
int arr[4]={1,2,3,4,5,6};
//This will throw error as it is out of bound
```
# Behind the scene how the array access the elements ??

**Formula**:  
**arr[i]=value at(Base Address+(Datatype size*index of the accessing element))**


**Example:** As in the image shown we are trying to accesing the elemnet at 8th index
assume arr[0] or Base address=100,and we are storing int values in array
arr[8]=value at(100+(4*8))


![Array](https://docs.oracle.com/javase/tutorial/figures/java/objects-tenElementArray.gif)






