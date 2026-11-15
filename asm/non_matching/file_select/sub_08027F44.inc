	THUMB_FUNC_START sub_08027F44
sub_08027F44: @ 0x08027F44
	push {lr}
	add r3, r0, #0
	ldr r0, [r3, #112]
	cmp r0, #0
	beq _08027F7A
	sub r0, r0, #1
	str r0, [r3, #112]
	cmp r0, #0
	bne _08027F5E
	add r0, r3, #0
	bl DeleteThisEntity
	b _08027F8A
_08027F5E:
	cmp r0, #15
	bhi _08027F7A
	ldr r0, _08027F90  @ =gUnknown_03000E20
	ldrh r0, [r0]
	mov r1, #2
	and r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #17
	ldrb r2, [r3, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r3, #28]
_08027F7A:
	ldr r0, _08027F94  @ =gUnknown_0813CE80
	ldrb r1, [r3, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r3, #0
	bl _call_via_r1
_08027F8A:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08027F90:
	.4byte gUnknown_03000E20
_08027F94:
	.4byte gUnknown_0813CE80
	THUMB_FUNC_END sub_08027F44

