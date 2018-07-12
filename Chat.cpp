#include <iostream> 
#include <cstdlib> 
#include <string>
#include <ctime>
 //заголовочные файлы
 using namespace std; 
 //функции программы 
  void talk(); 
  void bad();
  void one();
  void twoo();
  void three();
  void four();
    //перегрузка функции go
    void go(int x)  //функция one
      {
      	one();
      }
   

   void go(int x, int y)  //функция twoo
      {
      	twoo();
      }

   void go(int x, int y, int z)  //функция three
      {
      	three();
      }

   void go(int x, int y, int z, int j)  //функция four
      {
      	four();
      }
  void convers(string s1, string s)  
  {
  	int aq = 10;
  	int aw  = 20;
  	string h;
  	int sas = 0;
    size_t count=0, pos = 0;
    while ((pos = s.find(s1, pos)) != string::npos)
    {
        count++;
        pos += s1.size();
    }
    
            if (count!=0 && s1 == "bad") {
    	cout <<"I know\n";
    }	
    	   cout << "Continue?\n";
  	    cin >> h;
			if(h == "Yes") {
       				go(aq, aw);
       			} 
       			else{
       				talk();
       			}
  }
  
  
  
  void ask(string s1, string s)  
  {
  	int aq = 10;
  	int aw = 20;
  	int ae = 30;
  	string h;
    size_t count=0, pos = 0;
    while ((pos = s.find(s1, pos)) != string::npos)
    {
        count++;
        pos += s1.size();
    }
    if (count!=0 && s1 == "cup") {
    	cout <<"World cup 2018 in Russia\n";
    }
    			cout << "Continue?\n";
  	    cin >> h;
			if(h == "Yes") {
       				go(aq, aw, ae);
       			} 
       			else{
       				talk();
       			}
  }
  //главная функция программы 
  int main() 
  { 
        string str = "Hello"; 
        string strg = "Hi"; 
        string a; 
        //string для приветствия 
        cout << "Hello" << endl; 
        cin >> a; 
        
        if(a == str || a == strg) { 
                cout << "My name is Stive, and you?" << endl; 
                cin >> a; 
                cout << "Nice to meet you will " << a << endl; 
                cout << "As your business?" << endl; 
                cin >> a; 
                if( a == "Good" || a == "Very" || a == "Nice") { 
                        talk(); 
                } 
                else{ 
                        bad(); 
                } 
        } 
        return 0; 
  } 
 // описание функций

  void talk() 
  { 
        int x; 
        //Возможности программы 
/*ок*/  cout << "That's what I know how: \n"; 
/*ок*/  cout << "1) Jokes \n"; 
        cout << "2) The conversation on the souls \n"; 
        cout << "3) Answer to the question \n"; 
/*ok*/  cout << "4) Game <guess the word>\n"; 
                /* 
                Выбор возможностей 
                либо просто разговор 
                */ 
                cin >> x; 
        switch (x) { 
        	
        	
        case 1:
                cout << "1" << endl;
                one();
                break; 
                
                
        case 2: 
                cout << "2" << endl;
                twoo();
                break;
                
                 
        case 3: 
                cout << "3" << endl;
                three();
                break;
                
                 
        case 4: 
                cout << "4" << endl;
                four();
                break; 
        } 
  }
  //при плохом настроении
  void bad() 
  {
  	int r;
  	string z;
  	srand( time(0) );
  	r = 1 + (rand() % 3);
  	cout << "How about the joke?" << endl;
  	cin >> z;
  	if(z == "Yes" || z == "Ok") {
         //анекдоты
         
  		 switch (r) {
  		 	
  		 	
   			case 1:
   			    cout << "To sleep? \n";
   			    cout << "No, I'm sorry, I once. \n";
   			    cout << "I need to think about \n";
   			    cout << "the meaning of life \n";
   			    talk();
   			    break;
   			    
   			    
   			case 2:
   			    cout << "Heard about you \n";
   			    cout << "a lot of bad.\n";
   			    cout << "Wanted to meet \n";
   			    cout << "you closer \n";
   			    talk();
   			    break;
   			    
   			    
   		    case 3:
   		        cout << "The only suicide \n";
   		        cout << "which I can make - \n";
   		        cout << "will discharged \n";
   		        cout << "from the sofa \n";
   		        talk();
   		        break;
   		}
  	}
  	 else {
   		twoo();
   	}
	
  }
//анекдоты
  void one() 
  {
  	int aq = 10;
     int r;
     string h;
  	srand( time(0) );
  	r = 1 + (rand() % 3);
  	
          switch (r) {
          	
          	
   			case 1:
   			    cout << "To sleep? \n";
   			    cout << "No, I'm sorry, I once. \n";
   			    cout << "I need to think about \n";
   			    cout << "the meaning of life \n";
   			    cout << "Continue?\n";
   			    cin >> h;
   			    if(h == "Yes") {
       				go(aq);
       			} 
       			else{
       			    talk();
       			}
   			    break;
   			    
   			    
   			case 2:
   			    cout << "Heard about you \n";
   			    cout << "a lot of bad.\n";
   			    cout << "Wanted to meet \n";
   			    cout << "you closer \n";
   			    cout << "Continue?\n";
   			    cin >> h;
   			    if(h == "Yes") {
       		       go(aq);
       			} 
       			else{
       				talk()
       				;
       			}
   			    break;
   			    
   			    
   		    case 3:
   		        cout << "The only suicide \n";
   		        cout << "which I can make - \n";
   		        cout << "will discharged \n";
   		        cout << "from the sofa \n";
   		        cout << "Continue?\n";
   		        cin >> h;
   		        if(h == "Yes") {
       				go(aq);
       			} 
       			else{
       		       talk();
       			}
   		        break;
   		}
  }
