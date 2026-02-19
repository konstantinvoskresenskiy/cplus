CPP_FILES="main.cpp menu_elements.cpp function_element.cpp"
APP=example

if [ -f $APP ]; then rm $APP
fi

g++ $CPP_FILES -o $APP

./$APP
