	THUMB_FUNC_START sub_080C66A4
sub_080C66A4: @ 0x080C66A4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r1, #0
	bl sub_080C382C
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r0, _080C66D4  @ =gRam
	ldr r1, _080C66D8  @ =0x00000FF2
	add r0, r0, r1
	add r0, r6, r0
	strb r7, [r0]
	cmp r7, #229
	bne _080C66DC
	add r0, r6, #0
	bl sub_080CFFE0
	b _080C66E6
	.byte 0x00
	.byte 0x00
_080C66D4:
	.4byte gRam
_080C66D8:
	.4byte 0x00000FF2
_080C66DC:
	cmp r7, #228
	bne _080C66E6
	add r0, r6, #0
	bl sub_080D0020
_080C66E6:
	ldr r4, _080C6778  @ =gRam
	ldr r2, _080C677C  @ =0x00000FA2
	add r0, r4, r2
	add r0, r6, r0
	mov r1, #9
	strb r1, [r0]
	ldr r0, _080C6780  @ =0x00001142
	add r5, r4, r0
	add r5, r6, r5
	ldrb r1, [r5]
	mov r8, r1
	add r0, r6, #0
	bl sub_080CEB84
	ldr r2, _080C6784  @ =0x00001172
	add r1, r4, r2
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080C6788  @ =gUnknown_08172160
	ldr r2, _080C678C  @ =0x00000FF2
	add r0, r4, r2
	add r0, r6, r0
	ldrb r0, [r0]
	sub r0, r0, #216
	add r0, r0, r1
	ldrb r7, [r0]
	ldr r0, _080C6790  @ =0x00001152
	add r1, r4, r0
	add r1, r6, r1
	mov r0, #240
	and r0, r0, r7
	strb r0, [r1]
	mov r0, #15
	and r7, r7, r0
	ldr r1, _080C6794  @ =0x00000EE2
	add r3, r4, r1
	add r3, r6, r3
	ldrb r1, [r3]
	ldr r0, _080C6798  @ =0x00000F02
	add r2, r4, r0
	add r2, r6, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	orr r1, r1, r0
	add r1, r1, r7
	lsl r1, r1, #16
	lsr r1, r1, #16
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r2]
	mov r1, r8
	strb r1, [r5]
	ldr r2, _080C679C  @ =0x000010E2
	add r0, r4, r2
	add r0, r6, r0
	mov r1, #21
	strb r1, [r0]
	ldr r0, _080C67A0  @ =0x00000D74
	add r4, r4, r0
	add r4, r6, r4
	mov r0, #255
	strb r0, [r4]
	add r0, r6, #0
	bl sub_080C67A4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C6778:
	.4byte gRam
_080C677C:
	.4byte 0x00000FA2
_080C6780:
	.4byte 0x00001142
_080C6784:
	.4byte 0x00001172
_080C6788:
	.4byte gUnknown_08172160
_080C678C:
	.4byte 0x00000FF2
_080C6790:
	.4byte 0x00001152
_080C6794:
	.4byte 0x00000EE2
_080C6798:
	.4byte 0x00000F02
_080C679C:
	.4byte 0x000010E2
_080C67A0:
	.4byte 0x00000D74
	THUMB_FUNC_END sub_080C66A4

