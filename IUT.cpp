#include<bits/stdc++.h>
#include <unistd.h>
#include "society.cpp"
#include "hall.cpp"

#include "academicbuilding.cpp"
#include "studentwellfarecommittee.cpp"
#include "medicalcenter.cpp"
#include "parking.cpp"
#include "staffs.cpp"
#include "department.cpp"
using namespace std;


bool hasmc, haspl, hasswc;
long long pass = 1234;
bool isRoot = false;

struct FileIO {
    /*
    writing strings with spaces to files was causing problems
    so while writing to file, replace spaces with #
    and while reading from files, replace the # with space
    */
    string encode (string s) {
        for (char& ch : s) if (ch == ' ') {
            ch = '#';
        }
        return s;
    }

    string decode (string s) {
        for (char& ch : s) if (ch == '#') {
            ch = ' ';
        }
        return s;
    }

    bool isEmpty(ifstream& in) { //returns if a file is empty;
        return (in.peek() == std::ifstream::traits_type::eof());
    }

    vector <Hall> readHall() {
        vector <Hall> ret;
        ifstream in;
        in.open("hall.txt");
        if (isEmpty(in)) return ret;
        int n; in >> n;
        for (int i = 0; i < n; ++i) {
            Hall temp;
            string s; int it;
            in >> s;
            s = decode(s);
            temp.setname(s);
            in >> it;
            temp.setmaxcap(it);
            in >> s;
            s = decode(s);
            temp.setsupervisor(s);
            in >> s; s = decode(s);
            temp.setcontact(s);
            ret.emplace_back(temp);
        }
        return ret;
    }

    void writeHall(const vector <Hall> v) {
        ofstream out;
        out.open("hall.txt");
        int n = (int) v.size();
        if (n == 0) return;
        out << n << "\n";
        for (int i = 0; i < n; ++i) {
            Hall t = v[i];
            out << encode(t.getname()) << "\n";
            out << t.getmaxcap() << "\n";
            out << encode(t.getsupervisor()) << "\n";
            out << encode(t.getcontact()) << "\n";
        }
    }

    vector <Society> readSociety() {
        vector <Society> ret;
        ifstream in;
        in.open("society.txt");
        if (isEmpty(in)) return ret;
        int n; in >> n;
        for (int i = 0; i < n; ++i) {
            Society temp;
            string s; int it;
            in >> s;
            s = decode(s);
            temp.setname(s);
            in >> it;
            temp.setroomno(it);
            in >> s;
            s = decode(s);
            temp.setevent(s);
            in >> s;
            temp.setcontact(decode(s));
            ret.emplace_back(temp);
        }
        return ret;
    }

    void writeSociety(const vector <Society> v) {
        ofstream out;
        out.open("society.txt");
        int n = (int) v.size();
        if (n == 0) return;
        out << n << "\n";
        for (int i = 0; i < n; ++i) {
            Society t = v[i];
            out << encode(t.getname()) << "\n";
            out << t.getroomno() << "\n";
            out << encode(t.getevent()) << "\n";
            out << encode(t.getcontact()) << "\n";
        }
    }

    vector <Faculty> readFaculty(string pref) {
        vector <Faculty> ret;
        ifstream in;
        string fname = pref + "faculty.txt";
        in.open(fname);
        if (isEmpty(in)) return ret;
        int n; in >> n;
        for (int i = 0; i < n; ++i) {
            Faculty temp;
            string s; int it;
            in >> s;
            s = decode(s);
            temp.setname(s);
            in >> it;
            temp.setid(it);
            in >> it;
            temp.setsalary(it);
            in >> s;
            s = decode(s);
            temp.setaddress(s);
            in >> s; s = decode(s);
            temp.setdept(s);
            in >> s; s = decode(s);
            temp.setdesig(s);
            in >> s; s = decode(s);
            temp.setcontact(s);
            ret.emplace_back(temp);
        }
        return ret;
    }

    void writeFaculty(const vector <Faculty> v, string pref) {
        ofstream out;
        string fname = pref + "faculty.txt";
        out.open(fname);
        int n = (int) v.size();
        out << n << "\n";
        for (int i = 0; i < n; ++i) {
            Faculty t = v[i];
            out << encode(t.getname()) << "\n";
            out << t.getid() << "\n";
            out << t.getsalary() << "\n";
            out << encode(t.getaddress()) << "\n";
            out << encode(t.getdept()) << "\n";
            out << encode(t.getdesig()) << "\n";
            out << encode(t.getcontact()) << "\n";
        }
    }

