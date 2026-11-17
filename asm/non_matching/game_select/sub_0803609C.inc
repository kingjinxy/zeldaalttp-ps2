	THUMB_FUNC_START sub_0803609C
sub_0803609C: @ 0x0803609C
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	cmp r0, #0
	bne _080360C4
	mov r2, #1
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #5
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4, #28]
	add r0, r4, #0
	mov r1, #1
	bl sub_08003870
	add r0, r4, #0
	bl sub_08003B94
_080360C4:
	ldr r1, [r4, #84]
	add r0, r1, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _080360FC
	add r0, r1, #0
	add r1, r4, #0
	mov r2, #0
	mov r3, #1
	bl sub_0803D4A4
	ldr r0, _080360F8  @ =gUnknown_03000488
	ldr r1, [r4, #84]
	add r1, r1, #124
	ldrh r1, [r1]
	mov r2, #0
	strh r1, [r0]
	mov r1, #128
	lsl r1, r1, #1
	strh r1, [r0, #2]
	strh r2, [r0, #4]
	add r1, r4, #0
	bl sub_0803D770
	b _08036108
_080360F8:
	.4byte gUnknown_03000488
_080360FC:
	add r0, r4, #0
	bl sub_08003BCC
	add r0, r4, #0
	bl DeleteThisEntity
_08036108:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803609C

	.byte 0x00
	.byte 0x00
