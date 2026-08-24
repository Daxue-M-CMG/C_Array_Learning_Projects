# C_Array_Learning_Projects
C语言基础：数组
# 📚 C语言基础实践：数组与算法

> 一个从零开始、用工程标准要求自己的 C 语言学习仓库。
> 不仅包含数组基础练习，还融入了规范的 Git 提交、版本管理以及简单控制台应用。

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![GitHub tag](https://img.shields.io/github/v/tag/Daxue-M-CMG/C_Array_Learning_Projects)]()

---

## 📦 项目简介

本仓库是我学习 C 语言数组阶段的所有实践代码集合。  
与一般零散的学习笔记不同，这里的每个程序都**遵循编码规范**、**有明确的版本控制**，并且**经过调试器单步验证**。

## 🧩 包含内容

### 1. 基础算法练习
- **斐波那契数列** (`E_G_P143T6_2.c`)
- **起泡法排序** (`E_G_P143T6_3.c`)
- **选择法排序** (`Problem_P165T2.c`)

### 2. 综合实践：班级成绩管理系统 🏆 `v1.0.0`
一个简单的控制台应用。

- **功能清单**：
  - 动态录入班级人数（1~100人）及每位学生成绩。
  - 基于**选择法排序**实现成绩降序排名。
  - 自动计算并输出：最高分、最低分、班级平均分。
  - 成绩榜单格式化输出，排版整齐。

## 🛠️ 开发环境与工具

- **编译器**：MinGW-W64 (GCC v16.2.0)
- **IDE**：Visual Studio Code
- **辅助工具**：Code Runner (快速调试) + Error Lens（错误透镜） + Clang-Format（格式自动化）
- **版本控制**：Git + GitHub（遵循 “约定式提交” 规范。）

## 🚀 如何运行

1.  克隆本仓库至本地：
    git bash:
    git clone https://github.com/Daxue-M-CMG/C_Array_Learning_Projects.git

2.    进入对应目录，使用 GCC 编译单个 .c 文件：
    bash
    gcc 文件名.c -o 输出名

3.  运行生成的 .exe 文件（Windows）：
    bash
    ./输出名.exe

（注：本仓库不含 CMake 构建文件。）