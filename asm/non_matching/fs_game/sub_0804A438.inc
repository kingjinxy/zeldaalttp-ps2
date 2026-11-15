	THUMB_FUNC_START sub_0804A438
sub_0804A438: @ 0x0804A438
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, _0804A494  @ =gUnknown_03000E20
	ldrh r2, [r1]
	mov r3, #1
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #28]
	mov r3, #252
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	bl sub_0803CC20
	mov r1, #192
	lsl r1, r1, #5
	ldr r0, [r7]
	bl 0x08003594
	cmp r0, #0
	bne _0804A48A
	ldr r0, [r7]
	bl DeleteThisEntity
_0804A48A:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0804A494:
	.4byte gUnknown_03000E20
	THUMB_FUNC_END sub_0804A438

