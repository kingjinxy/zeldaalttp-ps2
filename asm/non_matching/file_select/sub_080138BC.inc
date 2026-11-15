	THUMB_FUNC_START sub_080138BC
sub_080138BC: @ 0x080138BC
	push {r4,r5,lr}
	sub sp, sp, #8
	mov r4, #0
	str r4, [sp]
	ldr r1, _080138E4  @ =gUnknown_0201EF30
	ldr r5, _080138E8  @ =0x05000030
	mov r0, sp
	add r2, r5, #0
	bl CpuSet
	str r4, [sp, #4]
	add r0, sp, #4
	ldr r1, _080138EC  @ =gUnknown_02003110
	add r2, r5, #0
	bl CpuSet
	add sp, sp, #8
	pop {r4,r5}
	pop {r0}
	bx r0
_080138E4:
	.4byte gUnknown_0201EF30
_080138E8:
	.4byte 0x05000030
_080138EC:
	.4byte gUnknown_02003110
	THUMB_FUNC_END sub_080138BC

