	THUMB_FUNC_START sub_0812C2E0
sub_0812C2E0: @ 0x0812C2E0
	push {lr}
	add r3, r0, #0
	ldr r0, [r1, #4]
	cmp r0, #0
	beq _0812C308
	mov r0, #0
	str r0, [r1, #4]
	ldr r2, [r1, #116]
	cmp r2, #0
	beq _0812C2F8
	ldr r0, [r1, #112]
	str r0, [r2, #112]
_0812C2F8:
	ldr r2, [r1, #112]
	cmp r2, #0
	beq _0812C304
	ldr r0, [r1, #116]
	str r0, [r2, #116]
	b _0812C308
_0812C304:
	ldr r0, [r1, #116]
	str r0, [r3, #12]
_0812C308:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0812C2E0

