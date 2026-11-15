	THUMB_FUNC_START sub_080E64CC
sub_080E64CC: @ 0x080E64CC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r8, r6
	lsl r1, r1, #24
	lsr r3, r1, #24
	ldr r4, _080E6594  @ =gRam
	ldr r1, _080E6598  @ =0x00000EE2
	add r0, r4, r1
	add r0, r3, r0
	ldrb r0, [r0]
	ldr r5, _080E659C  @ =0x00000968
	add r2, r4, r5
	strb r0, [r2]
	ldr r7, _080E65A0  @ =0x00000F02
	add r0, r4, r7
	add r0, r3, r0
	ldrb r1, [r0]
	add r5, r5, #1
	add r0, r4, r5
	strb r1, [r0]
	sub r7, r7, #48
	add r0, r4, r7
	add r0, r3, r0
	ldrb r0, [r0]
	ldr r1, _080E65A4  @ =0x0000096C
	add r5, r4, r1
	strb r0, [r5]
	add r7, r7, #32
	add r0, r4, r7
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r7, _080E65A8  @ =0x0000096D
	add r0, r4, r7
	strb r1, [r0]
	ldr r1, _080E65AC  @ =0x00001622
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r7, _080E65B0  @ =0x00001623
	add r0, r4, r7
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	lsl r0, r0, #16
	mov r1, #128
	lsl r1, r1, #12
	add r0, r0, r1
	lsr r0, r0, #16
	cmp r0, #15
	bhi _080E658A
	ldr r2, _080E65B4  @ =0x00001624
	add r0, r4, r2
	ldrb r1, [r0]
	add r7, r7, #2
	add r0, r4, r7
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r5]
	sub r0, r0, r1
	lsl r0, r0, #16
	mov r1, #192
	lsl r1, r1, #12
	add r0, r0, r1
	lsr r0, r0, #16
	cmp r0, #23
	bhi _080E658A
	ldr r2, _080E65B8  @ =0x00000FA2
	add r0, r4, r2
	add r0, r3, r0
	mov r1, #0
	strb r1, [r0]
	ldr r1, _080E65BC  @ =gUnknown_08173034
	ldr r5, _080E65C0  @ =0x00000FF2
	add r0, r4, r5
	add r0, r3, r0
	ldrb r0, [r0]
	sub r0, r0, #216
	add r1, r0, r1
	ldrb r0, [r1]
	cmp r0, #0
	beq _080E6580
	add r1, r0, #0
	add r0, r6, #0
	bl sub_080CF140
_080E6580:
	ldr r7, _080E65C4  @ =0x00000FC2
	add r0, r4, r7
	add r0, r0, r8
	mov r1, #14
	strb r1, [r0]
_080E658A:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080E6594:
	.4byte gRam
_080E6598:
	.4byte 0x00000EE2
_080E659C:
	.4byte 0x00000968
_080E65A0:
	.4byte 0x00000F02
_080E65A4:
	.4byte 0x0000096C
_080E65A8:
	.4byte 0x0000096D
_080E65AC:
	.4byte 0x00001622
_080E65B0:
	.4byte 0x00001623
_080E65B4:
	.4byte 0x00001624
_080E65B8:
	.4byte 0x00000FA2
_080E65BC:
	.4byte gUnknown_08173034
_080E65C0:
	.4byte 0x00000FF2
_080E65C4:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E64CC

