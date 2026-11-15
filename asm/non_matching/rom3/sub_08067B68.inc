	THUMB_FUNC_START sub_08067B68
sub_08067B68: @ 0x08067B68
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _08067BB8  @ =gUnknown_0814C618
	mov r0, #192
	and r0, r0, r5
	cmp r0, #0
	bne _08067B9E
	mov r1, #4
	add r0, r5, #0
	orr r0, r0, r1
	bl sub_08068014
	add r4, r0, #0
	ldrh r1, [r4, #2]
	mov r0, #3
	add r2, r6, #0
	bl sub_08067F84
	lsl r0, r0, #24
	cmp r0, #0
	bne _08067B9E
	ldrh r1, [r4, #4]
	mov r0, #3
	add r2, r6, #0
	bl sub_08067F84
_08067B9E:
	add r0, r5, #0
	bl sub_08068014
	add r4, r0, #0
	ldrh r1, [r4, #2]
	mov r0, #3
	add r2, r6, #0
	bl sub_08067F84
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08067BB8:
	.4byte gUnknown_0814C618
	THUMB_FUNC_END sub_08067B68

