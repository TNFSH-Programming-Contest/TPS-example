nothing:

import-pA:
	# 99改成對應的比賽ID
	cmsImportTask -c 99 ./pA/ -u $(if $(s), , --no-statement)
