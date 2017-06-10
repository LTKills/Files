# File Organization Second Project
Our class is **Turma A**

## Project Division

### Almost implemented (from previous project)
1. Interface and data display
2. Reading input file and treating it
3. 

### TODO
1. Generate the 3 output files (with Worst, Best or First-fit)

2. Create one primary index **per output file** by the field *ticket*
    - Note here that each file has it index (files 1, 2, 3 have respective 
      indexes 1, 2 and 3). Also, index files MUST be generated IMMEDIATLY AFTER
      the output files. e.g: file 1 generated -> index 1 generated -> file 2 
      generated -> index 2 generated...
    
3. **Logic remotion:** user should type a value and we should
    - Search the record in **each of the 3 files USING THE INDEX FILES**.
    - **Logic remove** the record (See FAQ for explaining).
    - Physically remove the record **from the index files** (See FAQ).
    - Display a message saying whether it was or not successfully removed. 
  
4. **Insertion:** insertion should be done using logic removed spaces
  (dynamic reuse of space).
    - For output file 1 (first-fit) WITHOUT ORDERING: list of removed
    records with treatment of intern fragmentation WITHOUT concatenation
    of available spaces.

    - For output file 2 (best-fit) WITH INCREASING ORDERING: list of removed
    records with treatment of intern fragmentation WITHOUT concatenation
    of available spaces.

    - For output file 2 (worst-fit) WITH DECREASING ORDERING: list of removed
    records with treatment of intern fragmentation WITHOUT concatenation
    of available spaces.

    - **Input:** the user should type the record to be inserted, then we should
      insert the record IN EACH OF THE THREE FILES, update de INDEX FILE and 
      display a message saying whether it was or not successfully inserted.
    
 5. **Statistics about the index file:** This functionality should display
 a TABLE that contains the *number of records* associated to each of the index
 files.
  (????? ASK THE INTERN ?????)
  
 6. **Statistics about the removed records:**
  (????? ASK THE INTERN ?????)

---------------------------------------------------------------------------
## File Structuring
  The file structure will be identical as the first project. Fixed-size
  fields should be grouped before variable ones following the order:
  
**FIXED**

  1. ticket
  2. documento
  3. dataHoraCadastro
  4. dataHoraAtualiza

**VARIABLE**

  5. dominio
  6. nome
  7. cidade
  8. uf
  

**Fixed fields come all together on the beginning of the record**,
followed by the variable fields.

Fixed fields do not need any type of indicators, they are always there. 
Variable fields should have **size indicators** before them. 
Records should have **delimiters** at the end of them.

---------------------------------------------------------------------------
## Restrictions
- All files shoud be weitten and read in *binary mode*
- Data should be read *field by field*
- Index files shoud be in the disk, but they should be loaded in RAM
  during the program's execution.
- *NUSPs and names* should be in the code, otherwise we simply WILL
  NOT GET ANY GRADE AT ALL.
- The program should compile in *gcc 4.8.2* or newer.
---------------------------------------------------------------------------

## FAQ

**Q: My question isn't answered here, what now?**

- A: Check the slides. Seriously, check it 100 times.



**Q: Checked 100 times, what now?!?!**

- A: Check 1000 times.



**Q: My PC exploded cuz I checked the slides too much.**

- A: Let's ask the teacher or her intern.



**Q: Should I put the fields with fixed size together?**

- A: Yes. Put them at the beginning of the record.



**Q: But all the files have fixed number of fields.**

- A: Yea we know, just "pretend" they have not unless it is 
'fixed number of fields' and we'll get 10...



**Q: What can be used from the first project?**

- A: It seems all we've done wrong was assuming that all files
have fixed number of fields per record, fixing that should make
the previous code acceptable.



**Q: PDF page 3 says: "note that the files generated by 'functionality 2' 
will be equal. What is 'functionality 2'?"**
- A: 



**Q: PDF page 3 says: "note that the index files generated by 'functionality 3' 
will be equal. What is 'functionality 3'?**
- A:



**Q: What is and how to perform a *logic remotion*?**
- A:



**Q: In the *logic remotion*, should I remove the record from all the files
  and from all the index files?**
- A:



**Q: Why in hell should I read data field by field instead of the whole record?**
  - A: 
