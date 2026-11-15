	THUMB_FUNC_START sub_080379BC
sub_080379BC: @ 0x080379BC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r1, r7, #0
	strh r0, [r1]
	ldr r0, _080379F0  @ =gUnknown_03000940
	ldrh r1, [r0]
	ldr r0, _080379F4  @ =0x0000FFFF
	cmp r1, r0
	beq _080379F8
	ldr r0, _080379F0  @ =gUnknown_03000940
	add r1, r7, #0
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r2, r1, #0
	add r1, r0, #0
	and r1, r1, r2
	add r0, r7, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldrh r0, [r0]
	cmp r1, r0
	bne _080379F8
	mov r0, #1
	b _08037A8C
	.byte 0x00
	.byte 0x00
_080379F0:
	.4byte gUnknown_03000940
_080379F4:
	.4byte 0x0000FFFF
_080379F8:
	ldr r0, _08037A20  @ =gUnknown_03000940
	ldrh r1, [r0, #2]
	ldr r0, _08037A24  @ =0x0000FFFF
	cmp r1, r0
	beq _08037A28
	ldr r0, _08037A20  @ =gUnknown_03000940
	add r1, r7, #0
	ldrh r0, [r0, #2]
	ldrh r1, [r1]
	add r2, r1, #0
	add r1, r0, #0
	and r1, r1, r2
	add r0, r7, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldrh r0, [r0]
	cmp r1, r0
	bne _08037A28
	mov r0, #2
	b _08037A8C
_08037A20:
	.4byte gUnknown_03000940
_08037A24:
	.4byte 0x0000FFFF
_08037A28:
	ldr r0, _08037A50  @ =gUnknown_03000940
	ldrh r1, [r0, #4]
	ldr r0, _08037A54  @ =0x0000FFFF
	cmp r1, r0
	beq _08037A58
	ldr r0, _08037A50  @ =gUnknown_03000940
	add r1, r7, #0
	ldrh r0, [r0, #4]
	ldrh r1, [r1]
	add r2, r1, #0
	add r1, r0, #0
	and r1, r1, r2
	add r0, r7, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldrh r0, [r0]
	cmp r1, r0
	bne _08037A58
	mov r0, #3
	b _08037A8C
_08037A50:
	.4byte gUnknown_03000940
_08037A54:
	.4byte 0x0000FFFF
_08037A58:
	ldr r0, _08037A80  @ =gUnknown_03000940
	ldrh r1, [r0, #6]
	ldr r0, _08037A84  @ =0x0000FFFF
	cmp r1, r0
	beq _08037A88
	ldr r0, _08037A80  @ =gUnknown_03000940
	add r1, r7, #0
	ldrh r0, [r0, #6]
	ldrh r1, [r1]
	add r2, r1, #0
	add r1, r0, #0
	and r1, r1, r2
	add r0, r7, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldrh r0, [r0]
	cmp r1, r0
	bne _08037A88
	mov r0, #4
	b _08037A8C
_08037A80:
	.4byte gUnknown_03000940
_08037A84:
	.4byte 0x0000FFFF
_08037A88:
	mov r0, #0
	b _08037A8C
_08037A8C:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080379BC

