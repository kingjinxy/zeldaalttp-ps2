	THUMB_FUNC_START sub_080EFC74
sub_080EFC74: @ 0x080EFC74
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EFCB8
	add r0, r4, #0
	bl sub_080EF72C
	add r0, r4, #0
	bl Sprite3_CheckIfActive_Permissive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EFCB8
	ldr r1, _080EFCC0  @ =gUnknown_08178BE8
	ldr r0, _080EFCC4  @ =gRam
	ldr r2, _080EFCC8  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080EFCB8:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_080EFCC0:
	.4byte gUnknown_08178BE8
_080EFCC4:
	.4byte gRam
_080EFCC8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EFC74

