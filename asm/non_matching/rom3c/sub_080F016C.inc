	THUMB_FUNC_START sub_080F016C
sub_080F016C: @ 0x080F016C
	push {r4-r7,lr}
	add r3, r1, #0
	lsl r0, r0, #24
	lsr r7, r0, #24
	lsl r3, r3, #24
	lsr r3, r3, #24
	lsl r2, r2, #24
	lsr r2, r2, #24
	add r0, r2, #0
	add r1, r7, #0
	add r2, r3, #0
	bl sub_080C9AAC
	lsl r2, r0, #24
	asr r6, r2, #24
	cmp r6, #0
	blt _080F01FC
	ldr r4, _080F0204  @ =gRam
	ldr r0, _080F0208  @ =0x00001082
	add r1, r4, r0
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsr r0, r2, #24
	bl sub_080CAE50
	mov r1, #150
	lsl r1, r1, #4
	add r5, r4, r1
	ldrh r1, [r5]
	add r1, r1, #8
	ldr r2, _080F020C  @ =0x00000EE2
	add r0, r4, r2
	add r0, r6, r0
	strb r1, [r0]
	add r2, r2, #32
	add r0, r4, r2
	add r0, r6, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080F0210  @ =0x00001152
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #32
	strb r1, [r0]
	ldr r2, _080F0214  @ =0x000010E2
	add r0, r4, r2
	add r0, r6, r0
	mov r1, #16
	strb r1, [r0]
	add r0, r7, #0
	bl sub_080C35FC
	ldr r0, _080F0218  @ =0x00000F12
	add r1, r4, r0
	add r1, r6, r1
	ldrb r0, [r5]
	neg r0, r0
	strb r0, [r1]
	ldr r2, _080F021C  @ =0x00000F22
	add r1, r4, r2
	add r1, r6, r1
	ldr r0, _080F0220  @ =0x00000961
	add r4, r4, r0
	ldrb r0, [r4]
	neg r0, r0
	strb r0, [r1]
	add r0, r7, #0
	mov r1, #94
	bl sub_080CF140
_080F01FC:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F0204:
	.4byte gRam
_080F0208:
	.4byte 0x00001082
_080F020C:
	.4byte 0x00000EE2
_080F0210:
	.4byte 0x00001152
_080F0214:
	.4byte 0x000010E2
_080F0218:
	.4byte 0x00000F12
_080F021C:
	.4byte 0x00000F22
_080F0220:
	.4byte 0x00000961
	THUMB_FUNC_END sub_080F016C

