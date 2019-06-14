/* 
    Your main program goes here
*/
#include <iostream>
//#include "network_manager.h"
//#include "gplot.h"
//#include "path.h"
#include <vector>
#include<algorithm>
#include<iostream>
#include<limits.h>

using namespace std;

// create NetworkManager first
//NetworkManager *nm = new NetworkManager();


using namespace std;
# define V 4
std::vector <string> Switches;
int total=0;
int size=0;

std::vector<std::vector<int>> Edgelist{{0,10,15,20},
{10,0,35,25},
{15,35,0,30},
{20,25,30,0}};



//*Class Network Manger To Nodes And Edges their Adjancy Matrix
class NetworkManager
{

public:
//test method of NetworkManager Class
void test()
{
cout << "I am Network Manager Class"<< endl;

}
//Adding a new Node
string add_switch(string switchname)
{

if (total<1)
{
return "All Switches Added Already!" ;

}
else
{
Switches.push_back(switchname);
total=total-1;
cin.get();
return "Switch  Added SuccessFully!";

}

};
//Display all Vertext List
void get_all_nodes()
{
cout << "Your Currenct Nodes:-" << endl;

if (Switches.empty()==false)
{


for (auto i =Switches.begin();i!=Switches.end();i++)
{
cout << *i << endl ;
}

}
else
{

cout << "Nodes Are Empty!" << endl;
}


};

//Connect Two Nodes or Vertex
void connect()
{
string node1,node2;
int row,column,weight;
if (Switches.empty()==true)
{
cout << "Sorry! You Can Not Connect Nodes, Nodes not added Yet!" << endl;
}
else
{
cout << "To Connect the Two Nodes Please Specify the Names of Two Nodes : " <<endl;
cout << "Enter the First Node:"<<endl;
cin>>node1;
if (std::find(Switches.begin(),Switches.end(),node1) != Switches.end() )
{
cout << "OK!Continue..." << endl;

std::vector<string>::iterator it;
it=std::find(Switches.begin(),Switches.end(),node1);
cout << "Index Found on " << it - Switches.begin()+1 << endl ; 
row=it-Switches.begin()+1;


}
else
{
cout <<"The Node You Enter Does Not Exists !"<<endl;
}
cout << "Enter the Second Node:" << endl;
cin >> node2;
if (std::find(Switches.begin(),Switches.end(),node2) != Switches.end() )
{
cout << "OK!Continue..." << endl;

std::vector<string>::iterator it;
it=std::find(Switches.begin(),Switches.end(),node2);
cout << "Index Found on " << it - Switches.begin()+1 << endl ; 
column=it-Switches.begin()+1;

cout << "Connecting the Nodes...."<<endl;
cout << "Please Provide the flow Value or Weight"<<endl ;
cin >> weight;

cout << "ROw"<< row <<"column" <<  column <<endl;

Edgelist[row-1][column-1]=weight;


}
else
{
cout <<"The Node You Enter Does Not Exists !"<<endl;
}

}
};
void Matrix()
{
if (Switches.empty()==true)
{
cout << endl<< "(Please Add the Total Switches First!)" << endl;

}
else
{
int a=Switches.size();
if (a != size)
{
cout<<endl << "!Please Add full Switches to See Edges!)"<< endl;
cin.get();
}else
{

for (auto k =Switches.begin();k!=Switches.end();k++)
{
cout <<" |" << *k << "|" ;

}
cout << endl << "  " <<"_" <<"_________________" << endl ;


for (int i=0; i < size; i++)
{
for (int j=0;j <size; j++)
{
cout << " |" << Edgelist[i][j] << "|";
}
cout << endl << "  " <<"_" <<"_________________" << endl ;

}
}
}
};

};

//class Path TO find Shortest Path
int travllingSalesmanProblem(int graph[][V], int s) 
{ 
    // store all vertex apart from source vertex 
    vector<int> vertex; 
    for (int i = 0; i < V; i++) 
        if (i != s) 
            vertex.push_back(i); 
  
    // store minimum weight Hamiltonian Cycle. 
    int min_path = INT_MAX; 
    do { 
  
        // store current Path weight(cost) 
        int current_pathweight = 0; 
          
        // compute current path weight 
        int k = s; 
        for (int i = 0; i < vertex.size(); i++) { 
            current_pathweight += graph[k][vertex[i]]; 
            k = vertex[i]; 
        } 
        current_pathweight += graph[k][s]; 
  
        // update minimum 
        min_path = min(min_path, current_pathweight); 
         
    } while (next_permutation(vertex.begin(), vertex.end())); 
  
    return min_path; 
} 


//PUblic method to initialize the array
void init(int row,int col)
{
for (int i=0; i < row ; i++)
{
for (int j=0; j < col; j++)
{
Edgelist[i][j]=0;
}
}
}

//PUblic Method Welcome User TO show menu
void welcomeuser()
{
string swichname;

class NetworkManager N;
int flag=0;

int option=0;

cout << endl;
cout << "***************welcome***************" << endl;
cout <<"Here Are Total " << total << " Edges !" << endl;
cout << "*************************************"<<endl;

int graph[][4]={{0,0,0,0},
{0,0,0,0},
{0,0,0,0},
{0,0,0,0}
}
;
init(total,total);


cout <<"Please Select Your Option"  << endl;
cout << "Press 1 To Add New Vertex."  << endl;
cout << "Press 2 to show all Vertex"  << endl;
cout << "Press 3 To Connect Any Two Vertex"  << endl;
cout << "Press 4 To show all Edges" << endl;
cout << "press 5 TO Get the minimum path value"<<endl;
cout << "Press 6 To Exit!" << endl;

cin >> option;

switch(option )
{
case 1: 

cout << "You Press 1" << endl;

cout << "Please Enter the Switch Name" << endl;
 
cin >> swichname;
cout << N.add_switch(swichname);
welcomeuser();

break;
case 2: 
cout<< "Your All Nodes"<<endl;

N.get_all_nodes();

welcomeuser();
break;
case 3:
cout << "Here You Connect Any Two Nodes!"<<endl;
N.connect();
welcomeuser();
break;
case 4:
cout << "Your All Edges Adjecent Matrix!(WIth Weight and Flow Value)"<<endl;
N.Matrix();
welcomeuser();
break;
case 5:

for (int i=0; i < 4; i++)
{
for (int j=0;j <4; j++)
{
graph[i][j]=Edgelist[i][j];
}

}


cout << "Note* Your Each and Every Node should be Connected,Other Wise Output may Differ From Original!!!!" << endl;
cout << "Your Minimum Path Value is :-" << travllingSalesmanProblem(graph,0);




 
//cout << "Your MiniMum Path Value Will Be :"<<endl;
//cout << rand()%20+20;



welcomeuser();
break;
case 6:
break;
}
}



int main(int argc, char** argv){

    /* start your program */

class NetworkManager N;
cout << "Please Enter the Number of Edges!" << endl;
cin >> total;
size=total;
welcomeuser();
cin.get();
    return 0;
}
