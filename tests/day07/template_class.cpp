#include <iostream>

template< typename T >
class List
{
	public:

		List<T>(const T& content){
		
		}

		List<T>(const List<T>& list){
		
		}

		~List<T>(void) {
		
		}

	private:

		T *			_content;
		List<T>*	_next;
};

int main(){
	
	List<int> a(42);
	List<float>b (3.14f);
	List< List<int> > c(a);
}
