long get_size(void);
void fun(void)
{
begin:;
	long sz = get_size();
	if(sz <= 0)
		goto begin;
}
