	THUMB_FUNC_START sub_0801017C
sub_0801017C: @ 0x0801017C
	push {r4,lr}
	sub sp, sp, #4
	ldr r4, _080101B0  @ =gUnknown_02016D60
	ldrb r0, [r4, #22]
	cmp r0, #0
	beq _08010192
	mov r0, #0
	strb r0, [r4, #22]
	ldr r0, _080101B4  @ =0x80050000
	bl play_sound
_08010192:
	add r1, r4, #0
	add r1, r1, #35
	mov r0, #0
	strb r0, [r1]
	strb r0, [r4, #21]
	str r0, [sp]
	ldr r1, _080101B8  @ =0x0600E180
	ldr r2, _080101BC  @ =0x01000080
	mov r0, sp
	bl CpuFastSet
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_080101B0:
	.4byte gUnknown_02016D60
_080101B4:
	.4byte 0x80050000
_080101B8:
	.4byte 0x0600E180
_080101BC:
	.4byte 0x01000080
	THUMB_FUNC_END sub_0801017C

