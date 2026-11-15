	THUMB_FUNC_START sub_08019170
sub_08019170: @ 0x08019170
	push {r4,r5,lr}
	add r4, r0, #0
	ldr r1, _080191D0  @ =gUnknown_08139988
	ldrb r0, [r4, #20]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	add r0, r4, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _080191C8
	add r2, r4, #0
	add r2, r2, #117
	ldrb r1, [r2]
	mov r0, #68
	and r0, r0, r1
	add r5, r2, #0
	cmp r0, #68
	beq _080191C4
	ldr r2, [r4, #52]
	ldr r1, _080191D4  @ =0x0000FFFF
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, r1
	beq _080191AE
	add r0, r2, #1
	str r0, [r4, #52]
_080191AE:
	ldr r1, [r4, #120]
	add r0, r4, #0
	bl sub_0803D3D0
	ldr r1, [r4, #124]
	add r0, r4, #0
	bl sub_0803D3D0
	ldr r0, [r4, #52]
	sub r0, r0, #1
	str r0, [r4, #52]
_080191C4:
	mov r0, #0
	strb r0, [r5]
_080191C8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080191D0:
	.4byte gUnknown_08139988
_080191D4:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_08019170