//разговор по душам
  void twoo() {
    int aq = 10;
    int aw = 20;
    string q;
    string h;
    string s;
    string s1;
	cout << "You to tell\n";
	cout << "my history or to\n";
	cout << "tell you want?\n";
	cout << "(I will tell or tell you)\n";
	cin >> q;
	if(q == "I will tell" || q == "One") {
		//рассказы пользователя
        cout << "Tell me friend," << endl;
        cout << "what is happening" << endl;
        cout << "in your life" << endl;
        getline(cin, s);
        getline(cin, s);
        s1 = "bad";
        convers(s1, s);
	}
	else {
		//рассказы бота
	  int r;                            
       r = 1 + (rand() % 2);
       
  	switch (r) {
  		 	
  		 	
   			case 1:
   			    cout << "Recently I broke up with\n";
   			    cout << "a girl with which\n";
   			    cout << "I met 2 years\n";
   			    getline(cin, s);
                   getline(cin, s);
   			    s1 = "bad";
   			    convers(s1, s);
   			    break;
   			    
   			    
   			case 2:
   			    cout << "One day I wrote 700 lines\n";
   			    cout << "of code, and\n";
   			    cout << "2 months couldn't find it error\n";
   			     getline(cin, s);
                    getline(cin, s);
   			     s1 = "bad";
   			     convers(s1, s);
   			    break;
     		}
   	}
 	
       }
  //ответ на вопрос польователя
  void three() 
  {
    string s;
    cout << "Give me you question" << endl;
    getline(cin, s);
    getline(cin, s);
   string s1 = "cup";
   ask(s1, s);
  }
  //угадай слово
  void four() {
  	int aq = 10;
      int aw = 20;
      int ae = 30;
      int ar = 40;
  	int s;
  	string j;
  	string h;
  	srand( time(0) );
  	s = 1 + (rand() % 5);
  	
          switch (s) {
          	
          	
   			case 1:
   			    cout << "That said the man,\n";
   			    cout << "when he sees something\n";
   			    cout << "unusual?\n";
   			    cin >> j;
   			    if(j == "rushed in the eye") {
       				cout << "You win!!!" << endl;
       				cout << "Continue?\n";
   	               cin >> h;
       				if(h == "Yes") {
       				go(aq, aw, ae, ar);
       			} 
       			else{
       				talk();
       			}
       			}
       			else {
       				cout << " You lose!!!" << endl;
       				cout << "Continue?\n";
   	               cin >> h;
       				if(h == "Yes") {
       				go(aq, aw, ae, ar);
       			} 
       			else{
       				talk();
       			}
       			}
       			break;
       			
       			
   			case 2:
   			   cout << "That helps the\n";
   			   cout << "tourist to navigate in\n";
   			   cout << "unfamiliar town?\n";
   			   cin >> j;
   			   if(j == "guide book" || j == "guide") {
       				cout << "You win!!!" << endl;
       				cout << "Continue?\n";
   	               cin >> h;
       				if(h == "Yes") {
       				go(aq, aw, ae, ar);
       			} 
       			else{
       				talk();
       			}
       			}
       			else {
       				cout << " You lose!!!" << endl;
       				cout << "Continue?\n";
   	               cin >> h;
       				if(h == "Yes") {
       				go(aq, aw, ae, ar);
       			} 
       			else{
       				talk();
       			}
       			}
       			break;
       			
       			
   		    case 3:
   		       cout << "Vera, Nadeshda and?\n";
   			   cin >> j;
   			   if(j == "Lubov") {
       				cout << "You win!!!" << endl;
       				cout << "Continue?\n";
   	               cin >> h;
       				if(h == "Yes") {
       				go(aq, aw, ae, ar);
       			} 
       			else{
       				talk();
       			}
       			}
       			else {
       				cout << " You lose!!!" << endl;
       				cout << "Continue?\n";
   	               cin >> h;
       				if(h == "Yes") {
       				go(aq, aw, ae, ar);
       			} 
       			else{
       				talk();
       			}
       			}
       			break;
       			
       			
              case 4:
   		       cout << "What is the item\n";
   		       cout << "is in the design\n";
   		       cout << "of tower crane?\n";
   			   cin >> j;
   			   if(j == "arrow") {
       				cout << "You win!!!" << endl;
       				cout << "Continue?\n";
   	               cin >> h;
       				if(h == "Yes") {
       				go(aq, aw, ae, ar);
       			} 
       			else{
       				talk();
       			}
       			}
       			else {
       				cout << " You lose!!!" << endl;
       				cout << "Continue?\n";
   	               cin >> h;
       				if(h == "Yes") {
       				go(aq, aw, ae, ar);
       			} 
       			else{
       				talk();
       			}
       			}
       			break;
       			
       			
              case 5:
   		      cout << "How d0 usually\n";
   		      cout << "gets gifts Santa Claus?\n";
   		       cin >> j;
   			   if(j == "out of the bag") {
       cout << "You win!!!" << endl;
       				cout << "Continue?\n";
   	               cin >> h;
       				if(h == "Yes") {
       				go(aq, aw, ae, ar);
       			} 
       			else{
       				talk();
       			}
       			}
       			else {
       				cout << " You lose!!!" << endl;
       				cout << "Continue?\n";
   	               cin >> h;
       				if(h == "Yes") {
       				go(aq, aw, ae, ar);
       			} 
       			else{
       				talk();
       			}
       			}
       			break;
   		}
	
  }
