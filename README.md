# 🌊 WaveDisruptor | موج‌شکن
*A frequency hopping transmission tool based on NRF24L01 | ابزار ارسال سیگنال با پرش فرکانسی بر پایه NRF24L01*

[English](#english) | [فارسی](#persian)

---

<div id="english">

## 📡 WaveDisruptor - NRF24L01 Frequency Hopper

### Overview
WaveDisruptor is an experimental Arduino-based project that demonstrates frequency hopping capabilities using the NRF24L01 module. This project is designed for **educational purposes only** to understand radio frequency communication principles and signal processing.

### 📸 Project Gallery
<div align="center">
  <table>
    <tr>
      <td align="center">
        <img src="project_overview.jpg" width="400" alt="Project Overview"/>
        <br/>
        <em>Complete Hardware Setup</em>
      </td>
      <td align="center">
        <img src="circuit_diagram.jpg" width="400" alt="Circuit Diagram"/>
        <br/>
        <em>Detailed Wiring Diagram</em>
      </td>
    </tr>
    <tr>
      <td align="center">
        <img src="hardware_setup.jpg" width="400" alt="Hardware Setup"/>
        <br/>
        <em>Component Assembly Guide</em>
      </td>
      <td align="center">
        <img src="operation_demo.jpg" width="400" alt="Operation Demo"/>
        <br/>
        <em>Device in Operation</em>
      </td>
    </tr>
  </table>
</div>

### ✨ Features
- Dual operation modes: Sequential and 2-step frequency hopping
- Channel range: 0-79 (Configurable)
- Toggle switch for mode selection
- Maximum transmission power configuration
- Automated channel switching
- Real-time serial monitoring

### 🔧 Hardware Requirements
| Component | Quantity |
|-----------|----------|
| Arduino Uno/Nano | 1 |
| NRF24L01 module | 1 |
| Toggle switch | 1 |
| Connecting wires | As needed |
| Power supply (7-12V) | 1 |

### 📌 Pin Configuration
| NRF24L01 | Arduino |
|----------|---------|
| CE       | 9       |
| CSN      | 10      |
| SCK      | 13      |
| MOSI     | 11      |
| MISO     | 12      |

### 🚀 Installation
1. Clone this repository
2. Install required libraries:
   - RF24
   - SPI
   - ezButton
3. Upload the code to your Arduino
4. Connect the hardware according to the diagram

### 📖 Usage
1. Power up the device
2. Select mode using toggle switch:
   - HIGH: 2-step frequency hopping
   - LOW: Sequential scanning
3. Monitor operation via Serial (115200 baud)

### ⚠️ Important Notes
- This project is for **educational purposes only**
- Ensure compliance with local regulations
- Use responsibly and legally
- Not for malicious purposes

### 🤝 Contributing
Contributions are welcome! Please feel free to submit a Pull Request.

### 📄 License
This project is licensed under the MIT License - see the LICENSE file for details.

</div>

---

<div id="persian" dir="rtl">

## 📡 موج‌شکن - پروژه پرش فرکانسی NRF24L01

### نمای کلی
موج‌شکن یک پروژه آزمایشی بر پایه آردوینو است که قابلیت‌های پرش فرکانسی را با استفاده از ماژول NRF24L01 نمایش می‌دهد. این پروژه **صرفاً برای اهداف آموزشی** طراحی شده است تا اصول ارتباطات رادیویی و پردازش سیگنال را بهتر درک کنیم.

### 📸 گالری تصاویر
<div align="center" dir="ltr">
  <table>
    <tr>
      <td align="center">
        <img src="project_overview.jpg" width="400" alt="نمای کلی پروژه"/>
        <br/>
        <em>راه‌اندازی کامل سخت‌افزار</em>
      </td>
      <td align="center">
        <img src="circuit_diagram.jpg" width="400" alt="نمودار مداری"/>
        <br/>
        <em>نمودار دقیق سیم‌کشی</em>
      </td>
    </tr>
    <tr>
      <td align="center">
        <img src="hardware_setup.jpg" width="400" alt="راه‌اندازی سخت‌افزار"/>
        <br/>
        <em>راهنمای مونتاژ قطعات</em>
      </td>
      <td align="center">
        <img src="operation_demo.jpg" width="400" alt="نمایش عملکرد"/>
        <br/>
        <em>دستگاه در حال کار</em>
      </td>
    </tr>
  </table>
</div>

### ✨ ویژگی‌ها
- دو حالت عملکرد: پیمایش ترتیبی و پرش فرکانسی دو مرحله‌ای
- محدوده کانال: 0 تا 79 (قابل تنظیم)
- کلید تغییر حالت
- تنظیم حداکثر توان ارسال
- تعویض خودکار کانال
- نظارت لحظه‌ای از طریق پورت سریال

### 🔧 نیازمندی‌های سخت‌افزاری
| قطعه | تعداد |
|------|-------|
| آردوینو اونو/نانو | 1 |
| ماژول NRF24L01 | 1 |
| کلید تغییر وضعیت | 1 |
| سیم‌های رابط | به تعداد مورد نیاز |
| منبع تغذیه (7-12 ولت) | 1 |

### 📌 پیکربندی پین‌ها
| NRF24L01 | آردوینو |
|----------|---------|
| CE       | 9       |
| CSN      | 10      |
| SCK      | 13      |
| MOSI     | 11      |
| MISO     | 12      |

### 🚀 نصب
1. کلون کردن مخزن
2. نصب کتابخانه‌های مورد نیاز:
   - RF24
   - SPI
   - ezButton
3. آپلود کد روی آردوینو
4. اتصال سخت‌افزار طبق نمودار

### 📖 نحوه استفاده
1. روشن کردن دستگاه
2. انتخاب حالت با کلید تغییر وضعیت:
   - HIGH: پرش فرکانسی دو مرحله‌ای
   - LOW: پیمایش ترتیبی
3. نظارت بر عملکرد از طریق پورت سریال (115200 baud)

### ⚠️ نکات مهم
- این پروژه **صرفاً برای اهداف آموزشی** است
- از انطباق با قوانین محلی اطمینان حاصل کنید
- استفاده مسئولانه و قانونی
- عدم استفاده با اهداف مخرب

### 🤝 مشارکت
از مشارکت شما استقبال می‌کنیم! لطفاً برای ارسال تغییرات، Pull Request ایجاد کنید.

### 📄 مجوز
این پروژه تحت مجوز MIT منتشر شده است - برای جزئیات بیشتر فایل LICENSE را مشاهده کنید.

</div>
