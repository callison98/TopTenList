//Manages a list of top ten hyperlinks
#include <string>
#include <iostream>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
	_list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
	_list.at(index-1) = link;
}

Hyperlink TopTenList::get(int index)
{
	return _list.at(index-1);
}

void TopTenList::display_forward()
{
	for (int i = 0; i < _list.size(); i++)
  	{
  		std::cout << _list[i].text << " " << _list[i].url << std::endl;
  	}
}

void TopTenList::display_backward()
{
  	for (int i = _list.size()-1; i >= 0 ; i--)
  	{
  		std::cout << _list[i].text<< " " << _list[i].url << std::endl;
  	}
}