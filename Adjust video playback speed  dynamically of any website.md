# Dynamic dragable colorful  slider with close button for adjusting video playback speed  dynamically of any website.

## shortcut: ctrl + left/right arrow or click on the slider then just left/right arrow.

## How to add a bookmark for quick access:
## Procedure:
1. Make any page as bookmark.
2. Edit the bookmark, give any name and paste the  js code below  in the url section and save it.
3. click the bookmarklet to start or show the slide bar.

### JS CODE:

javascript:(function(){const e=document.getElementById("speedSliderDiv");if(e){e.remove(),window.removeEventListener("keydown",window.videoSpeedHotkeyHandler);return}const t=document.createElement("div");t.id="speedSliderDiv",Object.assign(t.style,{position:"fixed",top:"10px",left:"50%",transform:"translateX(-50%)",zIndex:"99999",padding:"12px 20px",background:"linear-gradient(135deg,#ff6ec4 0%,#7873f5 100%)",borderRadius:"12px",boxShadow:"0 4px 15px rgba(0,0,0,0.3)",color:"#fff",fontFamily:"Arial,sans-serif",display:"flex",alignItems:"center",gap:"10px",cursor:"move"});let l=!1,n=0,d=0;t.addEventListener("mousedown",(e=>{l=!0,n=e.clientX-t.getBoundingClientRect().left,d=e.clientY-t.getBoundingClientRect().top,t.style.transition="none"})),window.addEventListener("mousemove",(e=>{l&&(t.style.left=`${e.clientX-n}px`,t.style.top=`${e.clientY-d}px`,t.style.transform="none")})),window.addEventListener("mouseup",(()=>{l=!1}));const a=document.createElement("span");a.textContent="×",Object.assign(a.style,{cursor:"pointer",fontSize:"20px",fontWeight:"bold",userSelect:"none"}),a.onclick=()=>{t.remove(),window.removeEventListener("keydown",window.videoSpeedHotkeyHandler)};const i=document.createElement("label");i.textContent="Speed: ",i.style.fontWeight="bold";const r=document.createElement("input");r.type="range",r.min="0.05",r.max="10",r.step="0.05",r.value="1",Object.assign(r.style,{width:"200px",height:"6px",borderRadius:"5px",background:"linear-gradient(to right, red, orange, yellow, green, cyan, blue, violet)",outline:"none",cursor:"pointer"});const o=document.createElement("span");o.textContent="1.00x",o.style.fontWeight="bold";function c(e){document.querySelectorAll("video").forEach((t=>t.playbackRate=e)),r.value=e,o.textContent=e.toFixed(2)+"x"}r.oninput=()=>c(parseFloat(r.value)),t.appendChild(i),t.appendChild(r),t.appendChild(o),t.appendChild(a),document.body.appendChild(t),window.videoSpeedHotkeyHandler=function(e){if(e.ctrlKey&&("ArrowRight"===e.key||"ArrowLeft"===e.key)){e.preventDefault();let t=parseFloat(r.value);t="ArrowRight"===e.key?Math.min(t+.25,10):Math.max(t-.25,.05),c(t)}},window.addEventListener("keydown",window.videoSpeedHotkeyHandler)})();


