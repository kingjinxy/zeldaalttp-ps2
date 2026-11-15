	THUMB_FUNC_START sub_080437F8
sub_080437F8: @ 0x080437F8
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0804382C  @ =gUnknown_03000C00
	ldrb r1, [r0]
	cmp r1, #0
	bne _0804381C
	ldr r0, _08043830  @ =gUnknown_08428794
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
_0804381C:
	ldr r0, [r7]
	bl sub_08003688
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0804382C:
	.4byte gUnknown_03000C00
_08043830:
	.4byte gUnknown_08428794
	THUMB_FUNC_END sub_080437F8

