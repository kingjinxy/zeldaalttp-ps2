	THUMB_FUNC_START sub_0811223C
sub_0811223C: @ 0x0811223C
	push {r4,r5,lr}
	add r5, r0, #0
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r4, _081122BC  @ =gRam
	ldr r1, _081122C0  @ =0x00000F62
	add r0, r4, r1
	add r0, r5, r0
	mov r3, #0
	strb r3, [r0]
	ldr r0, _081122C4  @ =0x00000FC2
	add r2, r4, r0
	add r2, r5, r2
	mov r0, #48
	strb r0, [r2]
	sub r1, r1, #16
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #10
	strb r1, [r0]
	ldr r1, _081122C8  @ =gUnknown_02010990
	mov r0, #39
	strb r0, [r1]
	ldr r1, _081122CC  @ =0x00000F92
	add r0, r4, r1
	add r0, r5, r0
	strb r3, [r0]
	mov r0, #32
	strb r0, [r2]
	ldr r2, _081122D0  @ =0x000016C4
	add r0, r4, r2
	ldrh r1, [r0]
	ldr r2, _081122D4  @ =0x00000968
	add r0, r4, r2
	strh r1, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	add r0, r5, #0
	mov r1, #32
	bl sub_080C2DCC
	ldr r1, _081122D8  @ =0x00000F12
	add r0, r4, r1
	add r0, r5, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _081122DC  @ =0x00000F22
	add r0, r4, r1
	add r5, r5, r0
	add r2, r2, #1
	add r4, r4, r2
	ldrb r0, [r4]
	strb r0, [r5]
	pop {r4,r5}
	pop {r0}
	bx r0
_081122BC:
	.4byte gRam
_081122C0:
	.4byte 0x00000F62
_081122C4:
	.4byte 0x00000FC2
_081122C8:
	.4byte gUnknown_02010990
_081122CC:
	.4byte 0x00000F92
_081122D0:
	.4byte 0x000016C4
_081122D4:
	.4byte 0x00000968
_081122D8:
	.4byte 0x00000F12
_081122DC:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_0811223C

