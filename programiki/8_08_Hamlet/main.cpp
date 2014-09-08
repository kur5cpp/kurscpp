#include <iostream>
#include <fstream>
#include <cstdint>
//#include <string>
#include <cstdlib>
#include <map>


using namespace std;


//typedef map <string, int> SLOWA;

void add_word(map<string, int> &slowa, string slowo)
{
        if(slowa.find(slowo)!=slowa.end())
                slowa[slowo]++;
        else
                slowa[slowo]=1;
}

void show_words(map <string, int> slowa)
{
        for(map<string, int>::iterator it=slowa.begin(); it!=slowa.end(); it++ ){
                cout<<it->first<<"\t"<<it->second<<endl;
        }
}

int main()
{
        ifstream my_file;
        my_file.open("hamlet.txt");

        map<string, int> slowa;

        while (my_file.good()){
                string s;
                getline(my_file, s);
                bool in_word=0;
                string word="";
                for(uint32_t i=0; i<s.length(); ++i){


                        switch(in_word)
                        {
                                case 0:
                                {
                                        if(isalpha(s[i])){
                                                word+=tolower(s[i]);
                                                in_word = true;
                                        }

                                        else{};
                                        break;

                                }

                                case 1:
                                {
                                        if(!isalpha(s[i])){
                                                //cout<<word<<endl;
                                                add_word(slowa, word);
                                                in_word = false;
                                                word="";
                                        }
                                        else{
                                                word+=s[i];
                                        }
                                        break;

                                }
                        }
                }


        }
        my_file.close();
        show_words(slowa);
        cout << "**End**" << endl;
        return 0;
}
