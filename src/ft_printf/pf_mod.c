#include "../../incl/printf.h"

int			pf_ismod_pre(const char *frmt, uiput *db)
{
	if (frmt[db->inx] == 'h' || frmt[db->inx] == 'l'||
		frmt[db->inx] == 'j' || frmt[db->inx] == 'z')
		return (1);
	else
		return (0);

}

int			pf_parse_mod(const char *frmt, uiput *db, attrib *ph)
{
	if (!ph->mod)
	{
		if (frmt[db->inx] == 'h')
		{
			if (frmt[db->inx + 1] != 'h')
				ph->mod = 'h';
			else
				ph->mod = 'H';
		}
		else if (frmt[db->inx] == 'l')
		{
			if (frmt[db->inx + 1] != 'l')
				ph->mod = 'l';
			else
				ph->mod = 'L';
		}
		else if (frmt[db->inx] == 'j')
			ph->mod = 'j';
		else if (frmt[db->inx] == 'z')
			ph->mod = 'z';
	}
	if (ft_isupper(ph->mod))
		db->inx += 2;
	else
		db->inx++;
	return (ph->mod);
}
