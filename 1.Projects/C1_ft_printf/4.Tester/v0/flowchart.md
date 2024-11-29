``` mermaid
graph TD
    A["Start"] --> B{"format[i] == '%'"}
    B -- Yes --> C["i++"]
    C --> D{"format[i]"}
    D -- 'd' --> E["va_arg(args, int)"]
    E --> F["snprintf(buffer, 20, '%d', num)"]
    F --> G["write(1, buffer, len)"]
    G --> H["count += len"]
    H --> I["i++"]
    I --> A
    D -- 's' --> J["va_arg(args, char *)"]
    J --> K["write(1, str, strlen(str))"]
    K --> L["count += strlen(str)"]
    L --> I
    D -- default --> M["write(1, &format[i], 1)"]
    M --> N["count++"]
    N --> I
    B -- No --> O["write(1, &format[i], 1)"]
    O --> P["count++"]
    P --> I
    D -- "End of format" --> Q["va_end(args)"]
    Q --> R["return count"]
    R --> S["End"]
```
