	THUMB_FUNC_START sub_080E8914
sub_080E8914: @ 0x080E8914
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080E89A4  @ =gRam
	ldr r3, _080E89A8  @ =0x00000996
	add r1, r2, r3
	ldrb r1, [r1]
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080E89DE
	mov r1, #29
	ldr r4, _080E89AC  @ =0x000011D2
	add r5, r2, r4
	mov r4, #8
	ldr r0, _080E89B0  @ =0x000015F8
	add r6, r2, r0
	ldr r3, _080E89B4  @ =0x000012FE
	add r7, r2, r3
_080E893C:
	lsl r0, r1, #24
	asr r3, r0, #24
	add r1, r3, r5
	ldrb r0, [r1]
	cmp r0, #0
	bne _080E89D4
	strb r4, [r1]
	strb r4, [r6]
	add r1, r3, r7
	mov r0, #11
	strb r0, [r1]
	ldr r4, _080E89B8  @ =0x0000122C
	add r1, r2, r4
	add r1, r3, r1
	ldr r4, _080E89BC  @ =0x00001622
	add r0, r2, r4
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E89C0  @ =0x00001268
	add r1, r2, r0
	add r1, r3, r1
	add r4, r4, #1
	add r0, r2, r4
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080E89C4  @ =0x00001624
	add r0, r2, r1
	ldrb r1, [r0]
	add r4, r4, #2
	add r0, r2, r4
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #16
	ldr r4, _080E89C8  @ =0x0000120E
	add r0, r2, r4
	add r0, r3, r0
	strb r1, [r0]
	add r4, r4, #60
	add r0, r2, r4
	add r0, r3, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080E89CC  @ =0x0000131C
	add r1, r2, r0
	add r1, r3, r1
	ldr r3, _080E89D0  @ =0x000015DC
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r1]
	b _080E89DE
	.byte 0x00
	.byte 0x00
_080E89A4:
	.4byte gRam
_080E89A8:
	.4byte 0x00000996
_080E89AC:
	.4byte 0x000011D2
_080E89B0:
	.4byte 0x000015F8
_080E89B4:
	.4byte 0x000012FE
_080E89B8:
	.4byte 0x0000122C
_080E89BC:
	.4byte 0x00001622
_080E89C0:
	.4byte 0x00001268
_080E89C4:
	.4byte 0x00001624
_080E89C8:
	.4byte 0x0000120E
_080E89CC:
	.4byte 0x0000131C
_080E89D0:
	.4byte 0x000015DC
_080E89D4:
	sub r0, r3, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080E893C
_080E89DE:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E8914

