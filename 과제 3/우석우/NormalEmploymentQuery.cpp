#include "NormalEmploymentQuery.h"

bool compareByName(const EmploymentList& emp1, const EmploymentList& emp2) {
    return emp1.getEmploymentList().getName() < emp2.getEmploymentList().getName();
};

vector<EmploymentList> NormalEmploymentQuery::searchInfo(){
        vector<EmploymentList> emp;
        vector<EmploymentList>* getList = EmploymentList::getEmploymentList();

        for(int i=0; i<(*getList).size();i++) {
            emp.push_back((* getList)[i]);
        }

        sort(emp.begin(), emp.end(), compareByName);
        return emp;       
}

void NormalEmploymentQueryUI::serachInfo(){ 
        vector<EmploymentList> ret = normalEmploymentQuery->searchInfo();
        fprintf(out_fp,"3.2. 등록된 채용 정보 조회\n");
        for (EmploymentList emp: ret){
            fprintf(out_fp,"%s %s %s %d %s\n",emp.getName().c_str(),emp.getId(),emp.getWork().c_str(),emp.getMember(),emp.getDueDate().c_str());
        }
}
