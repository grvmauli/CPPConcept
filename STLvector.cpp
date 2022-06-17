#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> g1;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i*12);

    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";

    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";

    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";

    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";

    //Capacity of vector


    cout << "Size : " << g1.size()<<endl; //Returns the number of elements in the vector.
    cout << "\nCapacity : " << g1.capacity()<<endl;//Returns the size of the storage space currently allocated to the vector expressed as number of elements.
    cout << "\nMax_Size : " << g1.max_size();//Returns the maximum number of elements that the vector can hold.

    //resizes the vector size to 4
    g1.resize(4);
     cout << "Resized Size : " << g1.size()<<endl; //Returns the number of elements in the vector.

    //Check if the vector is empty
    if(!g1.empty()){
        cout<<"Vector is not empty"<<endl;

    }else{
        cout << "\nVector is empty"<<endl;

    }

    g1.shrink_to_fit();//Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    cout << "\nVector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " ";


    //Element Access
    cout << "\nReference operator [g] : g1[2] = " << g1[2]; //Returns a reference to the element at position ‘g’ in the vector

    cout << "\nat : g1.at(2) = " << g1.at(2); //Returns a reference to the element at position ‘g’ in the vector

    cout << "\nfront() : g1.front() = " << g1.front(); //Returns a reference to the first element in the vector

    cout << "\nback() : g1.back() = " << g1.back(); //Returns a reference to the last element in the vector

    // pointer to the first element
    int* pos = g1.data();  //Returns a direct pointer to the memory array used internally by the vector to store its owned elements.

    cout << "\nThe first element is " << *pos;

    //Modifiers
    vector<int>v;

    //fill the array with 10 five time
    v.assign(5,10); //It assigns new value to the vector elements by replacing old ones

    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    // inserts 15 to the last position
    v.push_back(15); //It push the elements into a vector from the back
    int n = v.size();
    cout << "\nThe last element is: " << v[n - 1];

    // removes last element
    v.pop_back(); // It is used to pop or remove elements from a vector from the back.

    // prints the vector
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    // inserts 5 at the beginning
    v.insert(v.begin(), 5);  //It inserts new elements before the element at the specified position
    cout << "\nThe first element is: " << v[0];

    // removes the first element
    v.erase(v.begin());   // It is used to remove elements from a container from the specified position or range.

    cout << "\nThe first element is: " << v[0];

    // inserts at the beginning
    v.emplace(v.begin(), 5); // It extends the container by inserting new element at position
    cout << "\nThe first element is: " << v[0];

    // Inserts 20 at the end
    v.emplace_back(20); //It is used to insert a new element into the vector container, the new element is added to the end of the vector
    n = v.size();
    cout << "\nThe last element is: " << v[n - 1];

    // erases the vector
    v.clear(); //It is used to remove all the elements of the vector container
    cout << "\nVector size after erase(): " << v.size();


    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";

    // Swaps v1 and v2
    v1.swap(v2); // It is used to swap the contents of one vector with another vector of same type. Sizes may differ.

    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    return 0;
}
