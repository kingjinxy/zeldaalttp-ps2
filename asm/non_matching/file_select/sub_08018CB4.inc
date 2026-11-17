	THUMB_FUNC_START sub_08018CB4
sub_08018CB4: @ 0x08018CB4
	push {r4-r6,lr}
	add r4, r0, #0
	ldr r2, _08018D44  @ =gUnknown_03006A30
	ldr r0, _08018D48  @ =gUnknown_03000E20
	ldrh r0, [r0]
	mov r1, #3
	and r1, r1, r0
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r6, [r0]
	cmp r6, #0
	beq _08018D5C
	mov r0, #50
	ldrsh r1, [r6, r0]
	add r0, r4, #0
	add r0, r0, #112
	ldrh r0, [r0]
	sub r1, r1, r0
	add r0, r4, #0
	add r0, r0, #124
	ldrh r0, [r0]
	cmp r1, r0
	bhi _08018D5C
	mov r0, #54
	ldrsh r1, [r6, r0]
	add r0, r4, #0
	add r0, r0, #114
	ldrh r0, [r0]
	sub r1, r1, r0
	add r0, r4, #0
	add r0, r0, #126
	ldrh r0, [r0]
	cmp r1, r0
	bhi _08018D5C
	add r0, r4, #0
	bl sub_08018D64
	lsl r0, r0, #24
	cmp r0, #0
	beq _08018D5C
	add r0, r4, #0
	mov r1, #1
	mov r2, #0
	bl sub_0804411C
	add r5, r0, #0
	cmp r5, #0
	beq _08018D5C
	add r0, r4, #0
	add r0, r0, #43
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _08018D4C
	add r0, r4, #0
	add r1, r6, #0
	bl sub_0803CECC
	add r1, r5, #0
	add r1, r1, #43
	strb r0, [r1]
	bl sub_0800099C
	mov r1, #3
	and r0, r0, r1
	ldrb r1, [r4, #23]
	add r0, r0, r1
	b _08018D54
_08018D44:
	.4byte gUnknown_03006A30
_08018D48:
	.4byte gUnknown_03000E20
_08018D4C:
	add r0, r5, #0
	add r0, r0, #43
	strb r1, [r0]
	ldrb r0, [r4, #23]
_08018D54:
	strb r0, [r4, #24]
	ldrb r0, [r4, #20]
	sub r0, r0, #1
	strb r0, [r4, #20]
_08018D5C:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08018CB4

	.byte 0x00
	.byte 0x00
