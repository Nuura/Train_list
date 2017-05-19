#include "pokedex.h"
#include <stdio.h>
#include <stdlib.h>

t_pokemon *new_link()
{
  t_pokemon *new_link;
  new_link = malloc(sizeof(t_pokemon));
  new_link->name = NULL;
  new_link->id = 0;
  new_link->type = NULL;
  new_link->next = NULL;
  return (new_link);
}

void edit_link(t_pokemon *link, char *new_name, int new_id, char *new_type)
{
  if (link != NULL)
    {
      link->name = new_name;
      link->id = new_id;
      link->type = new_type;
    }
}

void main()
{
  t_pokemon *link_one;
  t_pokemon *link_two;
  t_pokemon *link_three;
  t_pokemon *link_four;
  
  link_one = new_link();
  edit_link(link_one, "Jimmy", 100, "Eau");

  link_two = new_link();
  edit_link(link_two, "Jy", 101, "Eau");
  link_one->next = link_two;

  link_three = new_link();
  edit_link(link_three, "Jojo", 102, "Eau");
  link_one->next->next = link_three;

  link_four = new_link();
  link_one->next->next->next = link_four;
  edit_link(link_four, "Juju", 103, "Eau");
  

  

  
  printf("%s\n", link_one->name);
  printf("%s\n", link_one->next->name);
  printf("%s\n", link_one->next->next->name);
  printf("%s\n", link_one->next->next->next->name);
  
}
