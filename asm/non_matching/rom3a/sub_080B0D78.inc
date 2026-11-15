	THUMB_FUNC_START sub_080B0D78
sub_080B0D78: @ 0x080B0D78
	push {r4-r6,lr}
	bl sub_08131BC4
	ldr r6, _080B0E88  @ =gRam
	ldr r0, _080B0E8C  @ =0x000009AC
	add r4, r6, r0
	ldrb r5, [r4]
	bl sub_0808A8C4
	strb r5, [r4]
	ldr r1, _080B0E90  @ =0x000009AD
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080B0E80
	ldr r2, _080B0E94  @ =0x0000051C
	add r1, r6, r2
	mov r0, #17
	strh r0, [r1]
	mov r5, #0
	ldr r4, _080B0E98  @ =gUnknown_02000C00
_080B0DA2:
	mov r0, #24
	bl sub_08133468
	add r1, r5, #0
	add r1, r1, #64
	asr r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r4
	strh r0, [r1]
	mov r0, #24
	bl sub_08133468
	add r1, r5, #0
	add r1, r1, #96
	asr r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r4
	strh r0, [r1]
	mov r0, #24
	bl sub_08133468
	add r1, r5, #0
	add r1, r1, #128
	asr r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r4
	strh r0, [r1]
	mov r0, #24
	bl sub_08133468
	add r1, r5, #0
	add r1, r1, #160
	asr r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r4
	strh r0, [r1]
	mov r0, #24
	bl sub_08133468
	add r1, r5, #0
	add r1, r1, #192
	asr r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r4
	strh r0, [r1]
	mov r0, #24
	bl sub_08133468
	add r1, r5, #0
	add r1, r1, #224
	asr r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r4
	strh r0, [r1]
	add r0, r5, #2
	lsl r0, r0, #16
	lsr r5, r0, #16
	cmp r5, #32
	bne _080B0DA2
	mov r0, #24
	bl sub_08133468
	ldr r1, _080B0E98  @ =gUnknown_02000C00
	strh r0, [r1]
	ldr r1, _080B0E88  @ =gRam
	ldr r2, _080B0E9C  @ =0x000009D6
	add r0, r1, r2
	mov r3, #0
	strb r5, [r0]
	add r2, r2, #1
	add r0, r1, r2
	mov r4, #64
	strb r4, [r0]
	ldr r0, _080B0EA0  @ =0x000009D8
	add r2, r1, r0
	mov r0, #128
	strb r0, [r2]
	ldr r0, _080B0EA4  @ =0x0000099B
	add r2, r1, r0
	mov r0, #1
	strb r0, [r2]
	ldr r0, _080B0E90  @ =0x000009AD
	add r2, r1, r0
	mov r0, #4
	strb r0, [r2]
	mov r0, #152
	lsl r0, r0, #4
	add r2, r1, r0
	mov r0, #15
	strb r0, [r2]
	ldr r0, _080B0EA8  @ =0x000009B4
	add r2, r1, r0
	mov r0, #20
	strb r0, [r2]
	ldr r2, _080B0EAC  @ =0x000009B5
	add r0, r1, r2
	strb r3, [r0]
	add r2, r2, #31
	add r0, r1, r2
	strb r5, [r0]
	add r2, r2, #46
	add r0, r1, r2
	strb r4, [r0]
	ldr r2, _080B0EB0  @ =0x00000CF8
	add r0, r1, r2
	strh r3, [r0]
	ldr r0, _080B0EB4  @ =0x00000CFA
	add r1, r1, r0
	strh r3, [r1]
	bl sub_080AF204
_080B0E80:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B0E88:
	.4byte gRam
_080B0E8C:
	.4byte 0x000009AC
_080B0E90:
	.4byte 0x000009AD
_080B0E94:
	.4byte 0x0000051C
_080B0E98:
	.4byte gUnknown_02000C00
_080B0E9C:
	.4byte 0x000009D6
_080B0EA0:
	.4byte 0x000009D8
_080B0EA4:
	.4byte 0x0000099B
_080B0EA8:
	.4byte 0x000009B4
_080B0EAC:
	.4byte 0x000009B5
_080B0EB0:
	.4byte 0x00000CF8
_080B0EB4:
	.4byte 0x00000CFA
	THUMB_FUNC_END sub_080B0D78

