typedef struct	s_pokemon
{
  char		    *name;
  int		    id;
  char		    *type;
  struct s_pokemon  *next;
}		t_pokemon;
