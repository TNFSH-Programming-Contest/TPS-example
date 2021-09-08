nothing:

all: pA merge-pdf

pA:
	cd pA && tps statement
	cd pA && tps gen

pA-check:
	cd pA && > solutions-check.txt
	cd pA && echo "ac.cpp" >> solutions-check.txt
	cd pA && tps invoke solution/ac.cpp | tee -a solutions-check.txt
	cd pA && echo "wa.cpp" >> solutions-check.txt
	cd pA && tps invoke solution/wa.cpp | tee -a solutions-check.txt
	cd pA && echo "re.cpp" >> solutions-check.txt
	cd pA && tps invoke solution/re.cpp | tee -a solutions-check.txt

merge-pdf:
	# 在problems.pdf前加入更多題本路徑
	pdfunite pA/statement/index.pdf problems.pdf
	# 將合併題本放到第一題的附檔，pA改成第一題的名稱
	mkdir -p pA/attachments
	cp problems.pdf pA/attachments
	# 99改成對應的比賽ID
	cmsImportTask -c 99 ./pA/ -u
