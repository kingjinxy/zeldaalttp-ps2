	THUMB_FUNC_START sub_08018D64
sub_08018D64: @ 0x08018D64
	push {r4,lr}
	add r3, r0, #0
	ldr r0, _08018E14  @ =gUnknown_03006A30
	mov r12, r0
	ldr r2, [r0, #40]
	mov r1, #50
	ldrsh r0, [r2, r1]
	mov r4, #50
	ldrsh r1, [r3, r4]
	sub r0, r0, r1
	add r0, r0, #24
	cmp r0, #48
	bhi _08018D8E
	mov r1, #54
	ldrsh r0, [r2, r1]
	mov r2, #54
	ldrsh r1, [r3, r2]
	sub r0, r0, r1
	add r0, r0, #18
	cmp r0, #36
	bls _08018E10
_08018D8E:
	mov r0, r12
	add r0, r0, #184
	ldr r2, [r0]
	cmp r2, #0
	beq _08018E18
	mov r4, #50
	ldrsh r0, [r2, r4]
	mov r4, #50
	ldrsh r1, [r3, r4]
	sub r0, r0, r1
	add r0, r0, #24
	cmp r0, #48
	bhi _08018DB8
	mov r1, #54
	ldrsh r0, [r2, r1]
	mov r2, #54
	ldrsh r1, [r3, r2]
	sub r0, r0, r1
	add r0, r0, #18
	cmp r0, #36
	bls _08018E10
_08018DB8:
	mov r0, #164
	lsl r0, r0, #1
	add r0, r0, r12
	ldr r2, [r0]
	cmp r2, #0
	beq _08018E18
	mov r4, #50
	ldrsh r0, [r2, r4]
	mov r4, #50
	ldrsh r1, [r3, r4]
	sub r0, r0, r1
	add r0, r0, #24
	cmp r0, #48
	bhi _08018DE4
	mov r1, #54
	ldrsh r0, [r2, r1]
	mov r2, #54
	ldrsh r1, [r3, r2]
	sub r0, r0, r1
	add r0, r0, #18
	cmp r0, #36
	bls _08018E10
_08018DE4:
	mov r0, #236
	lsl r0, r0, #1
	add r0, r0, r12
	ldr r2, [r0]
	cmp r2, #0
	beq _08018E18
	mov r4, #50
	ldrsh r0, [r2, r4]
	mov r4, #50
	ldrsh r1, [r3, r4]
	sub r0, r0, r1
	add r0, r0, #24
	cmp r0, #48
	bhi _08018E18
	mov r1, #54
	ldrsh r0, [r2, r1]
	mov r2, #54
	ldrsh r1, [r3, r2]
	sub r0, r0, r1
	add r0, r0, #18
	cmp r0, #36
	bhi _08018E18
_08018E10:
	mov r0, #0
	b _08018E1A
_08018E14:
	.4byte gUnknown_03006A30
_08018E18:
	mov r0, #1
_08018E1A:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08018D64

