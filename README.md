# qStringPaint
A module for adding QString a set of "colorify" functions for HTML-syntax-based display widgets.

included: 4 overloaded versions of qStringPaint()
-------------------------------------------------------------|

    1: void    qStringPaint(QString* str, QString htmlColorCode);
    
    2: QString qStringPaint(QString str, QString htmlColorCode);
    
    3: void    qStringPaint(QString* str, int qtcolor);
    
    4: QString qStringPaint(QString str, int qtcolor);

-------------------------------------------------------------|

how to use?

  -use namespace qStringPaint::

  -if you want to simply replace the input string with the colored: call void versions by passing a         reference to original     string, rather than the string itself. (overload versions 1 and 3)
  
  -if you prefer to keep the input string unchanged, you can pass the string itself (not the reference) which will call a function version with a return value QString (edited) (overload versions 2 and 4)
  
  --you can also chose how to pass the color you want your string html-parsed in.
    1 and 3 versions are taking an html-color value in a string type, for example "#000000" for black, "#00ff00" for green 
    
    2 and 4 versions are taking a Qt built in color instead, for example Qt::black, Qt::green etc.
    
    also black will be default if nor qtcolor and htmlColorCode are given.
    


//HelloCheapAndColorfulWorld.cpp    usage examples


    #include <qStringPaint.h>
    
    QString str1 = "kaki",   REDCODE="#ff0000";
    qStringPaint(&str1, Qt::green); //kaki will show as green in any richtext display widget now.
    qStringPaint(&str1, "#fc45a1"); //some random color idk what's that. probably some sort of greyed brown.
    QString* str2p = new QString("kaki");  //will be more convinient if u will use the function often, as you dont need to bother
    //about passing it by reference
    qStringPaint(str2p, "REDCODE"); //kaki is red now
    
    QString imNotGonnaChange = "kaki";
    QString imGoingThen = qStringPaint(imNotGonnaChange, REDCODE); 
    
    //imNotGonnaChange is still just a black kaki.
    //imGoingThen is a parsed html code containing the word kaki, and surrounded by red color style.
    
    qStringPaint(imGoingThen); //imGoingThen is now black again, as a default color is black if not given in the second var.
    
good luck using :>





