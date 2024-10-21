# 🌬️ Sensor de Flujo Másico de Aire F1031V con Gráfica Embebida usando WebSockets

Este proyecto implementa un sistema de monitoreo en tiempo real para el sensor **F1031V** de flujo másico de aire, usando WebSockets para transmitir los datos a una interfaz web con gráficos interactivos. El sistema permite visualizar y analizar el flujo de aire de manera dinámica, ideal para aplicaciones industriales o experimentales.

## 📖 Descripción General

El **F1031V** es un sensor de flujo másico de aire que ofrece mediciones precisas de flujo. En este proyecto, los datos del sensor son leídos en tiempo real mediante un **microcontrolador ESP32**, que se conecta a un servidor WebSocket para transmitir los datos a un dashboard gráfico en una página web. Los gráficos se actualizan en tiempo real, brindando una experiencia fluida para el monitoreo continuo.

Este sistema es ideal para monitorizar el flujo de aire en laboratorios, entornos industriales o proyectos educativos, y proporciona una solución eficiente para el análisis en tiempo real.

## ✨ Características

- 📊 **Visualización en tiempo real**: Los datos del sensor son mostrados en un gráfico interactivo actualizado constantemente mediante WebSockets.
- 🌐 **Interfaz Web**: Se utiliza una página web simple pero funcional que permite visualizar el flujo de aire de manera clara.
- ⚙️ **Microcontrolador ESP32**: Lectura y procesamiento de los datos del sensor, con envío en tiempo real al servidor WebSocket.
- 🔗 **Conectividad WebSocket**: Transmisión continua y eficiente de los datos, permitiendo la actualización instantánea en el dashboard.
- 🛠️ **Fácil integración**: Puede adaptarse a otros sensores o agregar más características como almacenamiento de datos o alertas.

## 🚀 Instrucciones de Uso

### Requisitos

- 🛠️ **Hardware**: 
  - Sensor de flujo másico de aire **F1031V**
  - **ESP32** o similar
  - Cables y componentes básicos de electrónica
- 💻 **Software**:
  - Arduino IDE (o plataforma de desarrollo para ESP32)
  - Bibliotecas necesarias (como `WebSocketsClient` y `ESPAsyncWebServer`)
  - Navegador web para visualizar el dashboard

### Pasos

1. **Conectar el hardware**: 
   - Conecta el sensor **F1031V** al microcontrolador ESP32 según el esquema de pines proporcionado en la documentación del sensor.
   
2. **Configurar el código**:
   - Carga el código del ESP32 desde el Arduino IDE o tu entorno de desarrollo preferido. Asegúrate de configurar correctamente el Wi-Fi y las bibliotecas necesarias.
   
3. **Iniciar el servidor WebSocket**:
   - El ESP32 actúa como servidor WebSocket. Al encender el dispositivo, los datos se enviarán de manera continua a través del canal WebSocket.

4. **Acceder al dashboard**:
   - Abre el navegador web y conecta al servidor proporcionado por el ESP32. En el dashboard, los datos del sensor se mostrarán en un gráfico que se actualiza en tiempo real.

5. **Monitoreo**:
   - Observa cómo los datos del flujo de aire cambian dinámicamente en función del entorno, reflejados en los gráficos interactivos.

---

¡Con esto, deberías tener un proyecto funcional para visualizar y analizar el flujo de aire con el sensor F1031V y el ESP32!
