	THUMB_FUNC_START sub_080B3580
sub_080B3580: @ 0x080B3580
	push {lr}
	sub sp, sp, #4
	bl sub_08069E08
	mov r0, #0
	bl sub_080B1B18
	ldr r0, _080B35A8  @ =0x00FC00FC
	str r0, [sp]
	ldr r1, _080B35AC  @ =gUnknown_02001600
	ldr r2, _080B35B0  @ =0x01000080
	mov r0, sp
	bl CpuFastSet
	bl sub_080B31BC
	add sp, sp, #4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B35A8:
	.4byte 0x00FC00FC
_080B35AC:
	.4byte gUnknown_02001600
_080B35B0:
	.4byte 0x01000080
	THUMB_FUNC_END sub_080B3580

