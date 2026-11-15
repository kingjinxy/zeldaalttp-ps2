	THUMB_FUNC_START sub_08037A94
sub_08037A94: @ 0x08037A94
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r1, r7, #0
	strh r0, [r1]
	ldr r0, _08037AC4  @ =gUnknown_03000940
	ldrh r1, [r0]
	ldr r0, _08037AC8  @ =0x0000FFFF
	cmp r1, r0
	beq _08037ACC
	ldr r0, _08037AC4  @ =gUnknown_03000940
	add r1, r7, #0
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r2, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08037ACC
	mov r0, #1
	b _08037B54
	.byte 0x00
	.byte 0x00
_08037AC4:
	.4byte gUnknown_03000940
_08037AC8:
	.4byte 0x0000FFFF
_08037ACC:
	ldr r0, _08037AF0  @ =gUnknown_03000940
	ldrh r1, [r0, #2]
	ldr r0, _08037AF4  @ =0x0000FFFF
	cmp r1, r0
	beq _08037AF8
	ldr r0, _08037AF0  @ =gUnknown_03000940
	add r1, r7, #0
	ldrh r0, [r0, #2]
	ldrh r1, [r1]
	add r2, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08037AF8
	mov r0, #2
	b _08037B54
_08037AF0:
	.4byte gUnknown_03000940
_08037AF4:
	.4byte 0x0000FFFF
_08037AF8:
	ldr r0, _08037B1C  @ =gUnknown_03000940
	ldrh r1, [r0, #4]
	ldr r0, _08037B20  @ =0x0000FFFF
	cmp r1, r0
	beq _08037B24
	ldr r0, _08037B1C  @ =gUnknown_03000940
	add r1, r7, #0
	ldrh r0, [r0, #4]
	ldrh r1, [r1]
	add r2, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08037B24
	mov r0, #3
	b _08037B54
_08037B1C:
	.4byte gUnknown_03000940
_08037B20:
	.4byte 0x0000FFFF
_08037B24:
	ldr r0, _08037B48  @ =gUnknown_03000940
	ldrh r1, [r0, #6]
	ldr r0, _08037B4C  @ =0x0000FFFF
	cmp r1, r0
	beq _08037B50
	ldr r0, _08037B48  @ =gUnknown_03000940
	add r1, r7, #0
	ldrh r0, [r0, #6]
	ldrh r1, [r1]
	add r2, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08037B50
	mov r0, #4
	b _08037B54
_08037B48:
	.4byte gUnknown_03000940
_08037B4C:
	.4byte 0x0000FFFF
_08037B50:
	mov r0, #0
	b _08037B54
_08037B54:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08037A94

