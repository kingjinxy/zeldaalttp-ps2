	THUMB_FUNC_START sub_080BC420
sub_080BC420: @ 0x080BC420
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r4, _080BC4BC  @ =gRam
	ldr r1, _080BC4C0  @ =0x00001663
	add r0, r4, r1
	ldrb r0, [r0]
	mov r9, r0
	bl sub_080BDB54
	mov r5, #4
	ldr r1, _080BC4C4  @ =0x00000FC2
	add r1, r1, r4
	mov r8, r1
	ldr r0, _080BC4C8  @ =0x00000FB2
	add r7, r4, r0
_080BC448:
	ldr r1, _080BC4CC  @ =0x00000FF2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #17
	strb r1, [r0]
	lsl r0, r5, #24
	lsr r0, r0, #24
	bl sub_080CEB84
	ldr r0, _080BC4D0  @ =0x00000E75
	add r2, r4, r0
	add r2, r5, r2
	ldrb r0, [r2]
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2]
	sub r2, r5, #1
	cmp r2, #1
	bls _080BC472
	cmp r5, #4
	bne _080BC484
_080BC472:
	ldr r1, _080BC4D4  @ =0x00000F52
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #1
	strb r1, [r0]
	mov r0, r8
	add r1, r5, r0
	mov r0, #64
	strb r0, [r1]
_080BC484:
	add r0, r5, r7
	ldr r1, _080BC4D8  @ =gUnknown_081717B2
	add r1, r5, r1
	ldrb r1, [r1]
	strb r1, [r0]
	add r5, r2, #0
	cmp r5, #0
	bge _080BC448
	add r0, r6, #0
	bl sub_080B9454
	ldr r4, _080BC4BC  @ =gRam
	ldr r1, _080BC4C0  @ =0x00001663
	add r4, r4, r1
	mov r0, #13
	strb r0, [r4]
	bl sub_0812F9A8
	mov r0, r9
	strb r0, [r4]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BC4BC:
	.4byte gRam
_080BC4C0:
	.4byte 0x00001663
_080BC4C4:
	.4byte 0x00000FC2
_080BC4C8:
	.4byte 0x00000FB2
_080BC4CC:
	.4byte 0x00000FF2
_080BC4D0:
	.4byte 0x00000E75
_080BC4D4:
	.4byte 0x00000F52
_080BC4D8:
	.4byte gUnknown_081717B2
	THUMB_FUNC_END sub_080BC420

