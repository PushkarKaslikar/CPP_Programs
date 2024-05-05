#include<iostream>
using namespace std;

class matrix
{
public:

int total_row;
int total_col;
int *arr;
int size;
matrix(int row,int cols);
void setMatrix();
void getMatrix();

matrix operator + (matrix m1);
matrix operator - (matrix m1);
matrix operator *(matrix m1);
};

matrix::matrix(int row,int col)
{
total_row=row;
total_col=col;
size=total_row*total_col;

arr=new int[size];
}

void matrix::setMatrix()
{
	int index;
	for(int row_no=0;row_no<total_row;row_no++)
	{
		for(int col_no=0;col_no<total_col;col_no++)
		{
			index=row_no*total_col+col_no;
			cout<<" enter the element of row"<<row_no<<"and column"<<col_no;
			cin>>arr[index];	
		}
	}
}

matrix matrix::operator+(matrix m1)
{
	matrix m2(total_row,total_col);
	int index,no;
	for(int row_no=0;row_no<total_row;row_no++)
	{
		for(int col_no=0;col_no<total_col;col_no++)
		{
			index=row_no*total_col+col_no;
			m2.arr[index]=arr[index]+m1.arr[index];
		}
	}
	return m2;
}

matrix matrix::operator-(matrix m1)
{

	matrix m2(total_row,total_col);
	int index;
	for(int row_no=0;row_no<total_row;row_no++)
	{
		for(int col_no=0;col_no<total_col;col_no++)
		{
			index=row_no*total_col+col_no;
			m2.arr[index]=arr[index]-m1.arr[index];
		}
	}
}

//matrix matrix::operator *(matrix m1)
//{


void matrix ::getMatrix()
{

int index;
	for(int row_no=0;row_no<total_row;row_no++)
	{
		for(int col_no=0;col_no<total_col;col_no++)
		{
			index=row_no*total_col+col_no;
		cout<<arr[index];
		}
	}
	
}

int main()
{
int row1,row2,col1,col2;

cout<<"Enter row and col for matrix1";
cin>>row1>>col1;
cout<<"Enter row and col for matrix 2";
cin>>row2>>col2;

matrix m1(row1,col1);
matrix m2(row2,col2);
matrix m3(row1,col2);
try
{
	if(row1==row2 && col1==col2)
	{
	m1.setMatrix();
	m2.setMatrix();
	m3=m1+m2;
	m3.getMatrix();	
	}
	else
	throw "sizeException";
}

catch(const char *s)
{
cout<<s;

}


}
