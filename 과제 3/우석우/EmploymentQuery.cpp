#include "EmploymentQuery.h"

vector<EmploymentList>  EmploymentQuery::searchInfo(){
        vector<EmploymentList> emp;
        vector<EmploymentList>* getList = EmploymentList::getEmploymentList();
        for(int i=0; i<(*getList).size();i++){
            if((* getList)[i].getMember().getId()==g_loginInfo.id){
                emp.push_back((* getList)[i]);
            }
        }
        return emp;       
}
void EmploymentQueryUI::serachInfo(){ 
        vector<EmploymentList> ret = employmentQuery->searchInfo();
        fprintf(out_fp,"3.2. 등록된 채용 정보 조회\n");
        for (EmploymentList emp: ret){
            fprintf(out_fp,"%s %d %s\n",emp.getWork().c_str(),emp.getApplicationNum(),emp.getDueDate().c_str());
        }
}
