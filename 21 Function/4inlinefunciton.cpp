/* Inline function kasto vanda compilation ko time ma chai function ko code nai function 
 call vako thau ma aaune tera  function vitra ko code lastai lamo xa vane chai 
 aaudena feri so it is all about the compailer task whether to make or not a function
 as inline*/
#include<iostream>
using namespace std;
 inline void function(){
	cout << "Inline function.";
}
int main(){
	function();
	return 0;
}
