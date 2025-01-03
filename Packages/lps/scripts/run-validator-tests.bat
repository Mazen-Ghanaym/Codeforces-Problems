echo Running 2 validator test(s)
echo Running 2 validator test(s) 1> validator-tests.log
echo Running test #1 1>> validator-tests.log
echo Validator comment: 1>> validator-tests.log
files\Validator.exe < files\tests\validator-tests\01 2>> validator-tests.log
if errorlevel 1 (
    echo Validator returned non-zero exit code for a valid test 1>> validator-tests.log
    echo Validator returned non-zero exit code for a valid test. See validator-tests.log for validator comment
    pause 0
)
echo Running test #2 1>> validator-tests.log
echo Validator comment: 1>> validator-tests.log
files\Validator.exe < files\tests\validator-tests\02 2>> validator-tests.log
if not errorlevel 1 (
    echo Validator returned zero exit code for a invalid test 1>> validator-tests.log
    echo Validator returned zero exit code for a invalid test. See validator-tests.log for validator comment
    pause 0
)
del /F /Q validator-tests.log
echo Validator test(s) finished
