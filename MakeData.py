'''
Author       : FeiYehua
Date         : 2024-10-14 10:37:36
LastEditTime : 2024-10-14 11:11:16
LastEditors  : FeiYehua
Description  : 
FilePath     : MakeData.py
     © 2024 FeiYehua
'''
import subprocess
result = subprocess.run(['g++', '-fcolor-diagnostics',
                "-fansi-escape-codes",
                "--std=c++14",
                "-g",
                "DataMaker.cpp",
                "-o",
                "target/DataMaker"], capture_output=True, text=True)
result = subprocess.run(['./DataMaker'], cwd="target/", capture_output=True, text=True)
result = subprocess.run(['g++', '-fcolor-diagnostics',
                "-fansi-escape-codes",
                "--std=c++14",
                "-g",
                "D.cpp",
                "-o",
                "target/D"], capture_output=True, text=True)
result = subprocess.run(['g++', '-fcolor-diagnostics',
                "-fansi-escape-codes",
                "--std=c++14",
                "-g",
                "WhoToWin.cpp",
                "-o",
                "target/WhoToWin"], capture_output=True, text=True)
for i in range (1,101):
    result1=subprocess.run(['target/D', f"Data/{i}.in"], capture_output=True, text=True)
    output1 = result1.stdout.rstrip()
    result2=subprocess.run(['target/WhoToWin', f"Data/{i}.in"], capture_output=True, text=True)
    output2 = result2.stdout.rstrip()
    if(output1!=output2):
        print(f"第{i}次输出不同！")
