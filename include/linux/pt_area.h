#ifndef _LINUX_PT_AREA_H
#define _LINUX_PT_AREA_H
#define DEFAULT_PGD_PAGE_ORDER 5
#define DEFAULT_PMD_PAGE_ORDER 7

#define SBI_SM_SET_PTE 101
#define SBI_SET_PTE_ONE 1
#define SBI_PTE_MEMSET 2
#define SBI_PTE_MEMCPY 3
#define SBI_SET_PTE_BATCH_ZERO 4
#define SBI_SET_PTE_BATCH_SET 5

extern int enclave_module_installed;
extern char *pt_area_vaddr;
extern unsigned long pt_area_pages;
extern int PGD_PAGE_ORDER;
extern int PMD_PAGE_ORDER;

void init_pt_area(void);

unsigned long pt_pages_num(void);

unsigned long pt_free_pages_num(void);

char* alloc_pt_pgd_page(void);

char* alloc_pt_pmd_page(void);

char* alloc_pt_pte_page(void);

int free_pt_pgd_page(unsigned long page);

int free_pt_pmd_page(unsigned long page);

int free_pt_pte_page(unsigned long page);

int check_pt_pte_page(unsigned long page);
#endif /* _LINUX_PT_AREA_H */
