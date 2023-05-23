#include "NormalEmploymentQuery.h"

// 회사이름을 오름차순으로 불러오는 함수
bool compareByName(const EmploymentList& emp1, const EmploymentList& emp2) {
    return emp1.getEmploymentList().getName() < emp2.getEmploymentList().getName();
};

// 리스트를 불러와 회사이름 오름차순으로 정렬한다.
vector<EmploymentList> NormalEmploymentQuery::searchInfo(){
        vector<EmploymentList> emp;
        vector<EmploymentList>* getList = EmploymentList::getEmploymentList();

        for(int i=0; i<(*getList).size();i++) {
            emp.push_back((* getList)[i]);
        }

        sort(emp.begin(), emp.end(), compareByName);
        return emp;       
}

// 등록된 리스트에서 회사이름, 사업자번호, 업무, 인원 수, 신청마감일을 보여준다.
void NormalEmploymentQueryUI::serachInfo(){ 
        vector<EmploymentList> ret = normalEmploymentQuery->searchInfo();
        fprintf(out_fp,"4.1. 채용 정보 검색\n");
        for (EmploymentList emp: ret){
            fprintf(out_fp,"%s %s %s %d %s\n",emp.getName().c_str(),emp.getId(),emp.getWork().c_str(),emp.getMember(),emp.getDueDate().c_str());
        }
}
