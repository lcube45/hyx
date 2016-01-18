core = 7.x
api = 2

projects[imce][subdir] = "contrib"
projects[imce][version] = "1.9"

projects[imce_crop][subdir] = "contrib"
projects[imce_crop][version] = "1.1"

projects[imce_mkdir][subdir] = "contrib"
projects[imce_mkdir][version] = "1.0"

projects[imce_rename][subdir] = "contrib"
projects[imce_rename][version] = "1.3"

projects[imce_wysiwyg][subdir] = "contrib"
projects[imce_wysiwyg][version] = "1.0"

projects[pdf][subdir] = "contrib"
projects[pdf][version] = "1.6"

projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][version] = "2.2"
projects[wysiwyg][patch][] = Users/lcube/www/hyx.dev/sites/all/modules/contrib/wysiwyg.patch

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"
libraries[ckeditor][destination] = "libraries"
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.5.6/ckeditor_4.5.6_full.zip"

libraries[pdfjs][directory_name] = "pdf.js"
libraries[pdfjs][type] = "library"
libraries[pdfjs][destination] = "libraries"
libraries[pdfjs][download][type] = "get"
libraries[pdfjs][download][url] = "https://github.com/mozilla/pdf.js/releases/download/v1.1.469/pdfjs-1.1.469-dist.zip"