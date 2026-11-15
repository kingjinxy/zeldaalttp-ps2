	THUMB_FUNC_START sub_0801239C
sub_0801239C: @ 0x0801239C
	push {lr}
	sub sp, sp, #4
	mov r0, #0
	str r0, [sp]
	ldr r1, _080123B4  @ =gEntityList
	ldr r2, _080123B8  @ =0x05001000
	mov r0, sp
	bl CpuSet
	add sp, sp, #4
	pop {r0}
	bx r0
_080123B4:
	.4byte gEntityList
_080123B8:
	.4byte 0x05001000
	THUMB_FUNC_END sub_0801239C

