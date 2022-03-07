// written by Berkay Demir 

#include<iostream>
#include<string>
using namespace std;
template <typename M_type>

class Matrix{
    private:
    
        int rows;
        int cols;   
        M_type matrix1[10][10]; 
        M_type matrix2[10][10];
       
        
    public:
    	
    	int getRow(){
    		return rows;
        } 
        
        int getCol(){
        	return cols;
        }
        
        void setRow(int r){
            rows=r;
        }
        
        void setCol(int c){
        	cols=c;
        }
    	
    	Matrix(){
		    rows=0;
		    cols=0;
        }
   
        Matrix(const int row, const int col){
        	rows=row;
            cols=col;
        }
        
       ~Matrix(){
      
        }
        
        void printMatrix1(){
        	for(int i = 0; i < rows; i++) {
                for(int j = 0; j < cols; j++) {
                    cout << matrix1[i][j] << " "; 
                }
                cout << endl; 
            }
        } 
        
    void printMatrix2(){
   	    for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                cout << matrix2[i][j] << " "; 
            }
            cout << endl; 
        }
    }
    
    void addMatrix(){
   	   for(int i=0; i<rows; i++){
       	   
            for(int j=0;j<cols;j++){
                cout << matrix1[i][j]+matrix2[i][j] << " ";
            }
            cout << endl;
        }
    }
   
    void findElements(M_type value){
   	
        int frequency=0;  
        
        for(int i=0; i<rows; i++){
        	
            for(int j=0; j<cols; j++){
            	
                if(matrix1[i][j] == value){ 
                	
                    cout << "Element is found in first matrix at: " << i+1 << " , " << j+1 << endl;
                    frequency++;  
                }
           
            }   
        }  
		    
        for(int i=0; i<rows; i++){
        	
            for(int j=0; j<cols; j++){
            	
                if(matrix2[i][j] == value)
                {
                   cout << "Element is found in second matrix at: " << i+1 << " , " << j+1 << endl;
                   frequency++;
                }
            }
        } 
        
        cout << "Frequency of element " << value << " is: " << frequency << endl;
   }
  
    M_type operator[](const int index){
   	
        if(index >= 0 && index <= rows){
        	return matrix1[index];      
        }
    } 
   
    void inputMatrix1(){
        for(int i = 0; i < rows; i++) {
           for(int j = 0; j < cols; j++) {
               cin >> matrix1[i][j]; 
           }
        }
    }
    
    void inputMatrix2() 
    {
        for(int i = 0; i < rows; i++) {
           for(int j = 0; j < cols; j++) {
               cin >> matrix2[i][j];
           }
        }
    }
};

int main(){
        
   int row;
   int col, choice;
   
   cout << "enter number of rows and columns for matrices: ";
   cin >> row >> col; 
    
   cout << "choose type of matrices: " << endl;
   cout << "1-double 2-string 3-char 4-exit: "; 
   cin >> choice; 
   
   if(choice == 1) {
       cout << "double matrices: enter elements for first matrix: ";
       Matrix<double> m(row, col);
       m.inputMatrix1();
       m.printMatrix1();
       cout << "enter elements for second matrix: ";
       m.inputMatrix2();
       m.printMatrix2(); 
       cout << "Sum:" << endl;
       m.addMatrix();
       int find;
       cout << "find element:";
       cin >> find;
       m.findElements(find);
   }
   
   else if(choice == 2) { 
       Matrix<string> n(row, col);
       cout << "string matrices: enter elements for first matrix: ";
       n.inputMatrix1();
       n.printMatrix1();
       cout << "enter elements for second matrix: ";
       n.inputMatrix2();
       n.printMatrix2(); 
       cout << "Sum:" << endl;
        n.addMatrix();
        char findstr;
        cout << "find element:"; 
        cin >> findstr;
        n.findElements(&findstr);  
   }
    
   else if(choice == 3) {
       Matrix<string> c(row, col);
       cout << "string matrices: enter elements for first matrix: ";
       c.inputMatrix1();
       c.printMatrix1();
       cout << "enter elements for second matrix: ";
       c.inputMatrix2();
       c.printMatrix2(); 
       cout << "Sum:" << endl;
        c.addMatrix();
        char findchr;
        cout << "find element:"; 
        cin >> findchr;
        c.findElements(&findchr); 
   } 
   
   else if(choice == 4) {       
       exit(0);     
   }
   
   return 0;  
}
