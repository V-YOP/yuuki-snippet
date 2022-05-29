void func1() 
{
    int i;
    int count = 0;
    huffma Hnode[26];
    huffma huff[26];
    for(i = 0; i < 26; i++) 
    {
        if (Hnode[i].weight > 0) 
        {
            huff[count].date = Hnode[i].date;
            huff[count].weight = Hnode[i].weight;
            count++;
        }
    }
}

