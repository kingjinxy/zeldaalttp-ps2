	THUMB_FUNC_START sub_080378F4
sub_080378F4: @ 0x080378F4
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r1, r7, #0
	strh r0, [r1]
	ldr r0, _08037924  @ =gUnknown_03005E10
	ldrh r1, [r0]
	ldr r0, _08037928  @ =0x0000FFFF
	cmp r1, r0
	beq _0803792C
	ldr r0, _08037924  @ =gUnknown_03005E10
	add r1, r7, #0
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r2, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _0803792C
	mov r0, #1
	b _080379B4
	.byte 0x00
	.byte 0x00
_08037924:
	.4byte gUnknown_03005E10
_08037928:
	.4byte 0x0000FFFF
_0803792C:
	ldr r0, _08037950  @ =gUnknown_03005E10
	ldrh r1, [r0, #2]
	ldr r0, _08037954  @ =0x0000FFFF
	cmp r1, r0
	beq _08037958
	ldr r0, _08037950  @ =gUnknown_03005E10
	add r1, r7, #0
	ldrh r0, [r0, #2]
	ldrh r1, [r1]
	add r2, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08037958
	mov r0, #2
	b _080379B4
_08037950:
	.4byte gUnknown_03005E10
_08037954:
	.4byte 0x0000FFFF
_08037958:
	ldr r0, _0803797C  @ =gUnknown_03005E10
	ldrh r1, [r0, #4]
	ldr r0, _08037980  @ =0x0000FFFF
	cmp r1, r0
	beq _08037984
	ldr r0, _0803797C  @ =gUnknown_03005E10
	add r1, r7, #0
	ldrh r0, [r0, #4]
	ldrh r1, [r1]
	add r2, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08037984
	mov r0, #3
	b _080379B4
_0803797C:
	.4byte gUnknown_03005E10
_08037980:
	.4byte 0x0000FFFF
_08037984:
	ldr r0, _080379A8  @ =gUnknown_03005E10
	ldrh r1, [r0, #6]
	ldr r0, _080379AC  @ =0x0000FFFF
	cmp r1, r0
	beq _080379B0
	ldr r0, _080379A8  @ =gUnknown_03005E10
	add r1, r7, #0
	ldrh r0, [r0, #6]
	ldrh r1, [r1]
	add r2, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _080379B0
	mov r0, #4
	b _080379B4
_080379A8:
	.4byte gUnknown_03005E10
_080379AC:
	.4byte 0x0000FFFF
_080379B0:
	mov r0, #0
	b _080379B4
_080379B4:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080378F4

