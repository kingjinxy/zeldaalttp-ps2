	THUMB_FUNC_START sub_0803781C
sub_0803781C: @ 0x0803781C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r1, r7, #0
	strh r0, [r1]
	ldr r0, _08037850  @ =gUnknown_03005E10
	ldrh r1, [r0]
	ldr r0, _08037854  @ =0x0000FFFF
	cmp r1, r0
	beq _08037858
	ldr r0, _08037850  @ =gUnknown_03005E10
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
	bne _08037858
	mov r0, #1
	b _080378EC
	.byte 0x00
	.byte 0x00
_08037850:
	.4byte gUnknown_03005E10
_08037854:
	.4byte 0x0000FFFF
_08037858:
	ldr r0, _08037880  @ =gUnknown_03005E10
	ldrh r1, [r0, #2]
	ldr r0, _08037884  @ =0x0000FFFF
	cmp r1, r0
	beq _08037888
	ldr r0, _08037880  @ =gUnknown_03005E10
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
	bne _08037888
	mov r0, #2
	b _080378EC
_08037880:
	.4byte gUnknown_03005E10
_08037884:
	.4byte 0x0000FFFF
_08037888:
	ldr r0, _080378B0  @ =gUnknown_03005E10
	ldrh r1, [r0, #4]
	ldr r0, _080378B4  @ =0x0000FFFF
	cmp r1, r0
	beq _080378B8
	ldr r0, _080378B0  @ =gUnknown_03005E10
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
	bne _080378B8
	mov r0, #3
	b _080378EC
_080378B0:
	.4byte gUnknown_03005E10
_080378B4:
	.4byte 0x0000FFFF
_080378B8:
	ldr r0, _080378E0  @ =gUnknown_03005E10
	ldrh r1, [r0, #6]
	ldr r0, _080378E4  @ =0x0000FFFF
	cmp r1, r0
	beq _080378E8
	ldr r0, _080378E0  @ =gUnknown_03005E10
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
	bne _080378E8
	mov r0, #4
	b _080378EC
_080378E0:
	.4byte gUnknown_03005E10
_080378E4:
	.4byte 0x0000FFFF
_080378E8:
	mov r0, #0
	b _080378EC
_080378EC:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803781C

