#include <iostream> 
#include <vector>  
int BinarySearch(const std::vector<int>& spTov, int tovar) 
{     
    int left = 0;     
    int right = spTov.size() - 1;      
    while (left <= right) 
    {         
        int mid = left + (right - left) / 2;          
        if (spTov[mid] == tovar)
        {
            return mid; 
        }                     
        if (spTov[mid] < tovar) 
        {
            left = mid + 1;
        }                     
        else  
        {
            right = mid - 1;  
        }               
    }      
    return -1; 
}  

int main() 
{     
    std::vector<int> spisokTovarov;
    spisokTovarov.push_back(2);
    spisokTovarov.push_back(4);
    spisokTovarov.push_back(6);
    spisokTovarov.push_back(8);
    spisokTovarov.push_back(10);
    spisokTovarov.push_back(12);
    spisokTovarov.push_back(14);
    spisokTovarov.push_back(16);
    spisokTovarov.push_back(18);
    spisokTovarov.push_back(20);
    spisokTovarov.push_back(22);
    spisokTovarov.push_back(24);
    spisokTovarov.push_back(26);
    spisokTovarov.push_back(28);
    spisokTovarov.push_back(30);

       

    int Tovar = 16;     
       
    int result = BinarySearch(spisokTovarov, Tovar);      
    if (result != -1)    
    {
        std::cout << "Товар " << Tovar << " найден в списке по индексу " << result << "." << std::endl;
    }          
    else
    {
        std::cout << "Товар " << Tovar << " не найден в списке." << std::endl;
    }               
    return 0; 
}