    vector <Student> readStudent(string pref) {
        vector <Student> ret;
        ifstream in;
        string fname = pref + "student.txt";
        //cout << fname << "\n";
        in.open(fname);
        if (isEmpty(in)) return ret;
        int n; in >> n;
        for (int i = 0; i < n; ++i) {
            Student temp;
            string s; in >> s;
            temp.setname(decode(s));
            int it;
            in >> it;
            temp.setid(it);
            in >> it;
            temp.setyear(it);
            in >> it;
            temp.setscholarship(bool(it));
            in >> s;
            temp.setaddress(decode(s));
            in >> s;
            temp.setdob(decode(s));
            in >> s;
            temp.setcontact(decode(s));
            in >> s;;
            temp.setdept(decode(s));
            ret.emplace_back(temp);
        }
        cout << (int) ret.size() << "\n";
        return ret;
    }

    void writeStudent(const vector <Student> v, string pref) {
        ofstream out;
        string fname = pref + "student.txt";
        out.open(fname);
        int n = (int) v.size();
        out << n << "\n";
        for (int i = 0; i < n; ++i) {
            Student t = v[i];
            out << encode(t.getname()) << "\n";
            out << t.getid() << "\n";
            out << t.getyear() << "\n";
            out << int(t.getscholarship()) << "\n";
            out << encode(t.getaddress()) << "\n";
            out << encode(t.getdob()) << "\n";
            out << encode(t.getcontact()) << "\n";
            out << encode(t.getdept()) << "\n";
        }
    }

    vector <AB> readAB() {
        vector <AB> ret;
        ifstream in;
        in.open("ab.txt");
        if (isEmpty(in)) return ret;
        int n; in >> n;
        for (int i = 0; i < n; ++i) {
            AB temp;
            string s; int it;
            in >> s;
            s = decode(s);
            temp.setname(s);
            in >> it;
            temp.setfloor(it);
            in >> it;
            temp.setroom(it);
            ret.emplace_back(temp);
        }
        return ret;
    }

    void writeAB(const vector <AB> v) {
        ofstream out;
        out.open("ab.txt");
        int n = (int) v.size();
        if (n == 0) return;
        out << n << "\n";
        for (int i = 0; i < n; ++i) {
            AB t = v[i];
            out << encode(t.getname()) << "\n";
            out << t.getfloor() << "\n";
            out << t.getroom() << "\n";
        }
    }

    SWC readSWC() {
        SWC ret;
        ifstream in;
        in.open("swc.txt");
        if (isEmpty(in)) return ret;
        hasswc = 1;
        //int n; in >> n;
        SWC temp;
        string s;
        in >> s;
        s = decode(s);
        temp.setPresident_name(s);
        in >> s;
        s = decode(s);
        temp.setVicePresident_name(s);
        in >> s;
        s = decode(s);
        temp.setStaffmember_name(s);
        in >> s;
        s = decode(s);
        temp.setAcademicadvisor_name(s);
        in >> s;
        s = decode(s);
        temp.set_contact(s);
        ret = temp;
        return ret;
    }

    void writeSWC(SWC t) {
        ofstream out;
        out.open("swc.txt");
        if (!hasswc) return;
        //int n = (int) v.size();
        //out << n << "\n";
        out << encode(t.getPresident_name()) << "\n";
        out << encode(t.getVicePresident_name()) << "\n";
        out << encode(t.getStaffmember_name()) << "\n";
        out << encode(t.getAcademicadvisor_name()) << "\n";
        out << encode(t.get_contact()) << "\n";
    }

    vector <Staff> readStaff() {
        vector <Staff> ret;
        ifstream in;
        in.open("staff.txt");
        if (isEmpty(in)) return ret;
        int n; in >> n;
        for (int i = 0; i < n; ++i) {
            Staff temp;
            string s; in >> s;
            temp.setname(decode(s));
            int x;
            in >> x;
            temp.setid(x);
            in >> x;
            temp.setsalary(x);
            in >> s;
            temp.setaddress(decode(s));
            in >> s;
            temp.setdob(decode(s));
            in >> s;
            temp.setcontact(decode(s));
            ret.emplace_back(temp);
        }
        return ret;
    }

