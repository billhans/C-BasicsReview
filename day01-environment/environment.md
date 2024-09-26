### 解决vscode安装monokai pro主题后无法取消代码斜体的问题
**在setting.json中添加如下配置**
```
"editor.tokenColorCustomizations": {
        "textMateRules": [
            {
                "scope": [
                    "storage.type",
                    "variable.parameter",
                    "parameters variable.function",
                    "support.type",
                    "storage.modifier",
                    "entity.other.inherited-class",
                    "entity.other.attribute-name"
                ],
                "settings": {
                    "fontStyle": ""
                }
            }
        ]
    }
```

### 一键编译插件

**Code Runner**