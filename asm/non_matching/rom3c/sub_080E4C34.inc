	THUMB_FUNC_START sub_080E4C34
sub_080E4C34: @ 0x080E4C34
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E4C7C
	add r0, r4, #0
	mov r1, #8
	bl sub_080E33BC
	add r0, r4, #0
	mov r1, #4
	bl sub_080E3024
	ldr r0, _080E4C84  @ =gRam
	ldr r1, _080E4C88  @ =0x00000F92
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #19
	bhi _080E4C74
	add r0, r4, #0
	bl sub_080E4A74
_080E4C74:
	add r0, r5, #0
	mov r1, #10
	bl sub_080C57F8
_080E4C7C:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080E4C84:
	.4byte gRam
_080E4C88:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080E4C34