    void writeStaff(const vector <Staff> v) {
        int n = (int) v.size();
        ofstream out;
        out.open("staff.txt");
        if (n == 0) return;
        out << n << "\n";
        for (int i = 0; i < n; ++i) {
            Staff t = v[i];
            out << encode(t.getname()) << "\n";
            out << t.getid() << "\n";
            out << t.getsalary() << "\n";
            out << encode(t.getaddress()) << "\n";
            out << encode(t.getdob()) << "\n";
            out << encode(t.getcontact()) << "\n";
        }
    }

    ParkingLot readPL() {
        ParkingLot ret;
        ifstream in;
        in.open("pl.txt");
        if (isEmpty(in)) return ret;
        haspl = 1;
        int n;
        in >> n;
        ret.setcapacity(n);
        in >> n;
        ret.setcar(n);
        return ret;
    }

    void writePL(ParkingLot t) {
        ofstream out;
        out.open("pl.txt");
        if (!haspl) return;
        out << t.getcapacity() << "\n";
        out << t.getcount() << "\n";
    }

    MedicalCenter readMC() {
        MedicalCenter ret;
        ifstream in;
        in.open("mc.txt");
        if (isEmpty(in)) return ret;
        hasmc = 1;
        string s;
        in >> s;
        ret.setname(decode(s));
        in >> s;
        ret.setcontact(decode(s));
        return ret;
    }

    void writeMC(MedicalCenter t) {
        ofstream out;
        out.open("mc.txt");
        if (!hasmc) return;
        out << encode(t.getname()) << "\n";
        out << encode(t.getcontact()) << "\n";

    }

    long long readPass() {
        ifstream in;
        in.open("pass.txt");
        long long ret;
        in >> ret;
        return ret;
    }
    void writePass(long long s) {
        ofstream out;
        out.open("pass.txt");
        out << s;
    }

};

template <class T>
class Password {
public:

    Password() {}
    
    T getHash(const string s) { //rabin karp hashing algorithm
        T hash = 0, power = 1, mod = 1e9 + 7, p = 101;
        for (char ch : s) {
            hash = (hash + power * ch) % mod;
            power = power * p % mod;
        }
        return hash;
    }

    bool admin() {
        system("color 0F");
        if (isRoot) return true;
        string s; cout << "Enter root password to access this feature: ";
        cin >> s;
        if (getHash(s) == pass) {
            isRoot = true;
            return true;
        } else {
            return false;
        }
    }
};

void spc(int unit) //print given unit of spaces
{
    while (unit--) printf(" ");
}

void showwelcome()
{
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t";
    for(int i=0;i<7;i++)
    {
        //system("CLS");
        for(int j=0;j<i;j++)
        {
            system("color 02");
            cout<<"* ";
        }
        sleep(0.25);
    }

    cout<<endl;
    cout<<"\t\t";
    string text="    WELCOME TO IUT MANAGEMENT SYSTEM";
    cout<<text<<endl;
    cout<<"\t\t";
    for(int i=0;i<7;i++)
    {
        //system("CLS");
        for(int j=0;j<i;j++)
        {
            system("color 02");
            cout<<"* ";
        }
        sleep(0.25);
    }

    cout<<endl;
    system("Pause");

}

void showhome() {
system("color 0F");
    cout << "Welcome to IUT management system\n";
    cout << "Press\n";
    cout << "1 to add entry\n";
    cout << "2 to show entry\n";
    cout << "3 to delete entry\n";
    cout << "4 to change root password\n";
    cout << "5 to quit programe\n";
    cout << "-> ";
}

void showdelete() {
    system("color 0F");
    cout << "Press\n";
    cout << "1 to delete a student\n";
    cout << "2 to delete a faculty\n";
    cout << "3 to delete a staff\n";
    cout << "4 to return to home screen\n";
    cout << "-> ";
}

void showdepartments() {
    system("color 0F");
    cout << "Select the desired department please!\n";
    cout << "Press\n";
    cout << "1 for CSE\n";
    cout << "2 for EEE\n";
    cout << "3 for MCE\n";
    cout << "4 for CEE\n";
    cout << "5 for BTM\n";
    cout << "6 for TVE\n";
    cout << "-> ";
}

