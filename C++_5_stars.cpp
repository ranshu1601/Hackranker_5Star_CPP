/*
Hackranker__ 5 stars in C++
--------------------------------------------------------------------------------------------------------------------
Challenge -1 

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    cout<<("Hello, World!");
    return 0;
}

-------------------------------------------------------------------------------------------------------------------

Challenge -2 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(a+b+c);   
    return 0;
}

------------------------------------------------------------------------------------------------------------------
Challenge -3

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
 int a;
 long long int b;
 char c;
 float d;
 double e;

 scanf("%d %lld %c %f %lf",&a,&b,&c,&d,&e);

 printf("%d\n%lld\n%c\n%f\n%lf",a,b,c,d,e);

return 0;
    return 0;
}


------------------------------------------------------------------------------------------------------------------
Challenge -4

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void name(int n){
    if(n==1){
        cout<<"one"<<endl;
        }
    else if (n==2) {
        cout<<"two"<<endl;
        }   
    else if (n==3) {
        cout<<"three"<<endl;
        }        
    else if (n==4) {
        cout<<"four"<<endl;
        }     
    else if (n==5) {
        cout<<"five"<<endl;
        }  
    else if (n==6) {
        cout<<"six"<<endl;
        }          
    else if (n==7) {
        cout<<"seven"<<endl;
        }     
    else if (n==8) {
        cout<<"eight"<<endl;
        }  
    else if (n==9) {
        cout<<"nine"<<endl;
        }      
    else {
        cout<<"Greater than 9"<<endl;
    }   
    
}
int main()
{   
    int num;
    cin>>num;
    name(num);
    return 0;
    
}

----------------------------------------------------------------------------------------------------------------------
Challenge -5

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string one[] = { "", "one ", "two ", "three ", "four ", 
                 "five ", "six ", "seven ", "eight ", 
                 "nine "
               }; 

    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(i<=9){
            cout<<one[i]<<endl;
        }
        else if(i%2==0){
            cout<<"even"<<endl;
        }
        else {
            cout<<"odd"<<endl;
        }
    }           


    return 0;
}

------------------------------------------------------------------------------------------------------------------
Challenge -6

#include<iostream>
using namespace std;

int max_of_four(int a,int b,int c,int d)
{
int max = 0;
if(a>=b && a>=c && a>=d)
{
max = a;
}
else if(b>=a && b>=c && b>=d)
{
max = b;
}
else if(c>=a && c>=b && c>=d)
{
max = c;
}
else
{
max = d;
}
return max;
}


int main() {
int a, b, c, d;
cin>>a>>b>>c>>d;
int ans = max_of_four(a, b, c, d);
cout<<ans;

return 0;
}

---------------------------------------------------------------------------------------------------------------------
Challenge -7

#include <stdio.h>

void update(int *a,int *b) { 
    int temp = *a;   
    *a = *a + *b;
    *b = temp - *b;
    if (*b < 0)
    {
        *b = -(*b);
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
-----------------------------------------------------------------------------------------------------------------

Challenge -8 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];        
    }
    for (int j = N - 1; j >= 0; j--) {
        cout << arr[j] << " ";
    }
    return 0;
}

-------------------------------------------------------------------------------------------------------------------
Challenge -9

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int n, q; cin >> n >> q;
    int **v = new int*[n];
    for(int j=0;j<n;j++){
        int k; cin >> k;
        v[j] = new int[k];
        for(int i=0;i<k;i++){
            int x; cin >> x;
            v[j][i] = x;
        }
    }
    for(int i=0;i<q;i++){
        int a, b; cin >> a >> b;
        cout << v[a][b]<<endl;
    }
    return 0;
}
     
----------------------------------------------------------------------------------------------------------------------
Challenge -10

#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

struct BadLengthException : exception 
{
  string s;
  BadLengthException(int n) : s(to_string(n)) {}
  const char *what() const noexcept override 
  {
    return s.c_str();
  }
};


bool checkUsername(string username) {
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n);
	}
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}

int main() {
	int T; cin >> T;
	while(T--) {
		string username;
		cin >> username;
		try {
			bool isValid = checkUsername(username);
			if(isValid) {
				cout << "Valid" << '\n';
			} else {
				cout << "Invalid" << '\n';
			}
		} catch (BadLengthException e) {
			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}

----------------------------------------------------------------------------------------------------------------------
Challenge -11

#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>
using namespace std;

class Server {
private:
	static int load;
public:
	static int compute(long long A, long long B) {
		load += 1;
		if(A < 0) {
			throw std::invalid_argument("A is negative");
		}
		vector<int> v(A, 0);
		int real = -1, cmplx = sqrt(-1);
		if(B == 0) throw 0;
		real = (A/B)*real;
		int ans = v.at(B);
		return real + A - B*ans;
	}
	static int getLoad() {
		return load;
	}
};
int Server::load = 0;

int main() {
	int T; cin >> T;
	while(T--) {
		long long A, B;
		cin >> A >> B;
        try 
        {
            cout << Server::compute(A, B) << endl;
        } 
        catch (std::bad_alloc& error) 
        {
            cout << "Not enough memory" << endl;
        }
        catch (std::exception& error) 
        {
            cout << "Exception: " << error.what() << endl;
        }
        catch (...) 
        {
            cout << "Other Exception" << endl;
        }
        
	}
	cout << Server::getLoad() << endl;
	return 0;
}

-----------------------------------------------------------------------------------------------------------------------

Challenge -12

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
    protected:
      int age;
      string name;
    public:
          virtual void getdata(){};
          virtual void putdata(){};
};
class Professor : public Person
{
    int publication;
    static int id1;
      public:
       void getdata()
       {
           cin>>name;
           cin>>age;
           cin>>publication;
       }
       void putdata()
       {
          cout<<name<<" "<<age<<" "<<publication<<" "<<id1<<endl;
          id1++;
       }
};
int Professor::id1=1;
class Student : public Person
{
    int marks[6];
     static int id2;
  public:
      int sum=0;
   void getdata()
   {
       cin>>name;
       cin>>age;
       for(int i=0;i<=5;i++)
       {
          cin>>marks[i];
          sum=sum+marks[i];
       }
   }
   void putdata()
   {
      cout<<name<<" "<<age<<" "<<sum<<" "<<id2<<endl;
      id2++;
   }
};

int Student::id2=1;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

-------------------------------------------------------------------------------------------------------------------------
Challenge -13

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};

class LRUCache: public Cache
{
public:
    LRUCache(int c) 
    {
      cp = c;
    }

    void set(int k, int v) 
    {
        Node* N;

        if ( mp.empty() ) 
        {

            N = new Node(k,v);
            tail = head = N;
            mp[k] = N;

            return;
        }
        auto it = mp.find(k);
        if ( it != mp.end() ) 
        {
            it->second->value = v;
            if ( head == it->second ) 
            {
                return;
            }
            it->second->prev->next = it->second->next;           
            if ( tail == it->second ) 
            {
                tail = tail->prev;
            }
            else 
            {               
                it->second->next->prev = it->second->prev;
            }           
            it->second->next = head;
            it->second->prev = nullptr;
            head->prev = it->second;
            head = it->second;
        }
        else 
        {
            N = new Node(head->prev, head, k, v);
            head->prev = N; 
            head = N;
            mp[k] = N;
            if ( mp.size() > cp ) 
            {
                tail = tail->prev;
                mp.erase(tail->next->key);
                delete tail->next; 
                tail->next = nullptr;
            }
        }
    }
    int get(int k) 
    {
        auto it = mp.find(k);
        if ( it != mp.end() ) 
        {
            return it->second->value;
        }
        
        return -1;
    }
};

int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}

-------------------------------------------------------------------------------------------------------------------

CONGRATULATIONS !!!! YOU HAVE GOT 5 STARS IN CPP 

*/