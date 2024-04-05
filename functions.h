struct bus_info
{
    char name[15];
    char bus_id[8];
    char destination[15];
    char departure_date[15];
};

void view();
void write(struct bus_info finfo);
void search();
