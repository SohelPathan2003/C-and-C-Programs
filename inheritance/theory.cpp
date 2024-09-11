#include<iostream>
using namespace std;

/*
    Q. what is inheritance?
    inheritance means we inherits data properties from parent class to child class this process
    is know as inheritance .

    Q.what are the benefits of inheritance or why we use it?
    There are two major benefits of inheritance in cpp.

    1)reusability:- reusability means  we can reuse the properties or  data which are present
    in parent class without creating its object we can use it by inheritance by creating child
    class object.
    

    example:- suppose we have one class name as company and it store two class variable name 
    as eid and ename and other we have three type of employee name as permanent employee and 
    temporary employee and project base employee this three are the employee.both are having 
    their name and id means those three employee inherits the properties from company class 
    and reuse it as per there requirement.
                            



    2)extensibility:- extensibility means we add properties and child class means child class
    can use their parent class properties also he create their own properties this is the drawback
    we can not add some properties using object that why we use inheritance in cpp.

    example:- parent class properties acquired by child class and whereas child class create its
    own properties means it have their own properties as we as parent class properties.

    syntax:
    class child_classname:access specifier parent_classname{}

    types of inheritance in cpp
    

    1.simple inheritance :- simple inheritance means we simply inherits one parent class to 
    one child class is know as simple inheritance.
    example:
                        parent class
                             |
                         __________
                        child class

    2.multiple inheritance  :-  multiple inheritance means there more than one parent and
    have one child class common.
          example:         
                 parent1    parent2      parent3
                    |          |           |
                    _________________________
                          child class



    3.multi level inheritance :-there are more than one parent class and more than 
    one child class but individually. means there are one main parent class and one main child class

    example:
                        parent 1 (main parent class)
                                 |
                      ____________________________
                     parent2/ child of 1/ parent 3
                                 |
                     _____________________________
                     parent3/child of 2/parent of 4
                                 |
                     _____________________________
                        child class   (main child class)



    4.hierarchical inheritance :- hierarchical inheritance means there are one parent class
     and more than one child class is know as hierarchical inheritance.

     example:-
                        parent class
                             |
                    __________________________
                    |           |            |
                    child1     child2       child3


    5.hybrid inheritance :- hybrid class it is combination of all type of inheritance means 
    here if we remove on class one by one then it will become above four type. that why we called
    it hybrid inheritance or combination of all four types inheritance.

    example:
                             parent class   
                    
                    |                           |
                child1 class                 child2 class
                   |                            |
                    \                          /
                              child3 class
                              
                        (here child3 class create ambiguity problem means child3 class inherits 
                        child1 and child2 means it acquired 2 parent class at time of calling 
                        we create object of child class as we know when we try to call parent class
                        properties we will get error because compiler get confused which from which
                        class we have to class means child3 class have 2 parent class one from 
                        child1 class and second from child2 class this problem is solved by using
                        virtual keyword when we inherits the properties from parent class then we have
                        to use virtual keyword before access specifier means that child class means
                        that he only one time parent class properties means suppose we inherits from both
                        class and both class have same properties or we can say inherited by same
                        parent class then we use virtual keyword  )


*/