void showshow() {
    system("color 0F");
    puts("Press");
    puts("1 to show student");
    puts("2 to show faculty");
    puts("3 to show staff");
    puts("4 to show academic building");
    puts("5 to show society");
    puts("6 to show hall");
    puts("7 to show student wellfare committee");
    puts("8 to show medical center");
    puts("9 to show parking lot");
    puts("10 to return to home screen");
    cout << "-> ";
}

void showadd() {
    system("color 0F");
    puts("Press");
    puts("1 to add student");
    puts("2 to add faculty");
    puts("3 to add staff");
    puts("4 to add academic building");
    puts("5 to add society");
    puts("6 to add hall");
    puts("7 to add student wellfare committee");
    puts("8 to add medical center");
    puts("9 to add parking lot");
    puts("10 to return to home screen");
    cout << "-> ";
}

void delstaff(vector <Staff>& sf, int id) {

    for (int i = 0; i < (int) sf.size(); ++i) {
        if (sf[i].getid() == id) {
                system("color 02");
            sf.erase(sf.begin() + i);
            puts("Remove successful");
            return;
        }
    }
    system("color 0C");
    cout << "NO stuff found with the given ID!\n";
}

void clr() {
    system("CLS");
}

int main()
{

   FileIO file;
   vector <string> dname = {"", "cse", "eee", "mce", "cee", "btm", "tve"};
   //pre loading preparations

    vector <Department> d(10);
    vector <Staff> sf;
    ParkingLot pl;
    MedicalCenter mc;
    SWC sc;
    vector <AB> bld;
    vector <Hall> hl;
    vector <Society> st;
    for (int i = 1; i < 7; ++i) {
        d[i].stv = file.readStudent(dname[i]);
        d[i].ft = file.readFaculty(dname[i]);
    }
    sf = file.readStaff();
    pl = file.readPL();
    mc = file.readMC();
    sc = file.readSWC();
    bld = file.readAB();
    hl = file.readHall();
    st = file.readSociety();
    pass = file.readPass();
    Password <long long> P;
    clr();
    showwelcome();

    while (true) {


        //spc(100);
        home:
        clr();
        showhome();
        int opt; cin >> opt;
        try {
            if (opt == 1) {
                add:
                clr();
                bool y = P.admin();
                if (y == false) {
                system("color 0C");
                    puts("Incorrect password entered!");
                    system("Pause");
                    goto home;
                }
                clr();
                showadd();
                int x; cin >> x;
                clr();
                if (x == 1) {
                    clr();
                    showdepartments();
                    int did; cin >> did;
                    clr();
                    d[did].addtostudent(dname[did]);
                } else if (x == 2) {
                    clr();
                    showdepartments();
                    int did; cin >> did;
                    clr();
                    d[did].addtofaculty(dname[did]);
                } else if (x == 3) {
                    clr();
                    Staff t;
                    t.addStaff();
                    sf.emplace_back(t);
                } else if (x == 4) {
                    clr();
                    AB t;
                    t.addAB();
                    bld.emplace_back(t);
                } else if (x == 5) {
                    clr();
                    Society t;
                    t.addSociety();
                    st.emplace_back(t);
                } else if (x == 6) {
                    clr();
                    Hall t;
                    t.addHall();
                    hl.emplace_back(t);
                } else if (x == 7) {
                    clr();
                    sc.addMember();
                } else if (x == 8) {
                    clr();
                    mc.adddoctor();
                } else if (x == 9) {
                    clr();
                    pl.addgarage();
                } else if (x == 10) {
                    //clr();
                    goto home;
                }
                else {
                                system("color 0C");
                    puts("\nUnsupported button pressed. Please try again!\n");
                    system("Pause");
                    goto add;
                }
            } else if (opt == 2) {
                show:
                clr();
                showshow();
                int x; cin >> x;
                clr();
                if (x == 1) {
                    showdepartments();
                    int did; cin >> did;
                    clr();
                    d[did].showallstudents();
                } else if (x == 2) {
                    showdepartments();
                    int did; cin >> did;
                    clr();
                    d[did].showallfaculties();
                } else if (x == 3) {
                    int sz = (int) sf.size();
                    if (sz == 0) {
                                        system("color 0C");
                        puts("No staff added so far!");
                    } else {
                        for (int i = 0; i < sz; ++i) {
                            sf[i].showStaff();
                            seperator();
                        }
                    }
                } else if (x == 4) {
                    int sz = (int) bld.size();
                    if (sz == 0) {
                                        system("color 0C");
                        puts("No academic building added so far!");
                    } else {
                        for (int i = 0; i < sz; ++i) {
                            bld[i].showAB();
                            seperator();
                        }
                    }
                } else if (x == 5) {
                    int sz = (int) st.size();
                    if (sz == 0) {
                                        system("color 0C");
                        puts("No society added so far!");
                    } else {
                        for (int i = 0; i < sz; ++i) {
                            st[i].showSociety();
                            seperator();
                        }
                    }
                } else if (x == 6) {
                    int sz = (int) hl.size();
                    if (sz == 0) {
                                        system("color 0C");
                        puts("No hall added so far!");
                    } else {
                        for (int i = 0; i < sz; ++i) {
                            hl[i].showHall();
                            seperator();
                        }
                    }
                } else if (x == 7) {
                    if (!hasswc) {
                                        system("color 0C");
                        puts("Student Wellfare Committee not added so far!");
                    } else {
                        sc.showMember();
                    }
                } else if (x == 8) {
                    if (!hasmc) {
                                        system("color 0C");
                        puts("No doctor added in the medical center yet!");
                    } else {
                        mc.showdoctor();
                    }
                } else if (x == 9) {
                    if (!haspl) {
                                        system("color 0C");
                        puts("Parking lot not yet added!");
                    } else {
                        pl.showparking();
                    }
                } else if (x == 10) {
                    goto home;
                }
                else {
                                    system("color 0C");
                    puts("Invalid key pressed. Please try again!");
                    system("Pause");
                    goto show;
                }
                system("Pause");
            } else if (opt == 3) {
                del:
                clr();
                bool y = P.admin();
                if (y == false) {
                                    system("color 0C");
                    puts("Incorrect password entered!");
                    system("Pause");
                    goto home;
                }
                clr();
                showdelete();
                int opt; cin >> opt;
                if (opt == 1) {
                    clr();
                    showdepartments();
                    int did; cin >> did;
                    clr();
                    puts("Enter ID of the student you want to delete");
                    cout << "-> ";
                    int id; cin >> id;
                    d[did].delstudent(id);
                } else if (opt == 2) {
                    clr();
                    showdepartments();
                    system("CLS");
                    int did; cin >> did;
                    clr();
                    puts("Enter ID of the faculty you want to delete: ");
                    int id; cin >> id;
                    d[did].delfaculty(id);
                } else if (opt == 3) {
                    clr();
                    puts("Enter ID of the stuff you want to delete: ");
                    cout << "-> ";
                    int id; cin >> id;
                    delstaff(sf, id);
                } else if (opt == 4) {
                    goto home;
                } else {
                                    system("color 0C");
                    puts("\nUnsupported button pressed. Please try again!\n");
                    system("Pause");
                    goto del;
                }
            } else if (opt == 4) {
                clr();
                bool y = P.admin();
                if (y == false) {
                                    system("color 0C");
                    puts("Incorrect password entered!");
                    system("Pause");
                    goto home;
                }
                string s;
                cout << "Enter new password: "; cin >> s;
                pass = P.getHash(s);
                            system("color 02");
                puts("Password changed successfully!");
                system("Pause");
            } else if (opt == 5) {
                for (int i = 1; i < 7; ++i) {
                    file.writeStudent(d[i].stv, dname[i]);
                    file.writeFaculty(d[i].ft, dname[i]);
                }
                file.writeStaff(sf);
                file.writePL(pl);
                file.writeMC(mc);
                file.writeSWC(sc);
                file.writeAB(bld);
                file.writeHall(hl);
                file.writeSociety(st);
                file.writePass(pass);
                exit(0);
            } else {
                throw(opt);
            }
        } catch (int opt) {
            system("color 0C");
            puts("\nUnsupported button pressed. Please try again!\n");
            system("Pause");
            goto home;
        }
    }

}

