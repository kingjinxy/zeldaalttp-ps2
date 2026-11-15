	THUMB_FUNC_START sub_08102FAC
sub_08102FAC: @ 0x08102FAC
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r0, #0
	mov r8, r0
	ldr r2, _08102FE8  @ =gRam
	ldr r1, _08102FEC  @ =0x00000FC2
	add r3, r2, r1
	add r0, r6, r3
	ldrb r0, [r0]
	cmp r0, #1
	bne _08103048
	ldr r4, _08102FF0  @ =0x00000FA2
	add r1, r2, r4
	add r0, r6, r1
	mov r4, r8
	strb r4, [r0]
	add r0, r6, #1
	add r0, r0, r1
	strb r4, [r0]
	add r0, r6, #2
	add r0, r0, r1
	strb r4, [r0]
	mov r0, #2
	add r7, r2, #0
	mov r9, r3
	b _08103026
_08102FE8:
	.4byte gRam
_08102FEC:
	.4byte 0x00000FC2
_08102FF0:
	.4byte 0x00000FA2
_08102FF4:
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r0, _08103064  @ =0x00001152
	add r1, r7, r0
	add r1, r4, r1
	ldr r0, _08103068  @ =gUnknown_0817B924
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0810306C  @ =0x00001162
	add r1, r7, r0
	add r1, r4, r1
	ldr r0, _08103070  @ =gUnknown_0817B927
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, r9
	add r1, r4, r0
	mov r0, #32
	strb r0, [r1]
	sub r0, r5, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
_08103026:
	lsl r0, r0, #24
	asr r5, r0, #24
	cmp r5, #0
	blt _08103042
	mov r0, #162
	add r1, r6, #0
	mov r2, #4
	bl sub_080C9AAC
	add r4, r0, #0
	cmp r4, #0
	bge _08102FF4
	mov r1, #1
	mov r8, r1
_08103042:
	mov r4, r8
	cmp r4, #0
	beq _08103058
_08103048:
	ldr r0, _08103074  @ =gRam
	ldr r1, _08103078  @ =0x000010C2
	add r0, r0, r1
	add r0, r6, r0
	ldrb r2, [r0]
	mov r1, #224
	orr r1, r1, r2
	strb r1, [r0]
_08103058:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_08103064:
	.4byte 0x00001152
_08103068:
	.4byte gUnknown_0817B924
_0810306C:
	.4byte 0x00001162
_08103070:
	.4byte gUnknown_0817B927
_08103074:
	.4byte gRam
_08103078:
	.4byte 0x000010C2
	THUMB_FUNC_END sub_08102FAC

