	THUMB_FUNC_START sub_08056594
sub_08056594: @ 0x08056594
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r1, [r7]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	add r1, r2, #1
	mov r2, #26
	mul r1, r2, r1
	add r2, r1, #0
	add r2, r2, #72
	cmp r0, r2
	bge _080565DC
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	add r1, r2, #1
	mov r2, #26
	mul r1, r2, r1
	add r2, r1, #0
	add r1, r2, #0
	add r1, r1, #72
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
_080565DC:
	ldr r0, _080565F4  @ =gUnknown_03000520
	ldrb r1, [r0]
	cmp r1, #0
	beq _080565EA
	ldr r0, [r7]
	bl DeleteThisEntity
_080565EA:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080565F4:
	.4byte gUnknown_03000520
	THUMB_FUNC_END sub_08056594

