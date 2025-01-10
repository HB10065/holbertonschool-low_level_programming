/**
 *
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	
	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
