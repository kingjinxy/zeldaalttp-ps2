	THUMB_FUNC_START sub_0810915C
sub_0810915C: @ 0x0810915C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r2, r0, #24
	mov r1, #7
	ldr r5, _081091F4  @ =gRam
	ldr r0, _081091F8  @ =0x00000D1B
	add r0, r0, r5
	mov r12, r0
	ldr r4, _081091FC  @ =gUnknown_0817C2A6
	mov r9, r4
	ldr r0, _08109200  @ =gUnknown_0817C2AA
	mov r10, r0
	ldr r4, _08109204  @ =0x00001092
	add r7, r5, r4
	ldr r0, _08109208  @ =0x00000D23
	add r0, r0, r5
	mov r8, r0
_08109186:
	lsl r0, r1, #24
	asr r3, r0, #24
	mov r1, r12
	add r4, r3, r1
	ldrb r6, [r4]
	cmp r6, #0
	bne _0810922C
	add r1, r2, r7
	ldrb r0, [r1]
	cmp r0, #3
	bhi _08109236
	add r2, r0, #0
	add r0, r2, #1
	strb r0, [r1]
	mov r1, r9
	add r0, r2, r1
	ldrb r0, [r0]
	strb r0, [r4]
	mov r4, r8
	add r1, r3, r4
	mov r4, r10
	add r0, r2, r4
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0810920C  @ =0x00000D2B
	add r1, r5, r0
	add r1, r3, r1
	ldr r4, _08109210  @ =0x000016C5
	add r0, r5, r4
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08109214  @ =0x00000D33
	add r1, r5, r0
	add r1, r3, r1
	ldr r4, _08109218  @ =gUnknown_0817C2AE
	add r2, r2, r4
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r0, _0810921C  @ =0x00000D3B
	add r1, r5, r0
	add r1, r3, r1
	ldr r2, _08109220  @ =0x000016C1
	add r0, r5, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r4, _08109224  @ =0x00000D43
	add r0, r5, r4
	add r0, r3, r0
	strb r6, [r0]
	ldr r1, _08109228  @ =0x00000D4B
	add r0, r5, r1
	add r0, r3, r0
	strb r6, [r0]
	b _08109236
	.byte 0x00
	.byte 0x00
_081091F4:
	.4byte gRam
_081091F8:
	.4byte 0x00000D1B
_081091FC:
	.4byte gUnknown_0817C2A6
_08109200:
	.4byte gUnknown_0817C2AA
_08109204:
	.4byte 0x00001092
_08109208:
	.4byte 0x00000D23
_0810920C:
	.4byte 0x00000D2B
_08109210:
	.4byte 0x000016C5
_08109214:
	.4byte 0x00000D33
_08109218:
	.4byte gUnknown_0817C2AE
_0810921C:
	.4byte 0x00000D3B
_08109220:
	.4byte 0x000016C1
_08109224:
	.4byte 0x00000D43
_08109228:
	.4byte 0x00000D4B
_0810922C:
	sub r0, r3, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _08109186
_08109236:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810915C

